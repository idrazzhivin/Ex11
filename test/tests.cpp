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

TEST(TrainTest, test3) {
  bool lamp = std::rand() % 2;
  Cage* cage = new Cage(lamp);
  cage->on();
  EXPECT_EQ(true, cage->isLight());
}

TEST(TrainTest, test4) {
  bool lamp = std::rand() % 2;
  Cage* cage = new Cage(lamp);
  cage->off();
  EXPECT_EQ(false, cage->isLight());
}

TEST(TrainTest, test5) {
  Train* train = new Train;
  train->createCages(25);
  EXPECT_EQ(25, train->countLength());
}



