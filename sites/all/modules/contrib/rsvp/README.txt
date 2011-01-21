The rsvp module allows users to create invitations to events and invite people to this event and maintain a 
list of guests.Starting with the drupal 6 integration, the rsvp module provides invitations for events 
created by the event module or the date module, but not mutual.

If you use RSVP I like you to support my work on RSVP for Drupal 6. Please consider 
donating to my PayPal account. A reference can be found in the project page: 
http://drupal.org/node/350019


RSVP 2 comes with many exciting new features:
extensible invitation theme engine, extensible stylesheets, iconsets, images, backgrounds, 
emails are configurable (template based), block support, 
creating invitations now provides expert and basic mode, 
guests can store their real name in the system, actions, 
open invitations (for users only), maximum guest limitation, start end end reply date, 
notifications for guests and moderators, co moderator support.

Requirements:
-Event or Date module.

Optional modules:
-Simplenews
-Buddylist2
-Friendlist
-OrganicGroups
-Signup
-UserRelationships

Installation
---------------------------
   1. Copy the rsvp directory into your drupal modules directory.
   2. Go to Administer | Site Building | Modules and
         1. enable the RSVP module.
         2. enable either the 'RSVP date connector' or the 'RSVP event connector' module. Do not enable both at the same time. If you decide to switch from one connector to the other you have to use the uninstall option to uninstall the current connector before you
            enable the other one. Be careful. Uninstalling a connector will remove all existing invitation and RSVP records. Disabling and enabling is fine though and will not remove existing invitations.
         3. choose which RSVP plugins you want to enable. This decision is mostly based on which of those modules you use. Except for
            the signup plugin, all others will allow the creator of an invitation to add guests based on the module it stands for.
            I personally would enable the RSVP roles plugin because it allows to select guests by drupal system role, and the plaxo plugin which allows you to import addresses from your external addressbook.



Configuration
------------------------------
   1. Enable permissions appropriate to your site.
      The rsvp main module provides the following permissions:

    * administer rsvp - full access.
    * maintain rsvp - permission to modify all invitations, but no permissions to modify 
      the general rsvp settings.
    * rsvp on events - create invitations on nodes.
    * rsvp on own events - create invitations on your own nodes.
    * rsvp system users - permission to invite persons based on available roles.
    * rsvp multiple invitations per event - permission to create more then one invitation per event.

    Additionaly Each plugin has its own permission that needs to be configured. 
    For example the 'rsvp invite simplenews' permission determines who can add guests based on 
    newsletter subscribers.
    
   2. General RSVP setup at 'Administer|Site configuration|RSVP settings'.

    1. General settings
       1. Select the email address that should be used whenever an email will be sent by the 
          RSVP module (invitations, messages to guests).
       2. The Email Options section allows you to modify the email templates that will be used 
          when the RSVP module sends emails to
          guests..
    2. Default Settings
       Specify the initial settings for all invitations that will be created on your website.
       1. Select default theme, style and iconset. Users can create their own themes/stylesheets 
          which will be explained later.
       2. Maximum guests allowed. If the number of guests exceeds the selected maximum, 
          following invitees can not reply with "yes" anymore.
       Hint: Changes to the default settings will not be propagated to previously created invitations. You
       have to update each existing invitations one by one to reflect those changes.
    3. Associations
          - If you use the event module ('RSVP event connector' module is installed and enabled) 
            you are set to create invitations for existing events.
            It is not necessary to create an association for the event module because the event 
            content type uses a build-in field using as event startdate. 
          - If you use the date module ('RSVP date connector' module is installed and enabled) 
            the administrator need to configure for all content types that carry Date or Datetime fields, 
            which field should be used when invitations are being created for that content type. 
            The RSVP module can manage multiple "event enabled" content types. 
            However it is not possible to select more then one field per content type.
               1. Create fields
                  A custom field of type Date or Datetime is required for content types you intend to 
                  create invitations for later. If not done yet create the fields now. 
                  Add a custom field of type Date or Datetime to all the content types that you want 
                  to utilize as potential events in the future.
               2. Create association(s)
                  Select the content type under admin/content/types and find the "RSVP Settings" section.
                  Select the field that you want to use.
                  If the field selection box is empty, you did not setup a proper field inside the content type.

   3. Enable Blocks.
      RSVP supports now three blocks that can be enabled.
      (Host toolbox block, Guest toolbox block and Guest list block).
   
   4. Disable the WYSIWYG editor for the "guests you like to invite" / "Add guests" textarea which 
   is part of the "manage guests" form when creating an invitation. 
   The Wysiwyg editor should be disabled for those fields by default(Tested with FcK). If the editor is visible,
   Please exclude field "edit-recipients" in the editors settings manually.



Manage invitations
------------------------------------
Administrators and Maintainers have one central place where all available invitations 
for all events and all users are listed. It can be found under 
'Adminstrator|Content management|RSVP management'




