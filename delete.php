<?php

define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

$query = new EntityFieldQuery();
$result = $query->entityCondition('entity_type', 'node')
	->entityCondition('bundle', 'content_from_source')
	->execute();
print_r(count($result['node']));

if (!empty($result)) {
	$nids = array_keys($result['node']);
	$nodes = node_load_multiple($nids);
	$sound_node = 0;
	$image_node = 0;
	$video_node = 0;
	foreach ($nodes as $node) {
        print nl2br("{$node->nid}\r\n");
        print nl2br("{$node->type}\r\n");
        if (!empty($node->field_media_image)) {
            print nl2br("Image \r\n");
        	$image_node++;
        }
        elseif (!empty($node->field_video)) {
            print nl2br("video \r\n");
        	$video_node++;
        }
        elseif (!empty($node->field_sound)) {
            print nl2br("sound \r\n");
        	$sound_node++;
        }

        // $node->field_media_type[LANGUAGE_NONE][0]['tid'] = $media_type->tid;
        // node_save($node);
        // print nl2br("Saved node with media type: {$media_type->name}\r\n");
	}
	print nl2br("Image: $image_node; Sound: $sound_node; Video: $video_node\r\n");
}