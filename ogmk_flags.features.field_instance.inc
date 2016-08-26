<?php
/**
 * @file
 * ogmk_flags.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ogmk_flags_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'flagging-ogmk_node_featured-ogmk_integer'.
  $field_instances['flagging-ogmk_node_featured-ogmk_integer'] = array(
    'bundle' => 'ogmk_node_featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'flagging',
    'field_name' => 'ogmk_integer',
    'label' => 'Order',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Order');

  return $field_instances;
}
