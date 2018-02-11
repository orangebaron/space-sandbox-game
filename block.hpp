#ifndef BLOCK_HPP
#define BLOCK_HPP

#include "basic_types.hpp"
#include <array>
using std::array;

struct block {
  point location;
  angle rotation;
  point velocity;
  angle angularVelocity;
  array<block*,4> joined;
  skinId skin;
  code internalCode;
  energy energyStored;
};

#endif
