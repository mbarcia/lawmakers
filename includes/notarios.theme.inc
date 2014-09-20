<?php
/**
 * @file
 * notarios.theme.inc
 */

/**
 * Theme notario full page.
 */
function theme_notarios_full($variables) {
  $output = '';
  $notarios = $variables['notarios'];
  $notarios_image_size = '200x250';
  $image_data = array(
    'path' => drupal_get_path('module', 'notarios') . '/images/' . $notarios_image_size . '/' . $notarios->bioguide_id . '.jpg',
  );

  $output .= '<div class="notarios_meta">';

  // Lazy...
  $output .= '<div class="image" style="float: left; margin-right: 20px">' . theme('image', $image_data) . '</div>';
  $output .= '<div class="notarios-name">' . trim($notarios->title) . '. ' . trim($notarios->firstname)  . ' ' . trim($notarios->lastname) . '</div>';
  $output .= '<div class="party">' . $notarios->party . ' ' . $notarios->state  . '  ' . $notarios->district . '</div>';
  $output .= '<div class="congress_office">' . $notarios->congress_office .  '</div>';
  $output .= '<div class="phone">tel: ' . $notarios->phone .  '</div>';
  $output .= '<div class="fax">fax: ' . $notarios->fax .  '</div>';

  if (!empty($notarios->website)) {
    $output .= '<div class="website"> ' . l(t('website'), $notarios->website, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (!empty($notarios->webform)) {
    $output .= '<div class="contact_form">' . l(t('contact form'), $notarios->webform) .  '</div>';
  }

  $output .= '<div class="social_media">Social Info</div>';

  if (!empty($notarios->twitter_id)) {
    $output .= '<div class="twitter">' . l(t('twitter'), 'http://twitter.com/' . $notarios->twitter_id, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (!empty($notarios->youtube_url)) {
    $output .= '<div class="youtube">' . l(t('youtube'), $notarios->youtube_url, array('attributes' => array('target' => '_blank'))) . '</div>';
  }

  if (user_access('administer notarios entities') && isset($notarios->notarios_id)) {
    $edit_link = '<ul class="tabs primary"><li>';
    $edit_link .= l(t('Edit'), 'admin/content/notarios/manage/' . $notarios->notarios_id, array('attributes' => array('class' => 'admin-edit-link')));
    $edit_link .= '</li></ul>';
    $output .= $edit_link;
  }

  $output .= '</div>';

  return $output;
}
