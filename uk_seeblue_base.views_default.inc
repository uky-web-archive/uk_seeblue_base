<?php
/**
 * @file
 * uk_seeblue_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uk_seeblue_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contentlist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contentlist';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Header image */
  $handler->display->display_options['fields']['field_header_image']['id'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['table'] = 'field_data_field_header_image';
  $handler->display->display_options['fields']['field_header_image']['field'] = 'field_header_image';
  $handler->display->display_options['fields']['field_header_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_header_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_image']['settings'] = array(
    'image_style' => 'contentlist',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Teaser Headline */
  $handler->display->display_options['fields']['field_teaser_headline']['id'] = 'field_teaser_headline';
  $handler->display->display_options['fields']['field_teaser_headline']['table'] = 'field_data_field_teaser_headline';
  $handler->display->display_options['fields']['field_teaser_headline']['field'] = 'field_teaser_headline';
  $handler->display->display_options['fields']['field_teaser_headline']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_headline']['empty'] = '[title]';
  $handler->display->display_options['fields']['field_teaser_headline']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_headline']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_headline']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'View details';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'view details';
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_field_external_link']['id'] = 'field_field_external_link';
  $handler->display->display_options['fields']['field_field_external_link']['table'] = 'field_data_field_field_external_link';
  $handler->display->display_options['fields']['field_field_external_link']['field'] = 'field_field_external_link';
  $handler->display->display_options['fields']['field_field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_field_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['alter']['text'] = 'View details';
  $handler->display->display_options['fields']['field_field_external_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['alter']['path'] = '[field_field_external_link]';
  $handler->display->display_options['fields']['field_field_external_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['alter']['prefix'] = '<span>';
  $handler->display->display_options['fields']['field_field_external_link']['alter']['suffix'] = '</span>';
  $handler->display->display_options['fields']['field_field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_external_link']['empty'] = '[view_node]';
  $handler->display->display_options['fields']['field_field_external_link']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_field_external_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_field_external_link']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="content-boxinner">
		<div class="figure-img">[field_header_image]</div>
		<div class="figure-desc cf">
			<h2 class="title-link">[title]</h2>
			[field_teaser_headline] <br />
			[field_field_external_link]
		</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '224',
  );
  /* Sort criterion: Content: Order Weight (field_order_weight) */
  $handler->display->display_options['sorts']['field_order_weight_value']['id'] = 'field_order_weight_value';
  $handler->display->display_options['sorts']['field_order_weight_value']['table'] = 'field_data_field_order_weight';
  $handler->display->display_options['sorts']['field_order_weight_value']['field'] = 'field_order_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['contentlist'] = $view;

  return $export;
}
