#include "../src/box.cpp"
#include <gtest/gtest.h>

TEST(GetHeightTest, GetsHeight) {
	int height = 10;
	Box b(height, 5, '*');
	ASSERT_EQ(height, b.getHeight());
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
