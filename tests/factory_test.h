#ifndef __FACTORY_TEST_H__
#define __FACTORY_TEST_H__

#include "gtest/gtest.h"
#include "../src/factory.cpp"

TEST(FactoryTest, EasyAdd) {
   Factory test;
   char* args[] = { "./calculator", "7", "+", "9" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 16);
   EXPECT_EQ(operation->stringify(), "7 + 9");
   delete operation;
}

TEST(FactoryTest, SubWhileAdd) {
   Factory test;
   char* args[] = { "./calculator", "12", "-", "4", "+", "10" };
   Base* operation = test.parse(args, 6);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 18);
   EXPECT_EQ(operation->stringify(), "12 - 4 + 10");
   delete operation;
}

TEST(FactoryTest, EasyMult) {
   Factory test;
   char* args[] = { "./calculator", "12", "*", "5" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 60);
   EXPECT_EQ(operation->stringify(), "12 * 5");
   delete operation;
}

TEST(FactoryTest, MultWhileAdd) {
   Factory test;
   char* args[] = { "./calculator", "12", "*", "4", "+", "10" };
   Base* operation = test.parse(args, 6);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 58);
   EXPECT_EQ(operation->stringify(), "12 * 4 + 10");
   delete operation;
}

TEST(FactoryTest, SubAddMult) {
   Factory test;
   char* args[] = { "./calculator", "12", "-", "4", "+", "10", "*", "2" };
   Base* operation = test.parse(args, 8);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 36);
   EXPECT_EQ(operation->stringify(), "12 - 4 + 10 * 2");
   delete operation;
}

TEST(FactoryTest, EasyPow) {
   Factory test;
   char* args[] = { "./calculator", "5", "**", "3" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 125);
   EXPECT_EQ(operation->stringify(), "5 ** 3");
   delete operation;
}

TEST(FactoryTest, NegativeSub) {
   Factory test;
   char* args[] = { "./calculator", "-6", "-", "3" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), -9);
   EXPECT_EQ(operation->stringify(), "-6 - 3");
   delete operation;
}

TEST(FactoryTest, EasyDiv) {
   Factory test;
   char* args[] = { "./calculator", "16", "/", "4" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 4);
   EXPECT_EQ(operation->stringify(), "16 / 4");
   delete operation;
}

TEST(FactoryTest, MultWhileDiv) {
   Factory test;
   char* args[] = { "./calculator", "8", "*", "6", "/", "12" };
   Base* operation = test.parse(args, 6);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 4);
   EXPECT_EQ(operation->stringify(), "8 * 6 / 12");
   delete operation;
}

TEST(FactoryTest, DivWhileAdd) {
   Factory test;
   char* args[] = { "./calculator", "18", "/", "3", "+", "7" };
   Base* operation = test.parse(args, 6);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 13);
   EXPECT_EQ(operation->stringify(), "18 / 3 + 7");
   delete operation;
}

TEST(FactoryTest, AddDivPow) {
   Factory test;
   char* args[] = { "./calculator", "1", "+", "9", "/", "5", "**", "3" };
   Base* operation = test.parse(args, 8);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 8);
   EXPECT_EQ(operation->stringify(), "1 + 9 / 5 ** 3");
   delete operation;
}

TEST(FactoryTest, DecimalAdd) {
   Factory test;
   char* args[] = { "./calculator", "12.5", "+", "6.5" };
   Base* operation = test.parse(args, 4);
   EXPECT_DOUBLE_EQ(operation->evaluate(), 19);
   EXPECT_EQ(operation->stringify(), "12.5 + 6.5");
   delete operation;
}

TEST(FactoryInvalidArg, NullPtr2 ) {
   Factory test;
   char* argv[] = { "./calculator", "5", "+", "8","$", "3" };
   Base* op = test.parse(argv, 6);
   EXPECT_TRUE(!op);
}

#endif // __FACTORY_TEST_H__
