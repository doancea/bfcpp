#include "../src/box.cpp"
#include <string>
#include <gtest/gtest.h>

TEST(GetHeightTest, GetsHeight) {
	int height = 10;
	Box b(height, 5, '*');
	ASSERT_EQ(height, b.getHeight());
}

TEST(FirstRowTest, TestsFirstRowOutput) {
	int width = 5;
	char c = '*';
	Box b(10, width, c);
	EXPECT_EQ(std::string(width, c), b.getRow(1)); 
}

TEST(LastRowTest, TestsLastRowOutput) {
	int height = 10, width = 5;
	char c = '*';
	Box b(height, width, c);
	EXPECT_EQ(std::string(width, c), b.getRow(height));
}

TEST(BoxEmptyTest, TestsMidRowsContainBlanks) {
	int height = 10, width = 5, i = 2;
	char c = '*';
	Box b(height, width, c);
	for(i; i < height; i++) {
		EXPECT_NE(std::string(width, c), b.getRow(i));
	}
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
