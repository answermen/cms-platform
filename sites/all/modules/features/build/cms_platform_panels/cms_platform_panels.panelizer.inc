<?php
/**
 * @file
 * cms_platform_panels.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cms_platform_panels_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = 'section-news';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'page-content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e60b627c-fd66-48fa-a211-788f5566eac3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6252c20e-6f67-474b-adb3-9511232de68f';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Title',
      'title' => '',
      'body' => '<h2>%node:title</h2>',
      'format' => 'ds_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6252c20e-6f67-474b-adb3-9511232de68f';
    $display->content['new-6252c20e-6f67-474b-adb3-9511232de68f'] = $pane;
    $display->panels['contentmain'][0] = 'new-6252c20e-6f67-474b-adb3-9511232de68f';
    $pane = new stdClass();
    $pane->pid = 'new-568ebe6d-cb4a-4921-b661-ffe781adb0fb';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
        'conditions' => array(),
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '568ebe6d-cb4a-4921-b661-ffe781adb0fb';
    $display->content['new-568ebe6d-cb4a-4921-b661-ffe781adb0fb'] = $pane;
    $display->panels['contentmain'][1] = 'new-568ebe6d-cb4a-4921-b661-ffe781adb0fb';
    $pane = new stdClass();
    $pane->pid = 'new-99c1bc0e-2a44-44d8-b1df-1c509a984d12';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => '',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '99c1bc0e-2a44-44d8-b1df-1c509a984d12';
    $display->content['new-99c1bc0e-2a44-44d8-b1df-1c509a984d12'] = $pane;
    $display->panels['contentmain'][2] = 'new-99c1bc0e-2a44-44d8-b1df-1c509a984d12';
    $pane = new stdClass();
    $pane->pid = 'new-67973ef6-7814-4f33-ac98-1c10e876e587';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => '',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '67973ef6-7814-4f33-ac98-1c10e876e587';
    $display->content['new-67973ef6-7814-4f33-ac98-1c10e876e587'] = $pane;
    $display->panels['contentmain'][3] = 'new-67973ef6-7814-4f33-ac98-1c10e876e587';
    $pane = new stdClass();
    $pane->pid = 'new-f3166211-7c82-47e5-a2c9-38ffbe9c1a0b';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f3166211-7c82-47e5-a2c9-38ffbe9c1a0b';
    $display->content['new-f3166211-7c82-47e5-a2c9-38ffbe9c1a0b'] = $pane;
    $display->panels['contentmain'][4] = 'new-f3166211-7c82-47e5-a2c9-38ffbe9c1a0b';
    $pane = new stdClass();
    $pane->pid = 'new-ed7bbb6e-fdcb-420e-b0ba-2d92c3a5447b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'bean-share---sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed7bbb6e-fdcb-420e-b0ba-2d92c3a5447b';
    $display->content['new-ed7bbb6e-fdcb-420e-b0ba-2d92c3a5447b'] = $pane;
    $display->panels['sidebar'][0] = 'new-ed7bbb6e-fdcb-420e-b0ba-2d92c3a5447b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-568ebe6d-cb4a-4921-b661-ffe781adb0fb';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'sidebar' => NULL,
      'contentmain' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'page-content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'clean_element',
    ),
    'style' => 'clean_element',
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6deb5da2-8143-493a-85f2-fcb7420fbfce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b42a085-a17a-4f98-9b82-0da6fbc1f674';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title',
      'title' => '',
      'body' => '<h2>%node:title</h2>',
      'format' => 'ds_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b42a085-a17a-4f98-9b82-0da6fbc1f674';
    $display->content['new-8b42a085-a17a-4f98-9b82-0da6fbc1f674'] = $pane;
    $display->panels['contentmain'][0] = 'new-8b42a085-a17a-4f98-9b82-0da6fbc1f674';
    $pane = new stdClass();
    $pane->pid = 'new-fa7730c6-f0d2-40ab-8b78-cd9582f973ad';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 1,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa7730c6-f0d2-40ab-8b78-cd9582f973ad';
    $display->content['new-fa7730c6-f0d2-40ab-8b78-cd9582f973ad'] = $pane;
    $display->panels['contentmain'][1] = 'new-fa7730c6-f0d2-40ab-8b78-cd9582f973ad';
    $pane = new stdClass();
    $pane->pid = 'new-95208347-5b9b-4fb6-9cce-6f7d8e78f35d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => '',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95208347-5b9b-4fb6-9cce-6f7d8e78f35d';
    $display->content['new-95208347-5b9b-4fb6-9cce-6f7d8e78f35d'] = $pane;
    $display->panels['contentmain'][2] = 'new-95208347-5b9b-4fb6-9cce-6f7d8e78f35d';
    $pane = new stdClass();
    $pane->pid = 'new-9203fea5-dfff-466c-afab-81c27fa5ddb5';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9203fea5-dfff-466c-afab-81c27fa5ddb5';
    $display->content['new-9203fea5-dfff-466c-afab-81c27fa5ddb5'] = $pane;
    $display->panels['contentmain'][3] = 'new-9203fea5-dfff-466c-afab-81c27fa5ddb5';
    $pane = new stdClass();
    $pane->pid = 'new-38761f68-79a0-45d9-86c3-a0a50f92e11d';
    $pane->panel = 'contentmain';
    $pane->type = 'panels_mini';
    $pane->subtype = 'node_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => 'Page tabs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '38761f68-79a0-45d9-86c3-a0a50f92e11d';
    $display->content['new-38761f68-79a0-45d9-86c3-a0a50f92e11d'] = $pane;
    $display->panels['contentmain'][4] = 'new-38761f68-79a0-45d9-86c3-a0a50f92e11d';
    $pane = new stdClass();
    $pane->pid = 'new-7904ed3f-a219-4883-9b0c-8a89a00b518c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'bean-share---sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7904ed3f-a219-4883-9b0c-8a89a00b518c';
    $display->content['new-7904ed3f-a219-4883-9b0c-8a89a00b518c'] = $pane;
    $display->panels['sidebar'][0] = 'new-7904ed3f-a219-4883-9b0c-8a89a00b518c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'sidebar' => array(
        'column_type' => 'col-lg',
        'column_size' => '1',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'contentmain' => NULL,
    ),
    'sidebar' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '172d7c89-80e5-434d-8a16-e0425bd83e60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9b3a9d08-3c5c-40d5-b2c6-3e37968458aa';
    $pane->panel = 'contentmain';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h2',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9b3a9d08-3c5c-40d5-b2c6-3e37968458aa';
    $display->content['new-9b3a9d08-3c5c-40d5-b2c6-3e37968458aa'] = $pane;
    $display->panels['contentmain'][0] = 'new-9b3a9d08-3c5c-40d5-b2c6-3e37968458aa';
    $pane = new stdClass();
    $pane->pid = 'new-7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3';
    $pane->panel = 'contentmain';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3';
    $display->content['new-7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3'] = $pane;
    $display->panels['contentmain'][1] = 'new-7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3';
    $pane = new stdClass();
    $pane->pid = 'new-f8391a04-ce6a-4b89-8744-b19777ad194d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f8391a04-ce6a-4b89-8744-b19777ad194d';
    $display->content['new-f8391a04-ce6a-4b89-8744-b19777ad194d'] = $pane;
    $display->panels['contentmain'][2] = 'new-f8391a04-ce6a-4b89-8744-b19777ad194d';
    $pane = new stdClass();
    $pane->pid = 'new-a6a46bc8-1c04-40a2-90fa-948e9ed9e885';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a6a46bc8-1c04-40a2-90fa-948e9ed9e885';
    $display->content['new-a6a46bc8-1c04-40a2-90fa-948e9ed9e885'] = $pane;
    $display->panels['contentmain'][3] = 'new-a6a46bc8-1c04-40a2-90fa-948e9ed9e885';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-f8391a04-ce6a-4b89-8744-b19777ad194d';
  $panelizer->display = $display;
  $export['node:page:default:full'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panel:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panel';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bb21d795-d479-40dd-9a9e-79680f18934b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-94fdfb80-e1d7-4990-adc1-052ee9bbf7cd';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94fdfb80-e1d7-4990-adc1-052ee9bbf7cd';
    $display->content['new-94fdfb80-e1d7-4990-adc1-052ee9bbf7cd'] = $pane;
    $display->panels['center'][0] = 'new-94fdfb80-e1d7-4990-adc1-052ee9bbf7cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-94fdfb80-e1d7-4990-adc1-052ee9bbf7cd';
  $panelizer->display = $display;
  $export['node:panel:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:voices_of_true_sport:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'voices_of_true_sport';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'page-content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '71ab8015-c62a-421e-8949-cde4edfb3784';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0d72a03b-a473-4836-8077-e5e7181b372a';
    $pane->panel = 'contentmain';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Page Title',
      'title' => '',
      'body' => '<h2>%node:title</h2>',
      'format' => 'ds_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d72a03b-a473-4836-8077-e5e7181b372a';
    $display->content['new-0d72a03b-a473-4836-8077-e5e7181b372a'] = $pane;
    $display->panels['contentmain'][0] = 'new-0d72a03b-a473-4836-8077-e5e7181b372a';
    $pane = new stdClass();
    $pane->pid = 'new-9c1de610-d440-4e71-8b06-ae72a6dcadd3';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9c1de610-d440-4e71-8b06-ae72a6dcadd3';
    $display->content['new-9c1de610-d440-4e71-8b06-ae72a6dcadd3'] = $pane;
    $display->panels['contentmain'][1] = 'new-9c1de610-d440-4e71-8b06-ae72a6dcadd3';
    $pane = new stdClass();
    $pane->pid = 'new-1dfaf446-b418-4e1a-bedc-d808d6f2c855';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'count',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1dfaf446-b418-4e1a-bedc-d808d6f2c855';
    $display->content['new-1dfaf446-b418-4e1a-bedc-d808d6f2c855'] = $pane;
    $display->panels['contentmain'][2] = 'new-1dfaf446-b418-4e1a-bedc-d808d6f2c855';
    $pane = new stdClass();
    $pane->pid = 'new-e330b7b7-5ee8-424f-b4c3-9bf2e2b37b50';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'video_embed_field',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'video_style' => 'normal',
      ),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e330b7b7-5ee8-424f-b4c3-9bf2e2b37b50';
    $display->content['new-e330b7b7-5ee8-424f-b4c3-9bf2e2b37b50'] = $pane;
    $display->panels['contentmain'][3] = 'new-e330b7b7-5ee8-424f-b4c3-9bf2e2b37b50';
    $pane = new stdClass();
    $pane->pid = 'new-8df5a70b-fce7-4067-a3e9-7c5906d7e554';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8df5a70b-fce7-4067-a3e9-7c5906d7e554';
    $display->content['new-8df5a70b-fce7-4067-a3e9-7c5906d7e554'] = $pane;
    $display->panels['contentmain'][4] = 'new-8df5a70b-fce7-4067-a3e9-7c5906d7e554';
    $pane = new stdClass();
    $pane->pid = 'new-fafcbbbb-396d-4dff-b238-d7fc0515b174';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'bean-share---sidebar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fafcbbbb-396d-4dff-b238-d7fc0515b174';
    $display->content['new-fafcbbbb-396d-4dff-b238-d7fc0515b174'] = $pane;
    $display->panels['sidebar'][0] = 'new-fafcbbbb-396d-4dff-b238-d7fc0515b174';
    $pane = new stdClass();
    $pane->pid = 'new-4ec1a43a-9c20-4e57-9a2c-9ea4e76fcfcb';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'talking_true_sport-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4ec1a43a-9c20-4e57-9a2c-9ea4e76fcfcb';
    $display->content['new-4ec1a43a-9c20-4e57-9a2c-9ea4e76fcfcb'] = $pane;
    $display->panels['sidebar'][1] = 'new-4ec1a43a-9c20-4e57-9a2c-9ea4e76fcfcb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9c1de610-d440-4e71-8b06-ae72a6dcadd3';
  $panelizer->display = $display;
  $export['node:voices_of_true_sport:default'] = $panelizer;

  return $export;
}
