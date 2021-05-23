#ifndef __OP_TEST_H__
#define __OP_TEST_H__

#include "gtest/gtest.h"
#include "../header/op.h"

TEST(OpTest, OpEvaluateNonZero) {
   Op* test = new Op(8);
   EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringifyNonZero) {
   Op* test = new Op(24);
   EXPECT_EQ(test->stringify(), "24");
}

TEST(OpTest, OpEvaluateNegativeInts) {
   Op* test = new Op(-5);
   EXPECT_EQ(test->evaluate(), -5);
}

TEST(OpTest, OpStringifyNegativeInts) {
   Op* test = new Op(-47);
   EXPECT_EQ(test->stringify(), "-47");
}

TEST(OpTest, OpEvaluateNonZeroDouble) {
   Op* test = new Op(62.7);
   EXPECT_EQ(test->evaluate(), 62.7);
}

TEST(OpTest, OpStringifyNonZeroDouble) {
   Op* test = new Op(24.7);
   EXPECT_EQ(test->stringify(), "24.7");
}

TEST(OpTest, OpEvaluateNegativeDouble) {
   Op* test = new Op(-3.9);
   EXPECT_EQ(test->evaluate(), -3.9);
}

TEST(OpTest, OpStringifyNegativeDouble) {
   Op* test = new Op(-56.2);
   EXPECT_EQ(test->stringify(), "-56.2");
}

TEST(OpTest, OpEvaluateZero) {
   Op* test = new Op(0);
   EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringifyZero) {
   Op* test = new Op(0);
   EXPECT_EQ(test->stringify(), "0");
}

#endif //__OP_TEST_H__
