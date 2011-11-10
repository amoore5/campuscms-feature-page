<?php
/**
 * @file
 * campuscms_feature_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:node/add/page
  $menu_links['menu-toolbar-administrator:node/add/page'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-content-editor:node/add/page
  $menu_links['menu-toolbar-content-editor:node/add/page'] = array(
    'menu_name' => 'menu-toolbar-content-editor',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add/page
  $menu_links['menu-toolbar-site-manager:node/add/page'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Page');


  return $menu_links;
}
