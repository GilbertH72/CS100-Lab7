#ifndef __RAND_TEST_H__
#define __RAND_TEST_H__

#include "gtest/gtest.h"
#include "../header/rand.h"

TEST(RandTest, RandEvaluateNonZero) {
   Rand* test = new Rand();
   EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, RandStringifyNonZero) {
   Rand* test = new Rand();
   EXPECT_EQ(test->stringify(), "86");
}

TEST(RandTest, RandEvalutateLT101) {
   Rand* test = new Rand();
   EXPECT_LT(test->evaluate(), 101);
}

TEST(RandTest, RandEvaluateGTNegOne) {
   Rand* test = new Rand();
   EXPECT_GT(test->evaluate(), -1);
}

TEST(RandTest, RandStringNot101) {
   Rand* test = new Rand();
   std::string result = "101";
   EXPECT_NE(test->stringify(), result);
}

#endif // __RAND_TEST_H__
