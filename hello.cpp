#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>

double returnPi() {
	return (double)3.14;
}

int testmain()
{
	printf("Hello World Five 😀!!\n");
	printf("pi is %2.4f\n",returnPi());
	return EXIT_SUCCESS;
}

TEST(MyTestSuite,first_test) {
	EXPECT_EQ(0,testmain());
}

TEST(MyTestSuite,test_returnPi) {
	EXPECT_EQ(3.14,returnPi());
}
