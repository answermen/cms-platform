<?php 
/** 
 * @file 
 * Primary pre/preprocess functions and alterations.
 */ 

/**
 * Helper function to find and render a block.
 */
function render_block_content($module, $delta) {
  $output = '';
  if ($block = block_load($module, $delta)) {
    if ($build = module_invoke($module, 'block_view', $delta)) {
      $delta = str_replace('-', '_', $delta);
      drupal_alter(array('block_view', "block_view_{$module}_{$delta}"), $build, $block);

      if (!empty($build['content'])) {
        return is_array($build['content']) ? render($build['content']) : $build['content'];
      }
    }
  }
  return $output;
}