#ifndef __FACTORY_TEST_H__
#define __FACTORY_TEST_H__

#include "gtest/gtest.h"
#include "../src/factory.cpp"

TEST(FactoryTest, EasyAdd) {
   Factory test;
   char* args[] = { "7", "+", "9" };
   Base* operation = test.parse(args, 3);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 16);
}

TEST(FactoryTest, SubWhileAdd) {
   Factory test;
   char* args[] = { "12", "-", "4", "+", "10" };
   Base* operation = test.parse(args, 5);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 18);
}

TEST(FactoryTest, EasyMult) {
   Factory test;
   char* args[] = { "12", "*", "5" };
   Base* operation = test.parse(args, 3);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 60);
}

TEST(FactoryTest, MultWhileAdd) {
   Factory test;
   char* args[] = { "12", "*", "4", "+", "10" };
   Base* operation = test.parse(args, 5);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 58);
}

TEST(FactoryTest, SubAddMult) {
   Factory test;
   char* args[] = { "12", "-", "4", "+", "10", "*", "2" };
   Base* operation = test.parse(args, 7);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 36);
}

TEST(FactoryTest, EasyPow) {
   Factory test;
   char* args[] = { "5", "**", "3" };
   Base* operation = test.parse(args, 3);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 125);
}

#endif // __FACTORY_TEST_H__
