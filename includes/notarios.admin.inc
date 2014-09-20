<?php
/**
 * @file
 * The file for admin forms and functionality for the notarios entity
 */

/**
 * Implements hook_form().
 */
function notarios_form($form, &$form_state, $notarios = NULL) {
  $form = array();

  $form['username'] = array(
    '#title' => t('Username'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->username) ? $notarios->username : '',
    '#description' => t('Fake User Name assigned to Notario.'),
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->title) ? $notarios->title : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['firstname'] = array(
    '#title' => t('First Name'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->firstname) ? $notarios->firstname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['middlename'] = array(
    '#title' => t('Middle Name'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->middlename) ? $notarios->middlename : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['lastname'] = array(
    '#title' => t('Last Name'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->lastname) ? $notarios->lastname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['name_suffix'] = array(
    '#title' => t('Name Suffix'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->name_suffix) ? $notarios->name_suffix : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['nickname'] = array(
    '#title' => t('Nick Name'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->nickname) ? $notarios->nickname : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['party'] = array(
    '#title' => t('Party'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->party) ? $notarios->party : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['state'] = array(
    '#title' => t('State'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->state) ? $notarios->state : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['district'] = array(
    '#title' => t('District'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->district) ? $notarios->district : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['in_office'] = array(
    '#title' => t('In Office'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->in_office) ? $notarios->in_office : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['gender'] = array(
    '#title' => t('Gender'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->gender) ? $notarios->gender : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['phone'] = array(
    '#title' => t('Phone'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->phone) ? $notarios->phone : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['fax'] = array(
    '#title' => t('Fax'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->fax) ? $notarios->fax : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['website'] = array(
    '#title' => t('Web Site'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->website) ? $notarios->website : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['webform'] = array(
    '#title' => t('Web Form'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->webform) ? $notarios->webform : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['congress_office'] = array(
    '#title' => t('Congress Office'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->congress_office) ? $notarios->congress_office : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['bioguide_id'] = array(
    '#title' => t('Bio Guide ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->bioguide_id) ? $notarios->bioguide_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['votesmart_id'] = array(
    '#title' => t('Vote Smart ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->votesmart_id) ? $notarios->votesmart_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['fec_id'] = array(
    '#title' => t('FEC ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->fec_id) ? $notarios->fec_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['govtrack_id'] = array(
    '#title' => t('GovTrack ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->govtrack_id) ? $notarios->govtrack_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['crp_id'] = array(
    '#title' => t('CRP ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->crp_id) ? $notarios->crp_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['eventful_id'] = array(
    '#title' => t('EventFul ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->eventful_id) ? $notarios->eventful_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['sunlight_old_id'] = array(
    '#title' => t('Old Sunlight ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->sunlight_old_id) ? $notarios->sunlight_old_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['twitter_id'] = array(
    '#title' => t('Twitter ID'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->twitter_id) ? $notarios->twitter_id : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['congresspedia_url'] = array(
    '#title' => t('CongressPedia URL'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->congresspedia_url) ? $notarios->congresspedia_url : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['youtube_url'] = array(
    '#title' => t('Youtube URL'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->youtube_url) ? $notarios->youtube_url : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['official_rss'] = array(
    '#title' => t('Official RSS Feed'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->official_rss) ? $notarios->official_rss : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['senate_class'] = array(
    '#title' => t('Senate Class'),
    '#type' => 'textfield',
    '#default_value' => isset($notarios->senate_class) ? $notarios->senate_class : '',
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  field_attach_form('notarios', $notarios, $form, $form_state);

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => isset($notarios->notarios_id) ? t('Update Notario') : t('Save Notario'),
    ),
    'delete_link' => array(
      '#markup' => isset($notarios->notarios_id) ? l(t('Delete'), 'admin/content/notarios/manage/' . $notarios->notarios_id . '/delete', array('attributes' => array('id' => array('notarios-delete-' . $notarios->notarios_id), 'class' => array('button remove')), 'query' => array('destination' => 'admin/content/notarios'))) : ''));
  return $form;
}

/**
 * Implements hook_form_validate().
 */
function notarios_form_validate($form, &$form_state) {
}

/**
 * Implements hook_form_submit().
 */
function notarios_form_submit($form, &$form_state) {
  $notarios = entity_ui_form_submit_build_entity($form, $form_state);
  $notarios->save();
  drupal_set_message(t('@username notario has been saved.', array('@username' => $notarios->username)));
  // $form_state['redirect'] = 'admin/content/notarios';
  $form_state['redirect'] = 'notarios/' . $notarios->notarios_id;
}

/**
 * Page callback: Custom search settings
 *
 */
function notarios_bulk_import($form, &$form_state) {
  $form['csv'] = array(
      '#type' => 'file',
      '#name' => 'files[csv]',
      '#title' => 'Archivo CSV',
      '#description' => t('Notarios en formato .csv<br/>ATENCIÓN: Esta acción borrará todos los Notarios anteriores.'),
  );
  $form['#attributes'] = array('enctype' => "multipart/form-data");
  $form['#submit'][] = 'notarios_bulk_import_submit';

  return system_settings_form($form);
}


/**
 * Implements hook_form_validate.
 *
 * Checks the user has entered a query.
 *
 */
function notarios_bulk_import_validate($form,&$form_state){

  $file = file_save_upload('csv', array(
      'file_validate_extensions' => array('csv'), // Validate extensions.
  ));

  if($file){
    if ($file = file_move($file, 'public://', FILE_EXISTS_REPLACE)) {
      // Save the file for use in the submit handler.
      $form_state['storage']['file'] = $file;
    }
    else {
      form_set_error('csv', t('Failed to write the uploaded file. Please, try again.'));
    }
  }else{
    form_set_error('csv', t('No file was uploaded.'));
  }
}

/**
 * Implements hook_form_submit.
 *
 * Handles the form submission.
 *
 */
function notarios_bulk_import_submit($form, &$form_state){

  $file = $form_state['storage']['file'];

  _notarios_import($file->uri);

  drupal_set_message('Se han cargado los notarios correctamente.');
  drupal_goto('notarios');
}

/**
 * Confirmation before bulk deleting notarios.
 */
function notarios_bulk_delete($form, &$form_state, $notarios_ids) {
  $notarios_ids = explode('|', $notarios_ids);
  $notarios = notarios_load_multiple($notarios_ids);

  $form = array();
  $form_state['notarios_ids'] = $notarios_ids;

  $variables = array(
    'type' => 'ul',
    'items' => array(),
    'title' => '',
    'attributes' => array(),
  );

  foreach ($notarios as $notario) {
    $variables['items'][] = $notario->username;
  }

  $form['summary'] = array(
    '#markup' => theme_item_list($variables),
  );

  return confirm_form($form, t('Delete all notarios?'), 'admin/content/notarios', t('Placeholder description'), t('Delete all'), t('Cancel'));
}

/**
 * Implements hook_submit().
 */
function notarios_bulk_delete_submit($form, &$form_state) {
  $notarios_ids = $form_state['notarios_ids'];
  notarios_delete_multiple($notarios_ids);

  drupal_set_message(t('notarios deleted'));
  drupal_goto('admin/content/notarios');
}

