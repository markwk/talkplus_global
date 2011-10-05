TalkPlus Global 

TalkPlus Module for Drupal 6
by markwk | Int3.com
github.com/markwk
markwkoester@gmail.com
***************************

The TalkPlus module provides some simple integration between the TalkPlus live chat 
service and Drupal. The module also provides a 
[Context](http://drupal.org/project/context) reaction to allow you to add the 
code using more complex Context-based rules, such as adding the code at 
specific paths, for specific roles, or other criteria. For instance, you could 
only show the TalkPlus chat on the home page to anonymous users.

Installation
============
1. Place this module in your modules directory and enable it.
2. Visit http://talkpl.us/widget add your site and copy the code chunk
4. Visit admin/settings/TalkPlus on your Drupal site and paste the code chunk 
into the textarea. Submit the settings form.

Optional: If using Context module, enable the "use Context" setting on the 
admin/settings/TalkPlus page. Then visit admin/build/context and add the "TalkPlus" 
reaction to one of your context items.

Note:
This code was heavily adapted from Olark module