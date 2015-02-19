; ----------------
; Generated makefile from http://drushmake.me
; Permanent URL: http://drushmake.me/file.php?token=ba8686a60d67
; ----------------
;
; This is a working makefile - try it! Any line starting with a `;` is a comment.
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7.32

; +++++ Modules +++++

projects[fontyourface][version] = "2.8"
projects[fontyourface][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[admin_menu_source][version] = "1.0"
projects[admin_menu_source][subdir] = "contrib"

projects[coffee][version] = "2.2"
projects[coffee][subdir] = "contrib"

projects[filter_perms][version] = "1.0"
projects[filter_perms][subdir] = "contrib"

projects[module_filter][version] = "2.0-alpha2"
projects[module_filter][subdir] = "contrib"

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.3"
projects[context][subdir] = "contrib"

projects[calendar][version] = "3.5"
projects[calendar][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][subdir] = "contrib"

projects[ds][version] = "2.6"
projects[ds][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha8"
projects[feeds][subdir] = "contrib"

projects[pathologic][version] = "2.12"
projects[pathologic][subdir] = "contrib"

projects[imce][version] = "1.9"
projects[imce][subdir] = "contrib"

projects[absolute_messages][version] = "1.3"
projects[absolute_messages][subdir] = "contrib"

projects[administerusersbyrole][version] = "1.0-beta1"
projects[administerusersbyrole][subdir] = "contrib"

projects[backup_migrate][version] = "3.0"
projects[backup_migrate][subdir] = "contrib"

projects[block_class][version] = "2.1"
projects[block_class][subdir] = "contrib"

projects[email_registration][version] = "1.2"
projects[email_registration][subdir] = "contrib"

projects[empty_page][version] = "1.0"
projects[empty_page][subdir] = "contrib"

projects[entity][version] = "1.5"
projects[entity][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha3"
projects[job_scheduler][subdir] = "contrib"

projects[login_destination][version] = "1.1"
projects[login_destination][subdir] = "contrib"

projects[logintoboggan][version] = "1.4"
projects[logintoboggan][subdir] = "contrib"

projects[masquerade][version] = "1.0-rc7"
projects[masquerade][subdir] = "contrib"

projects[menu_attributes][version] = "1.0-rc2"
projects[menu_attributes][subdir] = "contrib"

projects[menu_item_visibility][version] = "1.0-beta1"
projects[menu_item_visibility][subdir] = "contrib"

projects[menu_token][version] = "1.0-beta5"
projects[menu_token][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[realname][version] = "1.2"
projects[realname][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[rules][version] = "2.7"
projects[rules][subdir] = "contrib"

projects[google_analytics][version] = "2.0"
projects[google_analytics][subdir] = "contrib"

projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"

projects[ckeditor_link][version] = "2.3"
projects[ckeditor_link][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[title_override][version] = "2.3"
projects[title_override][subdir] = "contrib"

projects[views][version] = "3.8"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.2"
projects[views_bulk_operations][subdir] = "contrib"

; +++++ Themes +++++

; ember
projects[ember][type] = "theme"
projects[ember][version] = "2.0-alpha2"
projects[ember][subdir] = "contrib"

; bootstrap
projects[bootstrap][type] = "theme"
projects[bootstrap][version] = "3.0"
projects[bootstrap][subdir] = "contrib"

