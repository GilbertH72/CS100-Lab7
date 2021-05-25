#ifndef __DIV_TEST_H__
#define __DIV_TEST_H__

#include "gtest/gtest.h"
#include "../header/op.h"
#include "../header/div.h"

TEST(DivTest, DivEvaluateNonZero) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(3);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->evaluate(), 2);
   delete test;
}

TEST(DivTest, DivStringifyNonZero) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(3);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->stringify(), "6 / 3");
   delete test;
}

TEST(DivTest, DivEvaluateZero) {
   Op* op1 = new Op(0);
   Op* op2 = new Op(1);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->evaluate(), 0);
   delete test;
}

TEST(DivTest, DivStringifyZero) {
   Op* op1 = new Op(0);
   Op* op2 = new Op(1);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->stringify(), "0 / 1");
   delete test;
}

TEST(DivTest, DivEvaluateNegativeNonZero) {
   Op* op1 = new Op(-8);
   Op* op2 = new Op(2);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->evaluate(), -4);
   delete test;
}

TEST(DivTest, DivStringifyNegativeNonZero) {
   Op* op1 = new Op(-8);
   Op* op2 = new Op(2);
   Div* test = new Div(op1, op2);
   EXPECT_EQ(test->stringify(), "-8 / 2");
   delete test;
}

#endif // __DIV_TEST_H__
