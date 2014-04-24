#include "../src/oval.cpp"
#include <string>
#include <gtest/gtest.h>

TEST(GetHeightTest, GetsHeight) {
	int height = 10;
	Oval o(height);
	ASSERT_EQ(height, o.getHeight());
}

TEST(GetOvalWidth, GetsOvalComputedWidth) {
	Oval o(10);
	ASSERT_EQ(5, o.getWidth());	
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
