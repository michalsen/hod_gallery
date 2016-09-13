<?php
/**
 *  Panel CTools create panel plugin
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('HoD Gallery'),
  'description' => t('HoD Gallery'),
  'category' => t('Straight North'),
  'render callback' => 'hod_gallery_render',
  'admin info' => 'hod_gallery_listinfo',
  'defaults' => 'Test',
  );



/**
 *  Render Panel
 */
function hod_gallery_render($subtype, $conf, $panel_args, $context = NULL) {
  $node = menu_get_object();
  $big_style = 'product_page_large';
  $lit_style = 'product_page_thumb';


  $content = product_gallery_loader_render($node);


  $display = $content;
  $block = new stdClass();
  $block->content = $display;
  return $block;

}

