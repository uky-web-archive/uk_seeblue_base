<?php
/**
 * @file
 * uk_seeblue_base.features.inc
 */

/**
 * Implements hook_views_api().
 */
function uk_seeblue_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uk_seeblue_base_image_default_styles() {
  $styles = array();

  // Exported image style: contentlist.
  $styles['contentlist'] = array(
    'name' => 'contentlist',
    'label' => 'contentlist',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 218,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
