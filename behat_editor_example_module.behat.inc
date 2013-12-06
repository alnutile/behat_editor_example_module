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
     * Use a xpath to act on a module
     *
     * @When /^I press the xpath "([^"]*)"$/
     */
    public function iPressTheXpath($arg)
    {
        $node = $this->getMainContext()->getSession()->getPage()->find('xpath', $arg);
        if($node) {
            $this->getMainContext()->getSession()->getPage()->find('xpath', $arg)->press();
        } else {
            throw new Exception('Element not found');
        }
    }

    /**
     * Use a xpath to act on a module
     *
     * @When /^I follow the xpath "([^"]*)"$/
     */
    public function iFollowTheXpath($arg)
    {
        $node = $this->getMainContext()->getSession()->getPage()->find('xpath', $arg);
        if($node) {
            $this->getMainContext()->getSession()->getPage()->find('xpath', $arg)->click();
        } else {
            throw new Exception('Element not found');
        }
    }

    /**
     * Use a css path to act on a module
     *
     * @When /^I press the element "([^"]*)"$/
     */
    public function iPressTheElement($arg)
    {
        $node = $this->getMainContext()->getSession()->getPage()->find('css', $arg);
        if($node) {
            $this->getMainContext()->getSession()->getPage()->find('css', $arg)->press();
        } else {
            throw new Exception('Element not found');
        }
    }


    /**
     * Use a css path to act on a module
     *
     * @When /^I follow the element "([^"]*)"$/
     */
    public function iFollowTheElement($arg)
    {
        $node = $this->getMainContext()->getSession()->getPage()->find('css', $arg);
        if($node) {
            $this->getMainContext()->getSession()->getPage()->find('css', $arg)->click();
        } else {
            throw new Exception('Element not found');
        }
    }

}