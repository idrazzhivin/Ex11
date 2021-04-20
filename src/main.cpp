// Copyright 2021
#include <iostream>
#include <string>

#include <random>
#include <ctime>
#include "train.h"

int main() {
  srand(time(0));
  Train* train1 = new Train;
  train1->createCages(5); //set len to 5
  train1->print(); 
  std::cout << "The length of train is "
  << train1->countLength() << std::endl;  // 10
  return 0;
}
