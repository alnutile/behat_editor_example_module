 @example @javascript @local_test
 Feature: Example Test for WikiPedia found in Behat Editor Example Module
 
   Scenario: WikiPedia
     Given I am on "http://en.wikipedia.org"
     Given I wait
     And I follow the xpath "//*[@id='n-sitesupport']/a"
     Given I wait
     Then I should see "From Wikipedia founder Jimmy Wales"
     Given I wait
