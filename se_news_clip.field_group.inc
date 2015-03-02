<?php
/**
 * @file
 * se_news_clip.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function se_news_clip_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|se_news_clip|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'se_news_clip';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '6',
    'children' => array(
      0 => 'field_se_news_metadata',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|se_news_clip|form'] = $field_group;

  return $export;
}
