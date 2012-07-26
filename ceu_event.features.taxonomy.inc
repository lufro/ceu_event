<?php
/**
 * @file
 * ceu_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ceu_event_taxonomy_default_vocabularies() {
  return array(
    'academic_areas' => array(
      'name' => 'Academic Areas',
      'machine_name' => 'academic_areas',
      'description' => 'Select one or more central research areas.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'event_audience' => array(
      'name' => 'Event audience',
      'machine_name' => 'event_audience',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'event_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
