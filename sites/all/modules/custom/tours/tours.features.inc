<?php
/**
 * @file
 * tours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tours_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tours_node_info() {
  $items = array(
    'tours' => array(
      'name' => t('Tours'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tours'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
