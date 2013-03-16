<?php
/**
 * @file
 * brdg_component.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function brdg_component_taxonomy_default_vocabularies() {
  return array(
    'data_source' => array(
      'name' => 'Data Source',
      'machine_name' => 'data_source',
      'description' => 'Marked content form which source, such as twitter ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