Create invitations
-------------------------------------
Go to the node you want to create an invitation for and click on the Invitation tab.
If the Invitation tab is not available,
-verify that this content type is enabled in the rsvp settings.
-verify that the user has the right permissions ("rsvp on events" or "rsvp on own events")

After setting up and configuring the invitation the creator has to add guests to the 
guest list for this invitation within the "Manage guests" tab.
The default procedure to add registered users or other persons would be to add them 
to the "Add guests" text field. If the user has the permissions and installed the respective plugin 
he also has the option to select users by role, or by newsgroup,....
In general, when you add a person to the guest list by its email address, 
the RSVP module tries to match the entered email address with a registered users. 
When you add a person to the guest list by its name, the RSVP module tries to match the entered name 
with a registered user name.
The rsvp modules does not allow duplicates in the guest list. 
Adding invitees to the guest list does not automatically send out invitation emails to those invitees. 
That needs to be done in a seperate step. Inside the Guest list there is a section "No invitation
sent" with a list of invitees that have not been notified by email.
Press the "Send invitation" link to send the invitation to those users by email.

Modify invitations
----------------------------------
It is possible to change all setting of an invitation even if it is already underway.
Automatic startdate adjustment is not supported yet. If the startdate of an event/node changes, 
the startdate of the related invitation needs to be changed as well.

Theme enhancements.
----------------------------------
Administrators now can create their own RSVP templates, stylesheets and iconsets that can be used 
to display future invitations. You either can add stylesheets to an existing template to support 
a different color scheme or style. If that is not enough you can add your own templates to rsvp.
RSVP comes with one build in theme and stylesheet which is called default and is located 
in subfolder modules\rsvp\themes\default and you can use those files as template for your own styles.

User defined templates can be created in the files directory (usually located at sites\default\files\)
-To create your own template with name "nexus", create a folder sites\default\files\rsvp\temes\nexus, 
then copy all files from modules\rsvp\themes\default into the nexus folder. 
The folder name becomes automatically the template name. The name of the stylesheet file without 
the extension is the style that is being displayed when creating an rsvp.

-To create an additional stylesheet "dream" for your nexus template, copy one of the existing .css files 
from folder sites\default\files\rsvp\temes\nexus and rename it to dream.css. Then change the content 
of dream.css to fit your requirements.

-To create your own iconset, with name "moon", create a folder sites\default\files\rsvp\icons\moon, 
then copy all the icon files from modules\rsvp\icons\flags into the newly created moon subfolder. The
folder name is automatically the iconset name. Now you can overwrite all icons in the moon subfolder 
with your own icons.

-To add your own backgrounds, create a folder sites\default\files\rsvp\backgrounds, 
then copy your images into the folder that you want use as background for your invitations.

-To add your own images, create a folder sites\default\files\rsvp\images, then copy your images 
into the folder that you want use as images that are being displayed with your invitation.

-Each invitation stores its utilized theme, stylesheet file, iconset, images and background.
Therefore, when you implement new styles, you have to change existing invitations to reflect your new style.



Security considerations
------------------------
Individual guests can access their personal invitation through a unique hashcode that is embedded in the URL
like in the following example: http://example.com/rsvp/email/223485daacc3cb84886697ae0cb31f1f/view.
By default this type of link will also be send out with every email that is being generated from within the RSVP module.
For registered users it is currently not required to be logged-in in order to view their invitation
or to change their reply to the invitation.

This is a feature as this also allows you to invite non-members (aka anonymous users) and the possibility
to access and to respond to the invitation.

Some consider this a security risk because whoever gets access to such a hash code can view the
invitation and change the response of that particular guest. Since the emails sent by the RSVP module by
default include the urls including the hash code, the invitation is vulnerable to a man in the middle attack.

There are two options you currently have:
1) Do not use the RSVP invitation system to transport sensitive material.
2) Remove the RSVP related links from the email templates.
Without the published hash it is difficult for someone to phish for the invitation. In this scenario
unregistered guests can not access the invitation without having access to their hash.

The perfect solution would be to have an additional configurable option which require guests to login
when they access their invitation by URL.



Terminology:
-----------------------
    * RSVP:The module name. 
      (The term R.S.V.P. comes from the French expression "répondez s'il vous plaît", meaning "please respond").
    * Event:A node on which an invitation can be created on.
    * Invitation:The invitation generated for an event or an invitation someone receives for an event. 
      A displayed invitation consists of three logical parts. The invitation text, 
      the guest list and the reply box.
    * Invitee:A person invited to an event by adding the person to an invitation.
    * Respondent:An invitee who replied if he will attend or not.
    * Attendee:A respondent who confirmed that he will attend the event.
    * Association:A connection between a content type and a Date and Datetime field created for the content type.
    * Guest list:All persons (= all Invitees) that have been invited to an event.
    * Guest:A person invited to an event (=Invitee).



   
