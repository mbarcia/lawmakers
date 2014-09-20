<?php
/**
 * @file
 * Notario Drush script.
 */

/**
 * Implements hook_drush_command().
 */
function notarios_drush_command() {
  $items = array();
  $items['import-notarios'] = array(
    'callback' => 'notarios_import_csv_data',
    'description' => dt('Import Notarios from csv file.'),
  );
  return $items;
}

/**
 * Drush callback.
 */
function notarios_import_csv_data() {
  $filepath = drupal_get_path('module', 'notarios') . "/data/notarios.csv";
  _notarios_import($filepath);
  drush_log('Import complete', 'success');
}
