#include "../src/oval.cpp"
#include <string>
#include <gtest/gtest.h>

TEST(GetHeightTest, GetsHeight) {
	int height = 10;
	Oval o(height, 5, '*');
	ASSERT_EQ(height, o.getHeight());
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
