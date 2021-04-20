// Copyright 2021 Ivan Razzhivin
#include "train.h"

Cage::Cage(bool _lamp)
  : lamp(_lamp), left(nullptr), right(nullptr) {
}

void Cage::on() {
  lamp = true;
}
void Cage::off() {
  lamp = false;
}

bool Cage::isLight() const {
  return lamp;
}

Train::Train()
  : begin(nullptr), end(nullptr) {
}

void Train::addCage(Cage* _cage) {
  if (nullptr == begin) {
    _cage->right = _cage;
    _cage->left = _cage;
    begin = _cage;
    end = _cage;
  } else {
    end->left = _cage;
    _cage->right = end;
    _cage->left = begin;
    begin->right = _cage;
    end = _cage;
  }
}

void Train::createCages(unsigned int _length) {
  for (unsigned int i = 0; i < _length; i++) {
    addCage(new Cage(std::rand() % 2));
  }
}

unsigned int Train::countLength() {
  Cage* curr = begin;
  begin->on();
  for (unsigned int step = 1; ; step++) {
    for (unsigned int i = 0; i < step; i++) {
      curr = curr->left;
      curr->off();
    }
    for (unsigned int i = 0; i < step; i++) {
      curr = curr->right;
    }
    if (!curr->isLight())
      return step;
  }
}

void Train::print() {
  Cage* curr = begin;
  for (unsigned int step = 1; ; step++) {
    std::cout << "Cage #" << step
    << ", lamp is " << (curr->isLight() ? "on\n" : "off\n");
    curr = curr->left;
    if (curr == begin)
      return;
  }
}
