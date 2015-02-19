<?php
/**
 * @file
 * cms_platform_default_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function cms_platform_default_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'Accueil\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0180cbf2-b7dd-4e3f-a085-414b8a050408\',
      \'ds_switch\' => \'\',
      \'nid\' => \'21\',
      \'type\' => \'page\',
      \'language\' => \'fr\',
      \'created\' => \'1416429154\',
      \'changed\' => \'1422288701\',
      \'tnid\' => \'20\',
      \'translate\' => \'0\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'uuid\' => \'66969866-350f-4a34-a6e4-6f9a2e1edd1e\',
      \'revision_timestamp\' => \'1422288701\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_document\' => array(),
      \'field_description\' => array(),
      \'field_section\' => array(),
      \'field_featured_image\' => array(),
      \'field_featured_video\' => array(),
      \'field_links\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pid\' => \'21\',
        \'source\' => \'node/21\',
        \'alias\' => \'accueil\',
        \'language\' => \'fr\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'21\',
            \'revision_id\' => \'21\',
            \'name\' => NULL,
            \'no_blocks\' => \'1\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'22\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                389 => 
                stdClass::__set_state(array(
                   \'pid\' => \'389\',
                   \'did\' => \'22\',
                   \'panel\' => \'column1\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-true-sport-principles\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'3fdde8c2-9c6a-4c2b-abe7-0367228a2f85\',
                )),
                390 => 
                stdClass::__set_state(array(
                   \'pid\' => \'390\',
                   \'did\' => \'22\',
                   \'panel\' => \'column1\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-what-is-true-sport\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'fcbd3066-a563-4740-9e84-ec0a5705be92\',
                )),
                391 => 
                stdClass::__set_state(array(
                   \'pid\' => \'391\',
                   \'did\' => \'22\',
                   \'panel\' => \'column2\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-faq\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a14e8e2c-0b25-401c-9c8a-8f15a45ed2cc\',
                )),
                392 => 
                stdClass::__set_state(array(
                   \'pid\' => \'392\',
                   \'did\' => \'22\',
                   \'panel\' => \'column2\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-who’s-involved\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0633f192-1b2b-47a1-aad3-359462d95c18\',
                )),
                394 => 
                stdClass::__set_state(array(
                   \'pid\' => \'394\',
                   \'did\' => \'22\',
                   \'panel\' => \'column3\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-newsletter\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'clean_markup\' => 
                      array (
                        \'pane_wrapper\' => \'div\',
                        \'additional_pane_classes\' => \'newsletter clearfix\',
                        \'additional_pane_attributes\' => \'\',
                        \'enable_inner_div\' => 0,
                        \'title_wrapper\' => \'h4\',
                        \'title_hide\' => 0,
                        \'content_wrapper\' => \'none\',
                      ),
                    ),
                    \'style\' => \'clean_element\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a1a51dee-e164-4270-9362-6394681cecd3\',
                )),
                393 => 
                stdClass::__set_state(array(
                   \'pid\' => \'393\',
                   \'did\' => \'22\',
                   \'panel\' => \'column3\',
                   \'type\' => \'block\',
                   \'subtype\' => \'twitter_block-1\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7cfa81ca-119c-45ec-a450-d9b5262766d5\',
                )),
                290 => 
                stdClass::__set_state(array(
                   \'pid\' => \'290\',
                   \'did\' => \'22\',
                   \'panel\' => \'slider\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-french-home-page-slider\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => \'hidden-xs\',
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'infoBox\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a60e77cc-0087-4c24-a3ba-9b709507c555\',
                )),
                388 => 
                stdClass::__set_state(array(
                   \'pid\' => \'388\',
                   \'did\' => \'22\',
                   \'panel\' => \'slidergutter\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-we-wrote-our-story\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'smallPromo\' => \'smallPromo\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'infoBox\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a8c7eba2-2c0d-459b-bec8-de944d43c565\',
                )),
              ),
               \'panels\' => 
              array (
                \'column1\' => 
                array (
                  0 => \'389\',
                  1 => \'390\',
                ),
                \'column2\' => 
                array (
                  0 => \'391\',
                  1 => \'392\',
                ),
                \'column3\' => 
                array (
                  0 => \'394\',
                  1 => \'393\',
                ),
                \'slider\' => 
                array (
                  0 => \'290\',
                ),
                \'slidergutter\' => 
                array (
                  0 => \'388\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'22\',
               \'renderer\' => \'standard\',
               \'layout\' => \'hewston\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'hide_title\' => \'0\',
               \'title_pane\' => \'0\',
               \'uuid\' => \'6deb5da2-8143-493a-85f2-fcb7420fbfce\',
            )),
          ),
        \'full\' => (object) array(
            \'pnid\' => \'1\',
            \'name\' => \'node:page:default:full\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'page\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => NULL,
            \'access\' => array(),
            \'view_mode\' => \'full\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'0\',
            \'extra\' => array(),
            \'table\' => \'panelizer_defaults\',
            \'type\' => \'Normal\',
            \'export_type\' => 1,
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                15 => 
                stdClass::__set_state(array(
                   \'pid\' => \'15\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'page_title\',
                   \'subtype\' => \'page_title\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'markup\' => \'h2\',
                    \'class\' => \'\',
                    \'id\' => \'\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9b3a9d08-3c5c-40d5-b2c6-3e37968458aa\',
                )),
                16 => 
                stdClass::__set_state(array(
                   \'pid\' => \'16\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'page_tabs\',
                   \'subtype\' => \'page_tabs\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'type\' => \'both\',
                    \'id\' => \'tabs\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3\',
                )),
                3 => 
                stdClass::__set_state(array(
                   \'pid\' => \'3\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'2\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f8391a04-ce6a-4b89-8744-b19777ad194d\',
                )),
                4 => 
                stdClass::__set_state(array(
                   \'pid\' => \'4\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'full\',
                    \'identifier\' => \'\',
                    \'link\' => true,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_class\' => \'link-wrapper\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'3\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a6a46bc8-1c04-40a2-90fa-948e9ed9e885\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'15\',
                  1 => \'16\',
                  2 => \'3\',
                  3 => \'4\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'2\',
               \'renderer\' => \'standard\',
               \'layout\' => \'burr_flipped\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'sidebar\' => 
                  array (
                    \'column_type\' => \'col-lg\',
                    \'column_size\' => \'1\',
                    \'offset_type\' => \'col-lg-offset\',
                    \'offset_size\' => \'0\',
                  ),
                  \'default\' => NULL,
                  \'contentmain\' => NULL,
                ),
                \'sidebar\' => 
                array (
                  \'style\' => \'bootstrap_region\',
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'hide_title\' => \'2\',
               \'title_pane\' => \'3\',
               \'uuid\' => \'172d7c89-80e5-434d-8a16-e0425bd83e60\',
            )),
            \'entity_id\' => 21,
            \'revision_id\' => \'21\',
          ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416429154\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Home\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'74ec18fe-5d01-4ff1-b094-11d1236497d1\',
      \'ds_switch\' => \'\',
      \'nid\' => \'20\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1416428837\',
      \'changed\' => \'1418911832\',
      \'tnid\' => \'20\',
      \'translate\' => \'0\',
      \'rh_action\' => NULL,
      \'rh_redirect\' => NULL,
      \'rh_redirect_response\' => NULL,
      \'uuid\' => \'c2beb930-2691-4c35-99b9-e25fb1c62f1c\',
      \'revision_timestamp\' => \'1418911832\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_document\' => array(),
      \'field_description\' => array(),
      \'field_section\' => array(),
      \'field_featured_image\' => array(),
      \'field_featured_video\' => array(),
      \'field_links\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pid\' => \'20\',
        \'source\' => \'node/20\',
        \'alias\' => \'home\',
        \'language\' => \'en\',
      ),
      \'panelizer\' => array(
        \'page_manager\' => (object) array(
            \'entity_type\' => \'node\',
            \'entity_id\' => \'20\',
            \'revision_id\' => \'20\',
            \'name\' => NULL,
            \'no_blocks\' => \'1\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => \'20\',
            \'view_mode\' => \'page_manager\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'1\',
            \'extra\' => array(),
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                104 => 
                stdClass::__set_state(array(
                   \'pid\' => \'104\',
                   \'did\' => \'20\',
                   \'panel\' => \'column1\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'what-is-true-sport\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'4abb727a-bd19-4358-8c54-8911943d28e1\',
                )),
                105 => 
                stdClass::__set_state(array(
                   \'pid\' => \'105\',
                   \'did\' => \'20\',
                   \'panel\' => \'column1\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'true-sport-principles\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0ee7f31c-0bf0-41f1-86d8-18c20764b95a\',
                )),
                106 => 
                stdClass::__set_state(array(
                   \'pid\' => \'106\',
                   \'did\' => \'20\',
                   \'panel\' => \'column2\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'who’s-involved\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f33ae3c8-f743-4382-9443-745ba2144c2a\',
                )),
                107 => 
                stdClass::__set_state(array(
                   \'pid\' => \'107\',
                   \'did\' => \'20\',
                   \'panel\' => \'column2\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'faq\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'infoBox\' => \'infoBox\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'smallPromo\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'0598876f-7971-4f20-9c51-71017a1892c1\',
                )),
                119 => 
                stdClass::__set_state(array(
                   \'pid\' => \'119\',
                   \'did\' => \'20\',
                   \'panel\' => \'column3\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'newsletter\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'clean_markup\' => 
                      array (
                        \'pane_wrapper\' => \'div\',
                        \'additional_pane_classes\' => \'newsletter clearfix\',
                        \'additional_pane_attributes\' => \'\',
                        \'enable_inner_div\' => 0,
                        \'title_wrapper\' => \'h4\',
                        \'title_hide\' => 0,
                        \'content_wrapper\' => \'none\',
                      ),
                    ),
                    \'style\' => \'clean_element\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'b75b1376-2d87-49cf-8f62-9a585c19497c\',
                )),
                121 => 
                stdClass::__set_state(array(
                   \'pid\' => \'121\',
                   \'did\' => \'20\',
                   \'panel\' => \'column3\',
                   \'type\' => \'block\',
                   \'subtype\' => \'twitter_block-1\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'clean_markup\' => 
                      array (
                        \'pane_wrapper\' => \'div\',
                        \'additional_pane_classes\' => \'twitter clearfix\',
                        \'additional_pane_attributes\' => \'\',
                        \'enable_inner_div\' => 0,
                        \'title_wrapper\' => \'h4\',
                        \'title_hide\' => 0,
                        \'content_wrapper\' => \'none\',
                      ),
                    ),
                    \'style\' => \'clean_element\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'44177da5-d596-4d07-942d-f42fbddfaa95\',
                )),
                77 => 
                stdClass::__set_state(array(
                   \'pid\' => \'77\',
                   \'did\' => \'20\',
                   \'panel\' => \'slider\',
                   \'type\' => \'block\',
                   \'subtype\' => \'bean-beanslide-test\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'style\' => \'kalacustomize\',
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => \'hidden-xs\',
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                      ),
                    ),
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e38b45ac-c647-4a50-8802-8b31d3f652d9\',
                )),
                103 => 
                stdClass::__set_state(array(
                   \'pid\' => \'103\',
                   \'did\' => \'20\',
                   \'panel\' => \'slidergutter\',
                   \'type\' => \'bean_pane\',
                   \'subtype\' => \'custom_content_block\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'view_mode\' => \'default\',
                    \'bean_delta\' => \'we-wrote-our-story\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => 
                    array (
                      \'devices\' => 
                      array (
                        \'hidden-xs\' => 0,
                        \'hidden-sm\' => 0,
                        \'hidden-md\' => 0,
                        \'hidden-lg\' => 0,
                      ),
                      \'pane_style\' => 
                      array (
                        \'smallPromo\' => \'smallPromo\',
                        \'pull-left\' => 0,
                        \'pull-right\' => 0,
                        \'clearfix\' => 0,
                        \'jumbotron\' => 0,
                        \'well\' => 0,
                        \'infoBox\' => 0,
                        \'sideBar\' => 0,
                      ),
                    ),
                    \'style\' => \'kalacustomize\',
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'e2899da6-9c1c-4ccd-b0b8-29dd44839728\',
                )),
              ),
               \'panels\' => 
              array (
                \'column1\' => 
                array (
                  0 => \'104\',
                  1 => \'105\',
                ),
                \'column2\' => 
                array (
                  0 => \'106\',
                  1 => \'107\',
                ),
                \'column3\' => 
                array (
                  0 => \'119\',
                  1 => \'121\',
                ),
                \'slider\' => 
                array (
                  0 => \'77\',
                ),
                \'slidergutter\' => 
                array (
                  0 => \'103\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'20\',
               \'renderer\' => \'standard\',
               \'layout\' => \'hewston\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'default\' => NULL,
                  \'sidebar\' => NULL,
                  \'contentmain\' => NULL,
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'hide_title\' => \'0\',
               \'title_pane\' => \'0\',
               \'uuid\' => \'6deb5da2-8143-493a-85f2-fcb7420fbfce\',
            )),
          ),
        \'full\' => (object) array(
            \'pnid\' => \'1\',
            \'name\' => \'node:page:default:full\',
            \'title\' => \'Default\',
            \'panelizer_type\' => \'node\',
            \'panelizer_key\' => \'page\',
            \'no_blocks\' => \'0\',
            \'css_id\' => \'\',
            \'css\' => \'\',
            \'pipeline\' => \'ipe\',
            \'contexts\' => array(),
            \'relationships\' => array(),
            \'did\' => NULL,
            \'access\' => array(),
            \'view_mode\' => \'full\',
            \'css_class\' => \'\',
            \'title_element\' => \'H2\',
            \'link_to_entity\' => \'0\',
            \'extra\' => array(),
            \'table\' => \'panelizer_defaults\',
            \'type\' => \'Normal\',
            \'export_type\' => 1,
            \'display\' => panels_display::__set_state(array(
               \'args\' => 
              array (
              ),
               \'content\' => 
              array (
                15 => 
                stdClass::__set_state(array(
                   \'pid\' => \'15\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'page_title\',
                   \'subtype\' => \'page_title\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'markup\' => \'h2\',
                    \'class\' => \'\',
                    \'id\' => \'\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'0\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'9b3a9d08-3c5c-40d5-b2c6-3e37968458aa\',
                )),
                16 => 
                stdClass::__set_state(array(
                   \'pid\' => \'16\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'page_tabs\',
                   \'subtype\' => \'page_tabs\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'type\' => \'both\',
                    \'id\' => \'tabs\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'1\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'7ae5e6a4-4bfb-4b84-8927-bd14b6c5d5c3\',
                )),
                3 => 
                stdClass::__set_state(array(
                   \'pid\' => \'3\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'entity_field\',
                   \'subtype\' => \'node:body\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'label\' => \'hidden\',
                    \'formatter\' => \'text_default\',
                    \'delta_limit\' => 0,
                    \'delta_offset\' => \'0\',
                    \'delta_reversed\' => false,
                    \'formatter_settings\' => 
                    array (
                    ),
                    \'context\' => \'panelizer\',
                    \'override_title\' => 0,
                    \'override_title_text\' => \'\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'2\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'f8391a04-ce6a-4b89-8744-b19777ad194d\',
                )),
                4 => 
                stdClass::__set_state(array(
                   \'pid\' => \'4\',
                   \'did\' => \'2\',
                   \'panel\' => \'contentmain\',
                   \'type\' => \'node_links\',
                   \'subtype\' => \'node_links\',
                   \'shown\' => \'1\',
                   \'access\' => 
                  array (
                  ),
                   \'configuration\' => 
                  array (
                    \'override_title\' => false,
                    \'override_title_text\' => \'\',
                    \'build_mode\' => \'full\',
                    \'identifier\' => \'\',
                    \'link\' => true,
                    \'context\' => \'panelizer\',
                  ),
                   \'cache\' => 
                  array (
                  ),
                   \'style\' => 
                  array (
                    \'settings\' => NULL,
                  ),
                   \'css\' => 
                  array (
                    \'css_class\' => \'link-wrapper\',
                  ),
                   \'extras\' => 
                  array (
                  ),
                   \'position\' => \'3\',
                   \'locks\' => 
                  array (
                  ),
                   \'uuid\' => \'a6a46bc8-1c04-40a2-90fa-948e9ed9e885\',
                )),
              ),
               \'panels\' => 
              array (
                \'contentmain\' => 
                array (
                  0 => \'15\',
                  1 => \'16\',
                  2 => \'3\',
                  3 => \'4\',
                ),
              ),
               \'incoming_content\' => NULL,
               \'css_id\' => NULL,
               \'context\' => 
              array (
              ),
               \'did\' => \'2\',
               \'renderer\' => \'standard\',
               \'layout\' => \'burr_flipped\',
               \'layout_settings\' => 
              array (
              ),
               \'panel_settings\' => 
              array (
                \'style_settings\' => 
                array (
                  \'sidebar\' => 
                  array (
                    \'column_type\' => \'col-lg\',
                    \'column_size\' => \'1\',
                    \'offset_type\' => \'col-lg-offset\',
                    \'offset_size\' => \'0\',
                  ),
                  \'default\' => NULL,
                  \'contentmain\' => NULL,
                ),
                \'sidebar\' => 
                array (
                  \'style\' => \'bootstrap_region\',
                ),
              ),
               \'cache\' => 
              array (
              ),
               \'title\' => \'%node:title\',
               \'hide_title\' => \'2\',
               \'title_pane\' => \'3\',
               \'uuid\' => \'172d7c89-80e5-434d-8a16-e0425bd83e60\',
            )),
            \'entity_id\' => 20,
            \'revision_id\' => \'20\',
          ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1416428837\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
