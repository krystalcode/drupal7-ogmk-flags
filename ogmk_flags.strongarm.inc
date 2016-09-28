<?php
/**
 * @file
 * ogmk_flags.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ogmk_flags_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__ogmk_comment_like';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__ogmk_comment_like'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__ogmk_node_bookmark';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__ogmk_node_bookmark'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__ogmk_node_featured';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__ogmk_node_featured'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__ogmk_node_follow';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__ogmk_node_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_flagging__ogmk_node_like';
  $strongarm->value = array();
  $export['field_bundle_settings_flagging__ogmk_node_like'] = $strongarm;

  return $export;
}
