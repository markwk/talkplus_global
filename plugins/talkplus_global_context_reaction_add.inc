<?php
// $Id:

/**
 * @file
 *   Adds a Context module reaction for the TalkPlus module.
 */

/**
 * Add Olark code to the page.
 */
class talkplus_global_context_reaction_add extends context_reaction {
  
  function options_form($context) {
    return array(
      'add' => array('#type' => 'value', '#value' => TRUE),
      'note' => array('#type' => 'markup', '#value' => t('TalkPlus chat code will be added to the page.')),
    );
  }

  function options_form_submit($values) {
    return array('add' => 1);
  }
  
  function execute() {
    $contexts = $this->get_contexts();
    foreach ($contexts as $context) {
      if (!empty($context->reactions[$this->plugin])) {
        return TRUE;
      }
    }
  }
}
