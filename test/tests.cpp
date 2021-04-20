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

TEST(TrainTest, test6) {
  Train* train = new Train;
  train->createCages(3);
  EXPECT_EQ(3, train->countLength());
}

TEST(TrainTest, test7) {
  Train* train = new Train;
  train->createCages(1);
  EXPECT_EQ(1, train->countLength());
}

TEST(TrainTest, test8) {
  Train* train = new Train;
  train->createCages(2);
  EXPECT_EQ(2, train->countLength());
}

TEST(TrainTest, test9) {
  Train* train = new Train;
  unsigned int length = std::rand() % 500 + 1;
  train->createCages(length);
  EXPECT_EQ(length, train->countLength());
}

TEST(TrainTest, test10) {
  Train* train = new Train;
  unsigned int length = std::rand() % 500 + 1;
  train->createCages(length);
  EXPECT_EQ(length, train->countLength());
}

TEST(TrainTest, test11) {
  Train* train = new Train;
  unsigned int length = std::rand() % 500 + 1;
  train->createCages(length);
  EXPECT_EQ(length, train->countLength());
}

TEST(TrainTest, test12) {
  Train* train = new Train;
  unsigned int length = std::rand() % 500 + 1;
  train->createCages(length);
  EXPECT_EQ(length, train->countLength());
}

