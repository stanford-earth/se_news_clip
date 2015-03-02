<?php
/**
 * @file
 * se_news_clip.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function se_news_clip_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|se_news_clip|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'se_news_clip';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_se_url' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Full article',
          'lb-el' => 'strong',
        ),
      ),
    ),
  );
  $export['node|se_news_clip|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|se_news_clip|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'se_news_clip';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'news_clip_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|se_news_clip|list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function se_news_clip_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'news_clip_image';
  $ds_field->label = 'News Clip Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?
$image_uri = \'\';
if (!empty($entity->field_se_news_clip_image)) $image_uri = $entity->field_se_news_clip_image[\'und\'][0][\'uri\'];

$image_src = image_style_url(\'stanfordeduhomepage\', $image_uri);
//Change image style if this is a promo
if ($entity->weight_weight == 0) $image_src = image_style_url(\'promo\', $image_uri);

$node_url = url(\'node/\' . $entity->nid);

$source_url = \'\';
if (!empty($entity->field_se_news_source)) $source_url = $entity->field_se_news_source[\'und\'][0][\'url\'];
if (!empty($entity->field_se_url[\'und\'][0][\'url\'])) $source_url = $entity->field_se_url[\'und\'][0][\'url\'];

// If source_url is provided, use that in the link.
$url = (!empty($source_url)) ? $source_url : $node_url;

if (!empty($image_uri)) {
  echo \'<a href="\' . $url . \'"><img src="\' . $image_src . \'"></a>\';
}
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['news_clip_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'se_news_clip_title';
  $ds_field->label = 'News Clip Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?
$title = $entity->title;
if (!empty($entity->field_se_news_source)) $source_url = $entity->field_se_news_source[\'und\'][0][\'url\'];
$node_url = url(\'node/\' . $entity->nid);
// If source_url is provided, use that in the link.
$url = (!empty($source_url)) ? $source_url : $node_url;

echo \'<h3><a href="\' . $url . \'">\' . $title . \'</h3></a>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['se_news_clip_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function se_news_clip_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_news_clip|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_news_clip';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_se_url',
        3 => 'field_se_source',
        4 => 'body',
        5 => 'group_metadata',
        6 => 'field_se_news_metadata',
        7 => '_add_existing_field',
      ),
      'hidden' => array(
        2 => 'field_se_news_image',
        8 => 'redirect',
        9 => 'path',
        10 => 'metatags',
        11 => 'field_stanford_subsite_subsite',
        12 => 'field_stanford_subsite_sub_tags',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_se_url' => 'ds_content',
      'field_se_news_image' => 'hidden',
      'field_se_source' => 'ds_content',
      'body' => 'ds_content',
      'group_metadata' => 'ds_content',
      'field_se_news_metadata' => 'ds_content',
      '_add_existing_field' => 'ds_content',
      'redirect' => 'hidden',
      'path' => 'hidden',
      'metatags' => 'hidden',
      'field_stanford_subsite_subsite' => 'hidden',
      'field_stanford_subsite_sub_tags' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_news_clip|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_news_clip|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_news_clip';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_se_news_image',
        1 => 'title',
        2 => 'field_se_source',
        3 => 'body',
        4 => 'field_se_url',
      ),
    ),
    'fields' => array(
      'field_se_news_image' => 'ds_content',
      'title' => 'ds_content',
      'field_se_source' => 'ds_content',
      'body' => 'ds_content',
      'field_se_url' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_news_clip|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_news_clip|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_news_clip';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'image_card';
  $ds_layout->settings = array(
    'regions' => array(
      'text' => array(
        0 => 'news_clip_title',
        2 => 'field_se_source',
        3 => 'body',
      ),
      'image' => array(
        1 => 'field_se_news_clip_image',
      ),
    ),
    'fields' => array(
      'news_clip_title' => 'text',
      'field_se_news_clip_image' => 'image',
      'field_se_source' => 'text',
      'body' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_news_clip|list'] = $ds_layout;

  return $export;
}
