#ifndef __SUB_TEST_H__
#define __SUB_TEST_H__

#include "gtest/gtest.h"
#include "../header/op.h"
#include "../header/sub.h"
#include "../header/add.h"

TEST(SubTest, SubEvaluateNonZero) {
   Op* op1 = new Op(5);
   Op* op2 = new Op(2);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->evaluate(), 3);
   delete test;
}

TEST(SubTest, SubStringifyNonZero) {
   Op* op1 = new Op(5);
   Op* op2 = new Op(2);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->stringify(), "5 - 2");
   delete test;
}

TEST(SubTest, SubEvaluateZero) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(4);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->evaluate(), 0);
   delete test;
}

TEST(SubTest, SubStringifyZero) {
   Op* op1 = new Op(4);
   Op* op2 = new Op(4);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->stringify(), "4 - 4");
   delete test;
}

TEST(SubTest, SubEvaluateNegativeNonZero) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(9);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->evaluate(), -2);
   delete test;
}

TEST(SubTest, SubStringifyNegativeNonZero) {
   Op* op1 = new Op(7);
   Op* op2 = new Op(9);
   Sub* test = new Sub(op1, op2);
   EXPECT_EQ(test->stringify(), "7 - 9");
   delete test;
}

TEST(SubTest, SubEvaluateAddNonZero) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(8);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(10);
   Sub* test = new Sub(add1, op3);
   EXPECT_EQ(test->evaluate(), 4);
   delete test;
}

TEST(SubTest, SubStringifyAddNonZero) {
   Op* op1 = new Op(6);
   Op* op2 = new Op(8);
   Add* add1 = new Add(op1, op2);
   Op* op3 = new Op(10);
   Sub* test = new Sub(add1, op3);
   EXPECT_EQ(test->stringify(), "6 + 8 - 10");
   delete test;
}


#endif // __SUB_TEST_H__
