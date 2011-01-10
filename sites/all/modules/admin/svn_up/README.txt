$Id: README.txt,v 1.1 2010/05/14 15:06:01 elliotttt Exp $

Description:
SVN Up is a simple module that, as the name suggests,
updates a particular folder of your Drupal site from
an SVN code base.

Requirements:
SVN on your server, and the ability to store svn/ssh
credentials for your www-data or apache user.

For more information about that, please have a look at
http://jyotsna.philogy.com/2008/12/how-to-make-svn-remember-password/

Installation:
1. You must do your initial svn checkout from the command line AS
the web user. 

On my Debian machine, I switched to root, then switched to the www-data user
by typing:
su -s /bin/sh www-data

Next I navigated to /path/to/drupal/sites/ and typed:
svn co svnusername:svn.repositoryurl/path/to/specific/folder

And entered the prompted credentials.

To test that it stored my password, I next tried:
svn up

And if it works, you should be good to go.

2. Install the module

3. Go to your settings (and optionally set the permissions),
and enter the local path you'd like to update via svn

Usage:
The module will add an SVN Update link to your menu, and
you can click it to run an svn up command from hereon-out.

Output from the command line will appear after you confirm.

WARNING!!!!

This module will update/alter/remove code from your site and
should NOT be used for an entire site! 

Recommended usage is for updating a particular custom module
or theme in a staging environment and NOT production.