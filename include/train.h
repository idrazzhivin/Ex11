// Copyright 2021 Ivan Razzhivin
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <iostream>
#include <random>

class Cage {
 private:
    bool lamp;

 public:
    Cage* left;
    Cage* right;
    explicit Cage(bool _lamp = false);
    void on();
    void off();
    bool isLight() const;
};

class Train {
 private:
    Cage* begin;
    Cage* end;
 public:
    Train();
    void addCage(Cage* _cage);
    void createCages(unsigned int _length);
    unsigned int countLength();
    void print();
};


#endif  // INCLUDE_TRAIN_H_
