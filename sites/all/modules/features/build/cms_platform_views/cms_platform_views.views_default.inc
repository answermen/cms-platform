<?php
/**
 * @file
 * cms_platform_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_platform_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bean_blocks_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Bean Block Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Bean Block Overview';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view bean page';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'language' => 'label',
    'delete_link' => 'delete_link',
    'label' => 'label',
    'views_conditional_1' => 'views_conditional_1',
    'title' => 'title',
    'delta' => 'delta',
    'type' => 'type',
    'operations' => 'operations',
    'edit_link' => 'edit_link',
    'nothing' => 'edit_link',
    'edit_link_1' => 'edit_link_1',
    'nothing_1' => 'nothing_1',
    'views_conditional' => 'views_conditional',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_link' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delta' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_link_1' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Block: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'bean';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  /* Field: Bulk operations: Block */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'bean';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Block: Delete link */
  $handler->display->display_options['fields']['delete_link']['id'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['table'] = 'bean';
  $handler->display->display_options['fields']['delete_link']['field'] = 'delete_link';
  $handler->display->display_options['fields']['delete_link']['label'] = '';
  $handler->display->display_options['fields']['delete_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_link']['element_label_colon'] = FALSE;
  /* Field: Block: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'bean';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Admin Label';
  /* Field: Entity translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'entity_translation';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['text'] = ' ( [language]  )';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = 'Lang. Code';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'language';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'eng';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'en';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'fr';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Block: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'bean';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Block: Block Delta */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'bean';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  /* Field: Block: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bean';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Block: Contextual / Operation links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'bean';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';
  $handler->display->display_options['fields']['operations']['exclude'] = TRUE;
  $handler->display->display_options['fields']['operations']['add_destination'] = 1;
  /* Field: Block: Edit link */
  $handler->display->display_options['fields']['edit_link']['id'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['table'] = 'bean';
  $handler->display->display_options['fields']['edit_link']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link']['label'] = '';
  $handler->display->display_options['fields']['edit_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['text'] = '[edit_link]';
  $handler->display->display_options['fields']['edit_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_link']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['edit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_link']['text'] = 'Edit English';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Language Aware edit link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="button" href="/block/[delta]/edit/[views_conditional_1]?destination=admin/content/blocks">Edit</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Plain Edit Link */
  $handler->display->display_options['fields']['edit_link_1']['id'] = 'edit_link_1';
  $handler->display->display_options['fields']['edit_link_1']['table'] = 'bean';
  $handler->display->display_options['fields']['edit_link_1']['field'] = 'edit_link';
  $handler->display->display_options['fields']['edit_link_1']['ui_name'] = 'Plain Edit Link';
  $handler->display->display_options['fields']['edit_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_link_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_link_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_link_1']['alter']['link_class'] = 'button';
  $handler->display->display_options['fields']['edit_link_1']['text'] = 'Edit';
  /* Field: Translate */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Translate';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Translate';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a class="button" href="/block/[delta]/translate?destination=admin/content/blocks">Translate</a>';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Operations';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'type';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '7';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Slideshow';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[edit_link_1] &nbsp;&nbsp;&nbsp; [delete_link]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[nothing] &nbsp;&nbsp;&nbsp; [delete_link]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Sort criterion: Block: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'bean';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Block: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'bean';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Block: Label */
  $handler->display->display_options['filters']['label']['id'] = 'label';
  $handler->display->display_options['filters']['label']['table'] = 'bean';
  $handler->display->display_options['filters']['label']['field'] = 'label';
  $handler->display->display_options['filters']['label']['operator'] = 'contains';
  $handler->display->display_options['filters']['label']['exposed'] = TRUE;
  $handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['label'] = 'Label';
  $handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';

  /* Display: Bean Block List */
  $handler = $view->new_display('page', 'Bean Block List', 'admin_page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Block: Label */
  $handler->display->display_options['filters']['label']['id'] = 'label';
  $handler->display->display_options['filters']['label']['table'] = 'bean';
  $handler->display->display_options['filters']['label']['field'] = 'label';
  $handler->display->display_options['filters']['label']['operator'] = 'contains';
  $handler->display->display_options['filters']['label']['exposed'] = TRUE;
  $handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['label'] = 'Admin Label';
  $handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';
  $handler->display->display_options['filters']['label']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/blocks';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Blocks';
  $handler->display->display_options['menu']['description'] = 'Bean blocks overview';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['bean_blocks_overview'] = $view;

  $view = new view();
  $view->name = 'content_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Reference';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '8, 10, 20, 40, 60';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
    'frequently_asked_question' => 'frequently_asked_question',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content-reference';

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['content_reference'] = $view;

  $view = new view();
  $view->name = 'member_count';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Member Count';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declare_now_' => 'declare_now_',
  );
  /* Filter criterion: Entityform Submission: Draft */
  $handler->display->display_options['filters']['draft']['id'] = 'draft';
  $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  $handler->display->display_options['filters']['draft']['field'] = 'draft';
  $handler->display->display_options['filters']['draft']['value']['value'] = '0';
  /* Filter criterion: : field_archived (field_archived) */
  $handler->display->display_options['filters']['field_archived_value']['id'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['table'] = 'field_data_field_archived';
  $handler->display->display_options['filters']['field_archived_value']['field'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_archived_value']['value'] = array(
    1 => '1',
  );
  $export['member_count'] = $view;

  $view = new view();
  $view->name = 'member_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Member List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_mailing_address_administrative_area' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_member_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_sport_discipline_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_member_type' => 'field_member_type',
    'field_group_name' => 'field_group_name',
    'field_member_name' => 'field_member_name',
    'field_mailing_address_locality' => 'field_mailing_address_locality',
    'field_mailing_address_administrative_area' => 'field_mailing_address_administrative_area',
    'field_sport_discipline' => 'field_sport_discipline',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_member_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_group_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailing_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sport_discipline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Field: : field_member_type */
  $handler->display->display_options['fields']['field_member_type']['id'] = 'field_member_type';
  $handler->display->display_options['fields']['field_member_type']['table'] = 'field_data_field_member_type';
  $handler->display->display_options['fields']['field_member_type']['field'] = 'field_member_type';
  $handler->display->display_options['fields']['field_member_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_member_type']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_member_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: : field_group_name */
  $handler->display->display_options['fields']['field_group_name']['id'] = 'field_group_name';
  $handler->display->display_options['fields']['field_group_name']['table'] = 'field_data_field_group_name';
  $handler->display->display_options['fields']['field_group_name']['field'] = 'field_group_name';
  $handler->display->display_options['fields']['field_group_name']['label'] = 'Organization';
  $handler->display->display_options['fields']['field_group_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: : field_member_name */
  $handler->display->display_options['fields']['field_member_name']['id'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['table'] = 'field_data_field_member_name';
  $handler->display->display_options['fields']['field_member_name']['field'] = 'field_member_name';
  $handler->display->display_options['fields']['field_member_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_member_name']['settings'] = array(
    'format' => 'full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: : field_mailing_address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_mailing_address_locality']['id'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_locality']['field'] = 'field_mailing_address_locality';
  $handler->display->display_options['fields']['field_mailing_address_locality']['label'] = 'City';
  /* Field: : field_mailing_address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['id'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['field'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['fields']['field_mailing_address_administrative_area']['label'] = 'Province';
  /* Field: : field_sport_discipline */
  $handler->display->display_options['fields']['field_sport_discipline']['id'] = 'field_sport_discipline';
  $handler->display->display_options['fields']['field_sport_discipline']['table'] = 'field_data_field_sport_discipline';
  $handler->display->display_options['fields']['field_sport_discipline']['field'] = 'field_sport_discipline';
  $handler->display->display_options['fields']['field_sport_discipline']['label'] = 'Sport';
  $handler->display->display_options['fields']['field_sport_discipline']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_sport_discipline']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declare_now_' => 'declare_now_',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entityform Submission: Draft */
  $handler->display->display_options['filters']['draft']['id'] = 'draft';
  $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  $handler->display->display_options['filters']['draft']['field'] = 'draft';
  $handler->display->display_options['filters']['draft']['value']['value'] = '0';
  $handler->display->display_options['filters']['draft']['group'] = 1;
  /* Filter criterion: : field_archived (field_archived) */
  $handler->display->display_options['filters']['field_archived_value']['id'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['table'] = 'field_data_field_archived';
  $handler->display->display_options['filters']['field_archived_value']['field'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_archived_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_member_type' => 'field_member_type',
    'field_group_name' => 'field_group_name',
    'field_member_name' => 'field_member_name',
    'field_mailing_address_locality' => 'field_mailing_address_locality',
    'field_mailing_address_administrative_area' => 'field_mailing_address_administrative_area',
    'field_sport_discipline' => 'field_sport_discipline',
  );
  /* Filter criterion: : field_mailing_address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['id'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['table'] = 'field_data_field_mailing_address';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['field'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['group'] = 1;
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['expose']['operator_id'] = 'field_mailing_address_administrative_area_op';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['expose']['label'] = 'Province';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['expose']['operator'] = 'field_mailing_address_administrative_area_op';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['expose']['identifier'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['group_info']['label'] = 'Filter by Province';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['group_info']['identifier'] = 'field_mailing_address_administrative_area';
  $handler->display->display_options['filters']['field_mailing_address_administrative_area']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'NU',
      'operator' => '=',
      'value' => 'NU',
    ),
    2 => array(
      'title' => 'ON',
      'operator' => '=',
      'value' => 'ON',
    ),
    3 => array(
      'title' => 'PE',
      'operator' => '=',
      'value' => 'PE',
    ),
    4 => array(
      'title' => 'QC',
      'operator' => '=',
      'value' => 'QC',
    ),
    5 => array(
      'title' => 'SK',
      'operator' => '=',
      'value' => 'SK',
    ),
    6 => array(
      'title' => 'YT',
      'operator' => '=',
      'value' => 'YT',
    ),
    7 => array(
      'title' => 'AB',
      'operator' => '=',
      'value' => 'AB',
    ),
    8 => array(
      'title' => 'BC',
      'operator' => '=',
      'value' => 'BC',
    ),
    9 => array(
      'title' => 'MB',
      'operator' => '=',
      'value' => 'MB',
    ),
    10 => array(
      'title' => 'NB',
      'operator' => '=',
      'value' => 'NB',
    ),
    11 => array(
      'title' => 'NL',
      'operator' => '=',
      'value' => 'NL',
    ),
    12 => array(
      'title' => 'NS',
      'operator' => '=',
      'value' => 'NS',
    ),
    13 => array(
      'title' => 'NT',
      'operator' => '=',
      'value' => 'NT',
    ),
  );
  /* Filter criterion: : field_sport_discipline (field_sport_discipline) (translated) */
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['id'] = 'field_sport_discipline_value_i18n';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['table'] = 'field_data_field_sport_discipline';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['field'] = 'field_sport_discipline_value_i18n';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['expose']['operator_id'] = 'field_sport_discipline_value_i18n_op';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['expose']['label'] = 'Filter by Member Sport';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['expose']['operator'] = 'field_sport_discipline_value_i18n_op';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['expose']['identifier'] = 'field_sport_discipline_value_i18n';
  $handler->display->display_options['filters']['field_sport_discipline_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: : field_member_type (field_member_type) (translated) */
  $handler->display->display_options['filters']['field_member_type_value_i18n']['id'] = 'field_member_type_value_i18n';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['table'] = 'field_data_field_member_type';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['field'] = 'field_member_type_value_i18n';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_member_type_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_member_type_value_i18n']['expose']['operator_id'] = 'field_member_type_value_i18n_op';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['expose']['label'] = 'Filter by Member Type';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['expose']['operator'] = 'field_member_type_value_i18n_op';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['expose']['identifier'] = 'field_member_type_value_i18n';
  $handler->display->display_options['filters']['field_member_type_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Member List */
  $handler = $view->new_display('panel_pane', 'Member List', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['member_list'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Latest News */
  $handler = $view->new_display('panel_pane', 'Latest News', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['news'] = $view;

  $view = new view();
  $view->name = 'talking_true_sport';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Talking True Sport';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'sideBar ';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'nothing' => array(
      'element_type' => '',
      'class' => '',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => '',
    ),
    'field_profile_name' => array(
      'element_type' => 'small',
      'class' => '',
    ),
    'field_video' => array(
      'element_type' => 'div',
      'class' => 'alignright',
    ),
    'field_profile_image' => array(
      'element_type' => 'div',
      'class' => 'alignright',
    ),
    'body' => array(
      'element_type' => 'p',
      'class' => '',
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h4>Talking True Sport</h4>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: : field_profile_name */
  $handler->display->display_options['fields']['field_profile_name']['id'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: : field_video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_class'] = 'alignright';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['separator'] = '';
  /* Field: : field_profile_image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_wrapper_class'] = 'alignright';
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voices_of_true_sport' => 'voices_of_true_sport',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Talking True Sport */
  $handler = $view->new_display('panel_pane', 'Talking True Sport', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sideBar clearfix';
  $handler->display->display_options['link_url'] = 'voices';

  /* Display: Talking True Sport Full List */
  $handler = $view->new_display('panel_pane', 'Talking True Sport Full List', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'views-row';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: : field_video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_video']['element_wrapper_class'] = 'alignright';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['separator'] = '';
  /* Field: : field_profile_image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_profile_image']['element_wrapper_class'] = 'alignright';
  $handler->display->display_options['fields']['field_profile_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: : field_profile_name */
  $handler->display->display_options['fields']['field_profile_name']['id'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['table'] = 'field_data_field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['field'] = 'field_profile_name';
  $handler->display->display_options['fields']['field_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile_name']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_profile_name']['element_class'] = 'small';
  $handler->display->display_options['fields']['field_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $export['talking_true_sport'] = $view;

  $view = new view();
  $view->name = 'test_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Test Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Test Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'test-content';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['test_content'] = $view;

  $view = new view();
  $view->name = 'tools';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tools';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';
  $handler->display->display_options['filters']['field_section_tid']['hierarchy'] = 1;

  /* Display: Tools */
  $handler = $view->new_display('panel_pane', 'Tools', 'panel_pane_1');
  $export['tools'] = $view;

  return $export;
}
