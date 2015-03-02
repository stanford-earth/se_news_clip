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
    'field_se_source' => array(
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
  $ds_field->field = 'news_clip_title';
  $ds_field->label = 'News Clip Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'se_news_clip|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?
echo \'<h3><a href="\' . $entity->field_se_news_clip_url[\'und\'][0][\'url\'] . \'">\' . $entity->title . \'</h3></a>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['news_clip_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function se_news_clip_ds_layout_settings_info() {
  $export = array();

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
      'image' => array(
        0 => 'field_se_news_image',
      ),
      'text' => array(
        1 => 'news_clip_title',
        2 => 'field_se_source',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_se_news_image' => 'image',
      'news_clip_title' => 'text',
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
