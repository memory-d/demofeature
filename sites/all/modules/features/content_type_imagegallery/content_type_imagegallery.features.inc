<?php
/**
 * @file
 * content_type_imagegallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_imagegallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_imagegallery_node_info() {
  $items = array(
    'image_gallery' => array(
      'name' => t('image_gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
