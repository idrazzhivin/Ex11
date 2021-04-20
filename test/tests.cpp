// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
  Cage* cage = new Cage();
  EXPECT_EQ(false, cage->isLight());
}

TEST(TrainTest, test2) {
  bool lamp = std::rand() % 2;
  Cage* cage = new Cage(lamp);
  EXPECT_EQ(lamp, cage->isLight());
}
