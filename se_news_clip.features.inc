<?php
/**
 * @file
 * se_news_clip.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function se_news_clip_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function se_news_clip_node_info() {
  $items = array(
    'se_news_clip' => array(
      'name' => t('News:Clip'),
      'base' => 'node_content',
      'description' => t('Link to a news item not hosted on our site.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
