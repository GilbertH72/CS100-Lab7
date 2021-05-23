#ifndef __ADD_TEST_H__
#define __ADD_TEST_H__

#include "gtest/gtest.h"
#include "../header/op.h"
#include "../header/add.h"
#include "../header/mult.h"

TEST(AddTest, AddEvaluatePositiveInts) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(7);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->evaluate(), 13);
}

TEST(AddTest, AddStringifyPositiveInts) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(10);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->stringify(), "4 + 10");
}

TEST(AddTest, AddEvaluateNegativeInts) {
   Op* op1 = new Op(-6);
   Op* op2 = new Op(-7);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->evaluate(), -13);
}

TEST(AddTest, AddStringifyNegativeInts) {
   Op* op1 = new Op(-4);
   Op* op2 = new Op(-10);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->stringify(), "-4 + -10");
}

TEST(AddTest, AddEvaluatePositiveDoubles) {
   Op* op1 = new Op(6.3);
   Op* op2 = new Op(7.8);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->evaluate(), 14.1);
}

TEST(AddTest, AddStringifyPositiveDoubles) {
   Op* op1 = new Op(4.5);
   Op* op2 = new Op(10.2);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->stringify(), "4.5 + 10.2");
}

TEST(AddTest, AddEvaluateNegativeDoubles) {
   Op* op1 = new Op(-6.3);
   Op* op2 = new Op(-7.8);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->evaluate(), -14.1);
}

TEST(AddTest, AddStringifyNegativeDoubles) {
   Op* op1 = new Op(-4.5);
   Op* op2 = new Op(-10.2);
   Add* test = new Add(op1, op2);
   EXPECT_EQ(test->stringify(), "-4.5 + -10.2");
}

TEST(AddTest, AddEvaluateThroughMult) {
   Op* op1 = new Op(2);
   Op* op2 = new Op(7);
   Mult* mult1 = new Mult(op1, op2);
   Op* op3 = new Op(30);
   Add* test = new Add(mult1, op3);
   EXPECT_EQ(test->evaluate(), 44);
}

TEST(AddTest, AddStringThroughMult) {
   Op* op1 = new Op(2);
   Op* op2 = new Op(7);
   Mult* mult1 = new Mult(op1, op2);
   Op* op3 = new Op(30);
   Add* test = new Add(mult1, op3);
   EXPECT_EQ(test->stringify(), "2 * 7 + 30");
}

TEST(AddTest, AddEvaluateZeros) {
   Op* zero = new Op(0);
   Add* test = new Add(zero, zero);
   EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddStringifyZeros) {
   Op* zero = new Op(0);
   Add* test = new Add(zero, zero);
   EXPECT_EQ(test->stringify(), "0 + 0");
}

#endif //__ADD_TEST_H__
