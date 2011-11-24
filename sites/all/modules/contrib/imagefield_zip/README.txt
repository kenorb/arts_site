
---------------------------------------
IMAGEFIELD ZIP/HTML5 BULK UPLOAD MODULE
---------------------------------------


CONTENTS OF THIS FILE
---------------------

 * Installation Instructions
 * Configuration Options


INSTALLATION INSTRUCTIONS
-------------------------

This module recommends that the php zip extension to be installed. Directions on
how to do that can be found here: http://php.net/zip.installation

Go to the permissions page admin/user/permissions and select which roles have
the "access imagefield_zip widget" permission.

The field's widget type needs to be "Image".


CONFIGURATION OPTIONS
---------------------

Configuration options for imagefield zip are under admin/settings/imagefield-zip
and under the fields widget settings. Options are:

Location of the zip upload field:
 * Above
 * Below
 * Disabled
This controls where the zip upload field will appear in relation to the
imagefield.

Upload field mode:
 * Zip Files Only
 * HTML 5 Multi-upload Only
 * Both Zip & HTML 5
Zip Files Only - Only zip files can be uploaded and the zip files must contain
valid images.
HTML 5 Multi-upload Only - Multiple images can be uploaded at once due to the
html5 file input field.
Both Zip & HTML 5 - Zip files or multiple images can be uploaded at the same
time.

Non HTML5 Fallback Mode:
 * Degrade to zip only
 * Show message that your browser does not support HTML5
 * Disable Multi Upload
This is only shown when "HTML 5 Multi-upload Only" is selected. If Both Zip &
HTML 5 is selected then it will degrade to zip only by default.
