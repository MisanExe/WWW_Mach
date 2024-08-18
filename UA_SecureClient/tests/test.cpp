#include <iostream>
#include <gtest/gtest.h>
#include "../include/mach_connect.h"

TEST(MachConnectTest, MachConnect){

    Mach::Mach_connect connectInstance("127.9.0.1", "none", "none");
    EXPECT_EQ(connectInstance.connect("a", "b", "c"), Mach::ConnectState::ABORTED);
    ASSERT_TRUE(1);
}

int main(int argc, char **argv){

    //init testing 
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}