#include "Tester.hpp"

TEST(Nominal, HelloBackTest) {
    HelloWorld::Tester tester;
    tester.testSetResponse();
}

TEST(Nominal, ThrottleTest) {
    HelloWorld::Tester tester;
    tester.testThrottle();
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
