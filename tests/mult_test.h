#ifndef __MULT_TEST_H__
#define __MULT_TEST_H__

#include "gtest/gtest.h"
#include "../header/mult.h"
#include "../header/add.h"
#include "../header/op.h"

TEST(MultTest, MultEvaluatePositiveInts) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(7);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 42);
   delete test;
}

TEST(MultTest, MultStringifyPositiveInts) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(10);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "4 * 10");
   delete test;
}

TEST(MultTest, MultEvaluateNegativeInts) {
   Op* op1 = new Op(-6);
   Op* op2 = new Op(-7);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 42);
   delete test;
}

TEST(MultTest, MultStringifyNegativeInts) {
   Op* op1 = new Op(-4);
   Op* op2 = new Op(-10);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "-4 * -10");
   delete test;
}

TEST(MultTest, MultEvaluatePositiveDoubles) {
   Op* op1 = new Op(6.3);
   Op* op2 = new Op(7.8);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 49.14);
   delete test;
}

TEST(MultTest, MultStringifyPositiveDoubles) {
   Op* op1 = new Op(4.5);
   Op* op2 = new Op(10.2);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "4.5 * 10.2");
   delete test;
}

TEST(MultTest, MultEvaluateNegativeDoubles) {
   Op* op1 = new Op(-6.3);
   Op* op2 = new Op(-7.8);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->evaluate(), 49.14);
   delete test;
}

TEST(MultTest, MultStringifyNegativeDoubles) {
   Op* op1 = new Op(-4.5);
   Op* op2 = new Op(-10.2);
   Mult* test = new Mult(op1, op2);
   EXPECT_EQ(test->stringify(), "-4.5 * -10.2");
   delete test;
}

TEST(MultTest, MultEvaluateFromAdd) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(3);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(16);
   Mult* test = new Mult(add1, op3);
   EXPECT_EQ(test->evaluate(), 160);
   delete test;
}

TEST(MultTest, MultStringifyThroughAdd) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(3);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(16);
   Mult* test = new Mult(add1, op3);
   EXPECT_EQ(test->stringify(), "7 + 3 * 16");
   delete test;
}

TEST(MultTest, MultEvaluateZeros) {
   Op* zero_1 = new Op(0);
   Op* zero_2 = new Op(0);
   Mult* test = new Mult(zero_1, zero_2);
   EXPECT_EQ(test->evaluate(), 0);
   delete test;
}

TEST(MultTest, MultStringifyZeros) {
   Op* zero_1 = new Op(0);
   Op* zero_2 = new Op(0);
   Mult* test = new Mult(zero_1, zero_2);
   EXPECT_EQ(test->stringify(), "0 * 0");
   delete test;
}

#endif //__MULT_TEST_H__
