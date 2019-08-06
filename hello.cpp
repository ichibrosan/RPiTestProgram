#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>

int testmain()
{
  printf("Hello World Five 😀!!\n");
  return EXIT_SUCCESS;
}

TEST(MyTestSuite,first_test) {
	EXPECT_EQ(0,testmain());
}
