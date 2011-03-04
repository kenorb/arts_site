========================================
  Role Weights - role_weights
  Paul Byrne  <paul@leafish.co.uk>
  Last updated 31/03/2009
========================================

A small utility module to allow site admins to specify certain weights for user roles. Its
not much use on its own, more of a helper module for other modules which require this
functionality. Role Weights also provides Tokens and some Views support: views are able
to access, display or sort by the node author's role weight.

Role Weights project on drupal.org: http://drupal.org/project/role_weights

Please post issues and suggestions to the issue tracker: http://drupal.org/project/issues/role_weights


Installation
========================================
1. Upload the role_weights directory to your modules directory.
2. Enable the module under Administer -> Site building -> Modules.
3. Visit Administer -> User management -> Roles and choose the 'edit' link next to a role to change a role's weight.


Usage (with Views)
========================================
Simply create a view - you can now sort by node author's role weight under 'Sort Criteria'.


Usage (without Views)
========================================
Once installed and role weights have been set, modules and themes can make use of:

function role_weights_get_weight($role_id)
- gets the weight value for a specified role

function role_weights_get_weighted_max($roles, $weight_end)
- takes an array of role_id => role_name and returns the 'lightest' (ie closest to -infinity)
  role id when $weight_end parameter is 'lightest' or the 'heaviest' (ie closest to +infinity)
  role id when $weight_end is 'heaviest'


DEPRECATED in 5.x-1.3, all 6.x branches and above:

function role_weights_get_highest($roles)
- takes an array of role_id => role_name and returns the 'highest' role id

This function has been replaced by role_weights_get_weighted_max($roles, 'lightest') and
only remains as a wrapper for backwards compatibility. If your module/code relies on Role
Weights, please update accordingly. This function is deprecated and may be removed in
future versions.


Advanced settings
========================================

Once installed, site admins can enable sorting roles by weight on the Roles configuration
(/admin/user/roles) and Access Control (/admin/user/pages/access) pages by visiting the
Role Weights settings page: /admin/settings/role_weights

Caveat: currently this setting will override Drupal's default sorting (alphabetical). So,
if this variable is set and a roles all have equal weight then the sorting will be less
than satisfactory.

There is an issue for this here: http://drupal.org/node/368088


Notes
========================================
CAUTION! Do NOT allow lower-level roles to edit role weights if another module is relying
on it to control any higher-level stuff like access permissions, site settings and development
modules. I wouldn't really advise this in the first place - this module is intended for simple
selection of roles based on weights for use in, for example, theming usernames & profiles or
choosing the 'highest' from multiple roles.
