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
