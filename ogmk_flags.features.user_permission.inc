<?php
/**
 * @file
 * ogmk_flags.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_flags_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag ogmk_comment_like'.
  $permissions['flag ogmk_comment_like'] = array(
    'name' => 'flag ogmk_comment_like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag ogmk_node_bookmark'.
  $permissions['flag ogmk_node_bookmark'] = array(
    'name' => 'flag ogmk_node_bookmark',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag ogmk_node_featured'.
  $permissions['flag ogmk_node_featured'] = array(
    'name' => 'flag ogmk_node_featured',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag ogmk_node_follow'.
  $permissions['flag ogmk_node_follow'] = array(
    'name' => 'flag ogmk_node_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'flag ogmk_node_like'.
  $permissions['flag ogmk_node_like'] = array(
    'name' => 'flag ogmk_node_like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ogmk_comment_like'.
  $permissions['unflag ogmk_comment_like'] = array(
    'name' => 'unflag ogmk_comment_like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ogmk_node_bookmark'.
  $permissions['unflag ogmk_node_bookmark'] = array(
    'name' => 'unflag ogmk_node_bookmark',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ogmk_node_featured'.
  $permissions['unflag ogmk_node_featured'] = array(
    'name' => 'unflag ogmk_node_featured',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ogmk_node_follow'.
  $permissions['unflag ogmk_node_follow'] = array(
    'name' => 'unflag ogmk_node_follow',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag ogmk_node_like'.
  $permissions['unflag ogmk_node_like'] = array(
    'name' => 'unflag ogmk_node_like',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
