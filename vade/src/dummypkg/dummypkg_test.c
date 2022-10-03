#include "dummypkg.h"
#include "test/test.h"

TEST_F(dummypkg, Mock) {
    TEST_LOG("Testing dummypkg Mock..\n");
    EXPECT_EQ(42, dummypkg_Mock());
}
