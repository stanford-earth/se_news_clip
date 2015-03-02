<?php
/**
 * @file
 * se_news_clip.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function se_news_clip_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_se_news_metadata-field_dept_program'
  $field_instances['field_collection_item-field_se_news_metadata-field_dept_program'] = array(
    'bundle' => 'field_se_news_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_dept_program',
    'label' => 'Department/Program',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_se_news_metadata-field_se_news_categories'
  $field_instances['field_collection_item-field_se_news_metadata-field_se_news_categories'] = array(
    'bundle' => 'field_se_news_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_se_news_categories',
    'label' => 'News Types',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_se_news_metadata-field_se_news_published_date'
  $field_instances['field_collection_item-field_se_news_metadata-field_se_news_published_date'] = array(
    'bundle' => 'field_se_news_metadata',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_class' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_se_news_published_date',
    'label' => 'Published Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_se_news_metadata-taxonomy_vocabulary_11'
  $field_instances['field_collection_item-field_se_news_metadata-taxonomy_vocabulary_11'] = array(
    'bundle' => 'field_se_news_metadata',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'taxonomy_vocabulary_11',
    'label' => 'Target Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => 0,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-body'
  $field_instances['node-se_news_clip-body'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_for_cap_profiles' => 'full_html_for_cap_profiles',
          'plaintext' => 'plaintext',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => -1,
            ),
            'full_html_for_cap_profiles' => array(
              'weight' => 0,
            ),
            'plaintext' => array(
              'weight' => 1,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_se_news_image'
  $field_instances['node-se_news_clip-field_se_news_image'] = array(
    'bundle' => 'se_news_clip',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_se_news_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_banner' => 0,
          'image_cap-profile-medium' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-profile' => 0,
          'image_med-square' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_promo' => 0,
          'image_sensory-earth' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_stanfordeduhomepage' => 0,
          'image_stanfordhomepage-full' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'image_toolkit' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'stanfordeduhomepage',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_se_news_metadata'
  $field_instances['node-se_news_clip-field_se_news_metadata'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_se_news_metadata',
    'label' => 'News Metadata',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_se_source'
  $field_instances['node-se_news_clip-field_se_source'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Content source news clip is linking to (The New York Times, CNN, Stanford Report...)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => 'descriptor',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => 'descriptor',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'list' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_formatter_class' => 'descriptor',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_se_source',
    'label' => 'News Source',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_se_url'
  $field_instances['node-se_news_clip-field_se_url'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Full URL of remote article.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_se_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_stanford_subsite_sub_tags'
  $field_instances['node-se_news_clip-field_stanford_subsite_sub_tags'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_subsite_sub_tags',
    'label' => 'Subsite Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-se_news_clip-field_stanford_subsite_subsite'
  $field_instances['node-se_news_clip-field_stanford_subsite_subsite'] = array(
    'bundle' => 'se_news_clip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stanford_subsite_subsite',
    'label' => 'Subsite',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content source news clip is linking to (The New York Times, CNN, Stanford Report...)');
  t('Department/Program');
  t('Full URL of remote article.');
  t('Image');
  t('News Metadata');
  t('News Source');
  t('News Types');
  t('Published Date');
  t('Subsite');
  t('Subsite Tags');
  t('Target Audience');
  t('Teaser');
  t('URL');

  return $field_instances;
}
