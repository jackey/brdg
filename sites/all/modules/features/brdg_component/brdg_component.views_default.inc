<?php
/**
 * @file
 * brdg_component.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function brdg_component_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'admin_pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'admin_pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_from_user_name' => 'field_from_user_name',
    'nid' => 'nid',
    'created' => 'created',
    'field_source_type' => 'field_source_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_from_user_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_source_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: From User Name */
  $handler->display->display_options['fields']['field_from_user_name']['id'] = 'field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['table'] = 'field_data_field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['field'] = 'field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['label'] = 'User Name';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Source Type */
  $handler->display->display_options['fields']['field_source_type']['id'] = 'field_source_type';
  $handler->display->display_options['fields']['field_source_type']['table'] = 'field_data_field_source_type';
  $handler->display->display_options['fields']['field_source_type']['field'] = 'field_source_type';
  $handler->display->display_options['fields']['field_source_type']['label'] = 'From';
  $handler->display->display_options['fields']['field_source_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Anonymous Flaged */
  $handler->display->display_options['fields']['field_anonymous_flaged']['id'] = 'field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['table'] = 'field_data_field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['field'] = 'field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['label'] = 'Flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comment';
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  /* Sort criterion: Content: Anonymous Flaged (field_anonymous_flaged) */
  $handler->display->display_options['sorts']['field_anonymous_flaged_value']['id'] = 'field_anonymous_flaged_value';
  $handler->display->display_options['sorts']['field_anonymous_flaged_value']['table'] = 'field_data_field_anonymous_flaged';
  $handler->display->display_options['sorts']['field_anonymous_flaged_value']['field'] = 'field_anonymous_flaged_value';
  $handler->display->display_options['sorts']['field_anonymous_flaged_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_anonymous_flaged_value']['expose']['label'] = 'Flaged';
  /* Sort criterion: Content: Comment count */
  $handler->display->display_options['sorts']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['sorts']['comment_count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['comment_count']['expose']['label'] = 'Comment count';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '+30 day';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/sort';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sorted Content';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/sort/week';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sort One Week';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/sort/month';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sort One Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['admin_pages'] = $view;

  $view = new view();
  $view->name = 'admin_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'admin_users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'admin_users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'created' => 'created',
    'uid' => 'uid',
    'uid_1' => 'uid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'uid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Opration';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = '<a href="/user/[uid]/block">Disable This Account</a>';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['label'] = 'Enable This User';
  $handler->display->display_options['fields']['uid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['alter']['text'] = '<a href="/user/[uid_1]/unblock">Enable This User</a>';
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'users';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created_1']['expose']['label'] = 'Created Date';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'users';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Enabled';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'User Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: User City (field_user_city) */
  $handler->display->display_options['filters']['field_user_city_value']['id'] = 'field_user_city_value';
  $handler->display->display_options['filters']['field_user_city_value']['table'] = 'field_data_field_user_city';
  $handler->display->display_options['filters']['field_user_city_value']['field'] = 'field_user_city_value';
  $handler->display->display_options['filters']['field_user_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_city_value']['expose']['operator_id'] = 'field_user_city_value_op';
  $handler->display->display_options['filters']['field_user_city_value']['expose']['label'] = 'City Location';
  $handler->display->display_options['filters']['field_user_city_value']['expose']['operator'] = 'field_user_city_value_op';
  $handler->display->display_options['filters']['field_user_city_value']['expose']['identifier'] = 'field_user_city_value';
  $handler->display->display_options['filters']['field_user_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/people/user-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['admin_users'] = $view;

  $view = new view();
  $view->name = 'comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'comments';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = 'field_comment';
  $handler->display->display_options['fields']['comment_body']['type'] = 'text_plain';
  /* Field: Comment: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['type'] = 'text_plain';
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'field_post_date';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return $_GET[\'nid\'];';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

  /* Display: Comments From Source Content */
  $handler = $view->new_display('services', 'Comments From Source Content', 'services_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'source_content_comments';
  $export['comments'] = $view;

  $view = new view();
  $view->name = 'pictures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'pictures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'pictures';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Flags: like counter */
  $handler->display->display_options['relationships']['flag_count_rel']['id'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_count_rel']['field'] = 'flag_count_rel';
  $handler->display->display_options['relationships']['flag_count_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_count_rel']['flag'] = 'like';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'field_body';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: From User Name */
  $handler->display->display_options['fields']['field_from_user_name']['id'] = 'field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['table'] = 'field_data_field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['field'] = 'field_from_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['label'] = 'field_user_name';
  $handler->display->display_options['fields']['field_from_user_name']['type'] = 'text_plain';
  /* Field: Content: From User Profile Image */
  $handler->display->display_options['fields']['field_from_user_profile_image']['id'] = 'field_from_user_profile_image';
  $handler->display->display_options['fields']['field_from_user_profile_image']['table'] = 'field_data_field_from_user_profile_image';
  $handler->display->display_options['fields']['field_from_user_profile_image']['field'] = 'field_from_user_profile_image';
  $handler->display->display_options['fields']['field_from_user_profile_image']['label'] = 'field_user_profile_image';
  $handler->display->display_options['fields']['field_from_user_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_from_user_profile_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_from_user_profile_image']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'image_style' => '400_400',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_media_image']['delta_offset'] = '0';
  /* Field: Content: Post Date */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = 'post_date';
  $handler->display->display_options['fields']['field_post_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sound */
  $handler->display->display_options['fields']['field_sound']['id'] = 'field_sound';
  $handler->display->display_options['fields']['field_sound']['table'] = 'field_data_field_sound';
  $handler->display->display_options['fields']['field_sound']['field'] = 'field_sound';
  $handler->display->display_options['fields']['field_sound']['label'] = 'field_sound';
  $handler->display->display_options['fields']['field_sound']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_sound']['delta_offset'] = '0';
  /* Field: Content: Sound Thumbnail */
  $handler->display->display_options['fields']['field_sound_thumbnail']['id'] = 'field_sound_thumbnail';
  $handler->display->display_options['fields']['field_sound_thumbnail']['table'] = 'field_data_field_sound_thumbnail';
  $handler->display->display_options['fields']['field_sound_thumbnail']['field'] = 'field_sound_thumbnail';
  $handler->display->display_options['fields']['field_sound_thumbnail']['label'] = 'field_sound_thumbnail';
  $handler->display->display_options['fields']['field_sound_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sound_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Source Type */
  $handler->display->display_options['fields']['field_source_type']['id'] = 'field_source_type';
  $handler->display->display_options['fields']['field_source_type']['table'] = 'field_data_field_source_type';
  $handler->display->display_options['fields']['field_source_type']['field'] = 'field_source_type';
  $handler->display->display_options['fields']['field_source_type']['label'] = 'source_type';
  $handler->display->display_options['fields']['field_source_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Flags: Flag counter */
  $handler->display->display_options['fields']['count']['id'] = 'count';
  $handler->display->display_options['fields']['count']['table'] = 'flag_counts';
  $handler->display->display_options['fields']['count']['field'] = 'count';
  $handler->display->display_options['fields']['count']['relationship'] = 'flag_count_rel';
  $handler->display->display_options['fields']['count']['label'] = 'field_flag_counter';
  $handler->display->display_options['fields']['count']['separator'] = '';
  /* Field: Field: User City */
  $handler->display->display_options['fields']['field_user_city_1']['id'] = 'field_user_city_1';
  $handler->display->display_options['fields']['field_user_city_1']['table'] = 'field_data_field_user_city';
  $handler->display->display_options['fields']['field_user_city_1']['field'] = 'field_user_city';
  $handler->display->display_options['fields']['field_user_city_1']['label'] = 'field_user_city';
  $handler->display->display_options['fields']['field_user_city_1']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_user_city_1']['settings'] = array(
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Field: Content: Anonymous Flaged */
  $handler->display->display_options['fields']['field_anonymous_flaged']['id'] = 'field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['table'] = 'field_data_field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['field'] = 'field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['label'] = 'field_anonymous_flaged';
  $handler->display->display_options['fields']['field_anonymous_flaged']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_anonymous_flaged']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post Date (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Field: User City (field_user_city) */
  $handler->display->display_options['arguments']['field_user_city_value']['id'] = 'field_user_city_value';
  $handler->display->display_options['arguments']['field_user_city_value']['table'] = 'field_data_field_user_city';
  $handler->display->display_options['arguments']['field_user_city_value']['field'] = 'field_user_city_value';
  $handler->display->display_options['arguments']['field_user_city_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_city_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_user_city_value']['default_argument_options']['code'] = 'return isset($_GET[\'city_id\']) ? $_GET[\'city_id\'] : \'all\';';
  $handler->display->display_options['arguments']['field_user_city_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_city_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_city_value']['summary_options']['items_per_page'] = '25';
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
    'content_from_source' => 'content_from_source',
  );
  /* Filter criterion: Content: Sound (field_sound) */
  $handler->display->display_options['filters']['field_sound_value']['id'] = 'field_sound_value';
  $handler->display->display_options['filters']['field_sound_value']['table'] = 'field_data_field_sound';
  $handler->display->display_options['filters']['field_sound_value']['field'] = 'field_sound_value';
  $handler->display->display_options['filters']['field_sound_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_sound_value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media Image */
  $handler->display->display_options['fields']['field_media_image']['id'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['fields']['field_media_image']['field'] = 'field_media_image';
  $handler->display->display_options['fields']['field_media_image']['label'] = '';
  $handler->display->display_options['fields']['field_media_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_media_image']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['path'] = 'pictures';

  /* Display: Pictures Services */
  $handler = $view->new_display('services', 'Pictures Services', 'services_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'content_from_source' => 'content_from_source',
  );
  /* Filter criterion: Content: Media Image (field_media_image:fid) */
  $handler->display->display_options['filters']['field_media_image_fid']['id'] = 'field_media_image_fid';
  $handler->display->display_options['filters']['field_media_image_fid']['table'] = 'field_data_field_media_image';
  $handler->display->display_options['filters']['field_media_image_fid']['field'] = 'field_media_image_fid';
  $handler->display->display_options['filters']['field_media_image_fid']['operator'] = '!=';
  $handler->display->display_options['filters']['field_media_image_fid']['value']['value'] = '0';
  /* Filter criterion: Content: Video (field_video) */
  $handler->display->display_options['filters']['field_video_value']['id'] = 'field_video_value';
  $handler->display->display_options['filters']['field_video_value']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_value']['field'] = 'field_video_value';
  $handler->display->display_options['filters']['field_video_value']['operator'] = 'empty';
  $handler->display->display_options['path'] = 'services_picture';

  /* Display: Video Services */
  $handler = $view->new_display('services', 'Video Services', 'services_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'content_from_source' => 'content_from_source',
  );
  /* Filter criterion: Content: Video (field_video) */
  $handler->display->display_options['filters']['field_video_value']['id'] = 'field_video_value';
  $handler->display->display_options['filters']['field_video_value']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_value']['field'] = 'field_video_value';
  $handler->display->display_options['filters']['field_video_value']['operator'] = '!=';
  $handler->display->display_options['path'] = 'services_video';

  /* Display: Video/Picture/soundcloud Services */
  $handler = $view->new_display('services', 'Video/Picture/soundcloud Services', 'services_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'content_from_source' => 'content_from_source',
  );
  $handler->display->display_options['path'] = 'all_resources';

  /* Display: Sound Services */
  $handler = $view->new_display('services', 'Sound Services', 'services_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'services_sould';
  $export['pictures'] = $view;

  return $export;
}
