@example @javascript
Feature: Example Test for WikiPedia found in Behat Editor Example Module

  Scenario: WikiPedia
    Given I am on "http://en.wikipedia.org/wiki/Main_Page"
    Then I should see "WikiPedia"
    Then I should not see "Muffins"
    And I wait longer
