// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
  Cage* cage = new Cage();
  EXPECT_EQ(false, cage->isLight());
}

