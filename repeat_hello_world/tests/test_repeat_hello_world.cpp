/*================================ FILE INFO =================================*/
/* Filename           : test_repeat_hello_world.cpp                           */
/*                                                                            */
/* File description here...                                                   */
/*                                                                            */
/*============================================================================*/

/*============================================================================*/
/*                               Include Files                                */
/*============================================================================*/
extern "C" {
#include "repeat_hello_world.h"
extern int printHelloWorldCallCount;
}

#include <CppUTest/TestHarness.h>

/*============================================================================*/
/*                             Private Definitions                            */
/*============================================================================*/
/* none */

/*============================================================================*/
/*                                 Test Group                                 */
/*============================================================================*/
TEST_GROUP(RepeatHelloWorldTests)
{
    void setup()
    {
        printHelloWorldCallCount = 0;
    }

    void teardown()
    {
        printHelloWorldCallCount = 0;
    }
};

/*============================================================================*/
/*                                    Tests                                   */
/*============================================================================*/
TEST(RepeatHelloWorldTests, ShouldCallPrintTwice)
{
    printHelloWorldTwice();
    LONGS_EQUAL(2, printHelloWorldCallCount);
}
