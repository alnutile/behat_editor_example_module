<?php
/**
 * @file
 * To setup custom Step Definitions
 * user the api DrupalExtensions offers
 *
 * @link
 * http://dspeak.com/drupalextension/subcontexts.html
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class BehatExampleSubContext extends BehatContext implements DrupalSubContextInterface {

    public function __construct(){
    }

    /**
     * Setup the needed SubContext alias
     */
    public static function getAlias() {
        return 'behat_editor_example';
    }

    /**
     * This will cause a 10 second delay
     *
     * @Given /^I wait longer$/
     */
    public function iWaitLonger() {
        sleep(10);
    }

}