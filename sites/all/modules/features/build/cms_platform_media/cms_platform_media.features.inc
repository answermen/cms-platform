<?php
/**
 * @file
 * cms_platform_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_platform_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cms_platform_media_image_default_styles() {
  $styles = array();

  // Exported image style: beanslide-960.
  $styles['beanslide-960'] = array(
    'name' => 'beanslide-960',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'beanslide-960',
  );

  return $styles;
}
