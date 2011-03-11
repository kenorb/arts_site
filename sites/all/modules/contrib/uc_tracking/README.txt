About
=====
Tracking information is probably the most important thing the customer is
interested in seeing after an order is placed!  The customer wants
to know "Where's my stuff?", and you don't want him bugging you about it.

This module lets your customer (or you, the admin) track shipped packages.
It uses a hook to interface with installed shipping methods, so it can
support tracking packages sent by any carrier, provided the hook is
implemented.  This module comes with hooks pre-written for FedEx, UPS and USPS.

It works by modifying the user order history page (e.g. user/4/orders) to
display a clickable tracking number (or numbers) associated with each order.
The user can click on the number and get real-time tracking details for
his merchandise.

I decided to display the tracking number on the order history page so
the customer wouldn't have to drill down and look for the tracking number -
it should be right up top, since it's the thing they care about most. 
This active tracking link should also be available on any page where the
tracking number appears, but to do that easily requires modifications to
the core Ubercart modules.


Installing
==========
Download the uc_tracking module.  Enable it at admin/build/modules.

Note that none of the shipping quote modules are listed as dependencies.
That is not a mistake - this module checks for shipping methods implementing
the hook.  However, if you want to get tracking information for a specific
carrier you MUST have that carrier's shipping quotes module installed,
enabled, and configured with the correct authorization information (user id,
password) needed to contact the carrier's server.  It is NOT necessary to
turn on shipping quotes for that carrier - simply enabling the module is
sufficient.

A side effect of this is that uc_tracking essentially "inherits" requirements
from the various shipping modules. It has to assume that each shipping module
properly documents and checks its own requirements.  The way to ensure all
requirements are met is to first get shipping quotes working for each
carrier you intend to track, even if you won't be using the quoting feature
on your production site.  After you have quoting working for a particular
carrier you may turn off the quoting.

Note that both the UPS and FedEx modules use SSL for communicating back to
the carrier's web server.  The FedEx module documents this in its README.txt
and gives instructions for detecting and configuring SSL on your web site.
The UPS module doesn't document this dependency.  Bottom line is that if
you can obtain quotes with UPS you can track, and likewise with FedEx.  If
quoting fails, so will tracking.


Using
=====
When you ship a package, you need to choose the carrier from the select box
at admin/store/orders/#/shipments/#/edit and enter a tracking number.  The
carriers displayed are chosen from the list of enabled shipping quotes
modules.

Alternatively, both the UPS and FedEx modules provide integrated shipping
solutions which can automatically generate shipping labels and fill in the
tracking numbers in Ubercart.  Instructions for how to use this feature
can be found in those modules' documentation.

Tracking numbers will now show up as active links in the user order
history page at user/#/orders.  Clicking these links will contact the
carrier's server to get and display real-time tracking information.


Implementation details
======================
No Ubercart core modules were harmed in the making of this contribution.
However, some functions were ruthlessly overridden, resulting in some core
modules with hurt feelings.

Specifically, the user/#/orders menu, defined in uc_order_menu(), was
overridden to call my uc_tracking_order_history() function instead of the
core uc_order_history() function.  Likewise, the uc_shipping_shipment_edit
form was altered to force the admin to select a carrier to associate with
the entered tracking number ("Other" is also allowed...).  This is necessary
because to track a package, the code needs to know which carrier the tracking
number is for.

This module defines hook_uc_tracking() and provides implementations
for FedEx, UPS, and USPS tracking.  Adding support for other carriers
only requires implementation of that one hook.

hook_uc_tracking() returns an associative array in a specific format
containing tracking details.  The format of this array is described in the
comments in uc_tracking.module.

The code is commented throughout. 

It is intended that the implementations of hook_uc_tracking() provided
for FedEx, UPS, and USPS will be moved into their corresponding shipping
quotes modules and removed from this uc_tracking module.
