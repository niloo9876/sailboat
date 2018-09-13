#include "SailBot.h"
#include "gtest/gtest.h"


TEST(BoundTo180Test, Negative) {
    EXPECT_TRUE(IsAngleBetween(-90,-180,110));
    EXPECT_FALSE(IsAngleBetween(-90,-180,80));
}
TEST(BoundTo180Test, Negative) {
    EXPECT_EQ (-90, BoundTo180(270));
}
TEST(BoundTo180Test, Positive) {
    EXPECT_EQ (-90, BoundTo180(-450));
}
TEST(BoundTo180Test, Exact) {
    EXPECT_EQ (-180, BoundTo180(180));
    EXPECT_EQ (-180, BoundTo180(-180));
    EXPECT_EQ (0, BoundTo180(360));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
