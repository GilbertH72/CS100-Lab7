#ifndef __RAND_TEST_H__
#define __RAND_TEST_H__

#include "gtest/gtest.h"
#include "../header/rand.h"

TEST(RandTest, RandEvaluateNonZero) {
   Rand* test = new Rand();
   EXPECT_LT(test->evaluate(), 100);
   delete test;
}

TEST(RandTest, RandStringifyNonZero) {
   Rand* test = new Rand();
   EXPECT_EQ(test->stringify(), "86");
   delete test;
}

TEST(RandTest, RandEvalutateLT101) {
   Rand* test = new Rand();
   EXPECT_LT(test->evaluate(), 101);
   delete test;
}

TEST(RandTest, RandEvaluateGTNegOne) {
   Rand* test = new Rand();
   EXPECT_GT(test->evaluate(), -1);
   delete test;
}

TEST(RandTest, RandStringNot101) {
   Rand* test = new Rand();
   std::string result = "101";
   EXPECT_NE(test->stringify(), result);
   delete test;
}

#endif // __RAND_TEST_H__
