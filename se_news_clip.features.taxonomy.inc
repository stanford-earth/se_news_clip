<?php
/**
 * @file
 * se_news_clip.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function se_news_clip_taxonomy_default_vocabularies() {
  return array(
    'content_source' => array(
      'name' => 'Content Source',
      'machine_name' => 'content_source',
      'description' => 'Name of content source (The New York Times, CNN, Stanford Report...)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
