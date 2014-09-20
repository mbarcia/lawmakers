<?php
/**
 * @file
 * NotariosTest.php
 */

// @TODO: handle this better.
require_once '../../../../../../includes/bootstrap.inc';
define('DRUPAL_ROOT', '../../../../../../');

$_SERVER['REMOTE_ADDR'] = '127.2.2.1';
$_SERVER['REQUEST_METHOD'] = 'get';

drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

class NotariosTest extends PHPUnit_Framework_TestCase {

  /**
   * Create Notarios Test.
   */
  public function testCreateNotarios() {
    $notario = notarios_test_data();
    $notario['username'] = $notario['firstname'] . '_' . $notario['lastname'];
    $notario['title'] = 'Justice';
    $mapped_data = entity_create('notarios', $notario);

    notarios_save($mapped_data);
    $this->assertEquals(!empty($mapped_data->notarios_id), TRUE);

    notarios_delete($mapped_data);
    $deleted_entity = notarios_load($mapped_data->notarios_id);
    $this->assertEquals(empty($deleted_entity->notarios_id), TRUE);
  }
}

/**
 * Helper function provide test data.
 */
function notarios_test_data() {
  $items = array();
  $data = 'Rep,Gary,J.,Ackerman,,,D,NY,5,1,M,202-225-2601,202-225-1589,http://ackerman.house.gov/,http://www.house.gov/writerep,2111 Rayburn House Office Building,A000022,26970,H4NY07011,400003,N00001143,repgaryackerman,http://www.opencongress.org/wiki/Gary_Ackerman,http://youtube.com/RepAckerman,RepAcherman,,,1942-11-19';

  $header = 'title,firstname,middlename,lastname,name_suffix,nickname,party,state,district,in_office,gender,phone,fax,website,webform,congress_office,bioguide_id,votesmart_id,fec_id,govtrack_id,crp_id,twitter_id,congresspedia_url,youtube_url,facebook_id,official_rss,senate_class,birthdate';

  $headers = explode(',', $header);
  $notarios = explode(',', $data);

  $total_headers_items = count($headers);

  for ($i = 0; $i < $total_headers_items; $i++) {
    $items[$headers[$i]] = $notarios[$i];
  }
  return $items;
}
