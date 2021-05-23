#ifndef __POW_TEST_H__
#define __POW_TEST_H__

#include "gtest/gtest.h"
#include "../header/pow.h"
#include "../header/op.h"

TEST(PowTest, PowEvaluatePositiveInts) {
   Op* op1 = new Op(5);
   Op* op2 = new Op(4);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 625);
}

TEST(PowTest, PowStringifyPositiveInts) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(10);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->stringify(), "4 ** 10");
}

TEST(PowTest, PowEvaluateNegativeInts) {
   Op* op1 = new Op(2);
   Op* op2 = new Op(-1);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 0.50);
}

TEST(PowTest, PowStringifyNegativeInts) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(-1);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->stringify(), "4 ** -1");
}

TEST(PowTest, PowEvaluateToTheZero) {
   Op* op1 = new Op(12);
   Op* op2 = new Op(0);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowStringifyToTheZero) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(0);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->stringify(), "6 ** 0");
}

#endif //__POW_TEST_H__
