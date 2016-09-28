<?php
/**
 * @file
 * ogmk_flags.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_flags_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ogmk_flags_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ogmk_flags_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['ogmk_comment_like'] = array(
    'entity_type' => 'comment',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'comment_node_ogmk_post',
      1 => 'comment_node_ogmk_product',
      2 => 'comment_node_ogmk_review',
      3 => 'comment_node_ogmk_shop',
    ),
    'flag_short' => 'Like',
    'flag_long' => 'You may like comment to express your admiration for it, or to create your personal collection of favourite comments.',
    'flag_message' => 'You have now liked this comment.',
    'unflag_short' => 'Unlike',
    'unflag_long' => 'You may unlike comment to remove it from your personal collection of favourite comments.',
    'unflag_message' => 'You have now unliked this comment.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -6,
    'show_in_links' => array(
      'full' => 'full',
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'api_version' => 3,
    'module' => 'ogmk_flags',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Bookmark".
  $flags['ogmk_node_bookmark'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmark',
    'global' => 0,
    'types' => array(
      0 => 'ogmk_post',
      1 => 'ogmk_product',
      2 => 'ogmk_review',
      3 => 'ogmk_shop',
    ),
    'flag_short' => 'Bookmark',
    'flag_long' => 'You can bookmark an item so that you can explore it at a later point.',
    'flag_message' => 'You have now bookmarked this item.',
    'unflag_short' => 'Unbookmark',
    'unflag_long' => 'You may unbookmark an item when you have finished exploring it.',
    'unflag_message' => 'You have now unbookmarked this item.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -7,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'info' => 0,
      'ogmk_bootstrap_media' => 0,
      'ogmk_manage_teaser' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ogmk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Featured".
  $flags['ogmk_node_featured'] = array(
    'entity_type' => 'node',
    'title' => 'Featured',
    'global' => 1,
    'types' => array(
      0 => 'ogmk_post',
      1 => 'ogmk_product',
      2 => 'ogmk_review',
      3 => 'ogmk_shop',
    ),
    'flag_short' => 'Feature',
    'flag_long' => 'Flag an item as Featured in order to add it to the collection of Featured items.',
    'flag_message' => 'You have now flagged this item as featured.',
    'unflag_short' => 'Unfeature',
    'unflag_long' => 'Unflag a Featured item in order to remove it from the collection of Featured items. ',
    'unflag_message' => 'You have now unflagged this Featured item.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -10,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'info' => 0,
      'ogmk_bootstrap_media' => 0,
      'ogmk_manage_teaser' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ogmk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Follow".
  $flags['ogmk_node_follow'] = array(
    'entity_type' => 'node',
    'title' => 'Follow',
    'global' => 0,
    'types' => array(
      0 => 'ogmk_post',
      1 => 'ogmk_product',
      2 => 'ogmk_review',
      3 => 'ogmk_shop',
    ),
    'flag_short' => 'Follow',
    'flag_long' => 'You may follow an item so that you receive notifications on updates.',
    'flag_message' => 'You are now following this item.',
    'unflag_short' => 'Unfollow',
    'unflag_long' => 'You may unfollow an item to stop receiving notifications on updates.',
    'unflag_message' => 'You have now stopped following this item.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -8,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'info' => 0,
      'ogmk_bootstrap_media' => 0,
      'ogmk_manage_teaser' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ogmk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Like".
  $flags['ogmk_node_like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'ogmk_post',
      1 => 'ogmk_product',
      2 => 'ogmk_review',
      3 => 'ogmk_shop',
    ),
    'flag_short' => 'Like',
    'flag_long' => 'You may like an item to express your admiration for it, or to create your personal collection of favourite items.',
    'flag_message' => 'You have now liked this item.',
    'unflag_short' => 'Unlike',
    'unflag_long' => 'You may unlike an item to remove it from your personal collection of favourite items.',
    'unflag_message' => 'You have now unliked this item.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => -9,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'info' => 0,
      'ogmk_bootstrap_media' => 0,
      'ogmk_manage_teaser' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ogmk_flags',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
