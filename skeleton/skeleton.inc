<?php

function form_skeleton_main_settings($form, &$form_state){

    $form['skeleton_sample_config'] = array(
        '#type' => 'select',
        '#options' => array(
            0 => t('Off'),
            1 => t('On'),
        ),
        '#title' => t('Sample config'),
        '#description' => '',
        '#default_value' => variable_get('skeleton_sample_config', ''),
    );
    return system_settings_form($form);
}


function skeleton_page_test() {

    return array(
        '#markup' => '<p>Skeleton test configuration page.</p>'
    );
}