Possible Features for following releases:
-----------------------------------------
This is a list with all the improvements that the community suggested during the time I wrote the current rsvp 
implementation. If you like to see one of the following features requests implemented earlier then later,
please consider donating. A reference to my paypal account can be found in the project page: http://drupal.org/node/350019


1. General architectural improvements that would make rsvp faster, more versatile and easier to use.
--------

1.1) Tighter Integration to event nodes. Why do we need an extra Invitation page at all??
-http://drupal.org/node/530428
Is it possible to create an RSVP invitation from the Body of content so that the invitation is not redundant. 
When a person creates a date event, the body of invitation must be filled out to describe the event but this 
must be repeated when an RSVP invitation is created which makes it redundant. 
Is it possible to use the information from the Body as a template for the invitation.
=> Global option, and then remove invitation body completely if enabled.

1.2) Own contenttype: http://drupal.org/node/231019. 
1.3) Allow parallel usage of event connector and date connector.
1.4) preview option when writing an rsvp.
1.5) automatic update of invitations startdate when startdate in node changes.

1.6) Support for multiple ckk fields per content type (select one during invitation creation). http://drupal.org/comment/reply/485694

1.7) offer open registration for anonymous users.

1.8) optimization of RSVP queries (links, permission queries) (http://www.lullabot.com/articles/a_beginners_guide_to_caching_data, http://drupal.org/node/145279)

1.9) Can not delete Invitation if the event startdate is expired. (startdate field is empty).

1.10) Cleanup tpl files. Remove all images from tpl files into preprocess files and invent new div to set the image size.


2. Configuration/Options
---------
2.1) more options about who can send messages to whom: checkboxes per group (invitee, respondent, attendees).
2.1.1) http://drupal.org/comment/reply/756020: Option to send message only to author.

2.2) http://drupal.org/node/397888 : Configure, which options are listed on the basic screen and which are extended.

2.3) http://drupal.org/node/490166: Adding RSVP option (default option) for initial response

2.4) http://drupal.org/node/548468 : configure how much dependents a user can bring maximum.

2.5) Configuration to force people to sign-in before responding / result: anonymous responses are not allowed anymore.
      adding anonymous guests should be prevented in this case.

2.6) See "Security considerations": The correct solution would be to have an additional configurable option
to require registered guests to login when they access their invitation by URL.
As second option "Allow unregistered guests" would allow to continue using hash URLs for anonymous users. As a consequence,
this option would prevent anonymous users from accessing the invitation and the "Add Guests" functionality
could filter out unregistered guests.

2.7) http://drupal.org/node/821844: 
- need to limit the invitation to just one party (can be a registered user or a new user)
- need to limit their response to just one response (no changes possible afterwards)
- need to add a role based on user's response -> rules ???.



3. User Interaction - Input/Output/Emails
-----------
3.1) http://drupal.org/node/180153 : Add invitations to "MyCalendar" 
3.2) http://drupal.org/node/219555 : Include links to reply directly through e-mail?

3.3) http://drupal.org/node/499372
Maybe my expectations but I thought this was going to enable the recipient to 'reply' via email, 
and something like MailHandler would flick it in as an RSVP - provided of course the recipient did the right thing, 
by typing Yes, No or Maybe 'above the line'.


3.4) Email: http://drupal.org/node/84918/ and http://drupal.org/node/821844: 
     Send emails via privatemsg instead by email (send_privatemsg).
3.5) Guest List: Add icon for regular invitees to view status.
3.6) Add red reply button instead of link like the event manager module has(-http://em-demo.mind-sky.com/?q=node/3).
3.7) provide a reply box that has all the same features like evite. http://drupal.org/node/64208 

3.8) http://drupal.org/node/397888 : For guests, Invitation tab can forward to the invitation if only one invitation is available.

3.9) allow parameters for views.

3.10) Send automatic notification email before the event starts (cron or manual) See Signup module.
3.11) Send automatic invitation email (cron)
3.12) Send emails using batch processing (http://api.drupal.org/api/group/batch)
3.13) Support for html in emails (http://drupal.org/node/516360)

3.14) http://drupal.org/node/728826: Support for "My GuestLists" block.

4. Integrations
------------
4.1) Integration with CiviCRM 
-http://drupal.org/node/38918, http://drupal.org/node/30522: CiviCRM integration (in all the obvious ways: Personal information being added to Contacts, direct registration, events being added to "Activities")

4.2) http://drupal.org/node/461720 : Implement uebercart integration instead of reply box .

4.3) Signup integration: Global option: If user selects not to attend, the signup integration should remove the user also from the signup.
4.4) Signup integration: Enabling signup integration per invitation -> make it configurable
4.5) Signup integration: http://drupal.org/node/729598 : deny to attend closed signups in the firstplace.
4.6) Signup integration: Missing check if a node is a "signup" node. Currently it is based on assumptions.




