<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mm_rotator_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mm_rotator_imagecache_default_presets() {
  $items = array(
    'mm_rotator_700x400' => array(
      'presetname' => 'mm_rotator_700x400',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '700',
            'height' => '400',
          ),
        ),
      ),
    ),
    'mm_rotator_960x400' => array(
      'presetname' => 'mm_rotator_960x400',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '960',
            'height' => '400',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function mm_rotator_node_info() {
  $items = array(
    'rotator_item' => array(
      'name' => t('Rotator Item'),
      'module' => 'features',
      'description' => t('An item that goes into the rotator.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function mm_rotator_views_api() {
  return array(
    'api' => '2',
  );
}
