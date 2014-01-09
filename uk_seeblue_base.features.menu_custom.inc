<?php
/**
 * @file
 * uk_seeblue_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uk_seeblue_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The Main Menu will be the primary source of navigation in the site.<br />To all administrators, note that there are some stipulations when adding links to this menu.
<ul>
<li>All parent links (i.e., links with children links nested inside of them) will NOT point to a page. The main goal of these parent links is to categorize other pages so as to provide a logical, systematic way of grouping content.</li>
<li>You must specify a destination for parent links, but keep in mind that they will be removed by the time they are rendered in the user\'s browser. As a result the menu will be less prone to error on the user\'s end, but it may present unexpected behavior to the administrator. To avoid any confusion, just <strong>set the path for parent links to &lt;front&gt;.</strong></li>
<li>If you really need a parent link to point to a page, the best practice would be to create a duplicate link and make it a child of that parent link.</li>
<li>Note that if there are ANY children for a given link, it will become a dead link that doesn\'t go anywhere. This is true no matter how deep a given link is nested.</li>
<li><strong>This menu has been designed to handle only five (5) levels of nested links, from the top parent to the bottom child</strong>. Deeper levels of nesting may cause unexpected problems with the layout of the menu.</li>
</ul><br />
Here is an example of the link layout as it will be seen by the user
<ul>
	<li>Child link - has a destination, has no children</li>
	<li>Parent Link - has no destination, has children
		<ul>
			<li>Parent link - has no destination, has children
				<ul>
					<li>Child Link - has a destination, has no children</li>
					<li>Child Link - has a destination, has no children</li>
				</ul>
			</li>
			<li>Child link - has a destination, has no children</li>
		</ul>
	</li>
</ul>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('The Main Menu will be the primary source of navigation in the site.<br />To all administrators, note that there are some stipulations when adding links to this menu.
<ul>
<li>All parent links (i.e., links with children links nested inside of them) will NOT point to a page. The main goal of these parent links is to categorize other pages so as to provide a logical, systematic way of grouping content.</li>
<li>You must specify a destination for parent links, but keep in mind that they will be removed by the time they are rendered in the user\'s browser. As a result the menu will be less prone to error on the user\'s end, but it may present unexpected behavior to the administrator. To avoid any confusion, just <strong>set the path for parent links to &lt;front&gt;.</strong></li>
<li>If you really need a parent link to point to a page, the best practice would be to create a duplicate link and make it a child of that parent link.</li>
<li>Note that if there are ANY children for a given link, it will become a dead link that doesn\'t go anywhere. This is true no matter how deep a given link is nested.</li>
<li><strong>This menu has been designed to handle only five (5) levels of nested links, from the top parent to the bottom child</strong>. Deeper levels of nesting may cause unexpected problems with the layout of the menu.</li>
</ul><br />
Here is an example of the link layout as it will be seen by the user
<ul>
	<li>Child link - has a destination, has no children</li>
	<li>Parent Link - has no destination, has children
		<ul>
			<li>Parent link - has no destination, has children
				<ul>
					<li>Child Link - has a destination, has no children</li>
					<li>Child Link - has a destination, has no children</li>
				</ul>
			</li>
			<li>Child link - has a destination, has no children</li>
		</ul>
	</li>
</ul>');


  return $menus;
}
