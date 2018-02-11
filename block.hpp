#ifndef BLOCK_HPP
#define BLOCK_HPP

#include "basic_types.hpp"
#include <array>
using std::array;

struct block {
  point location;
  angle rotation;
  array<block*,4> joined;
  skinId skin;
  code internalCode;
  joule energyStored;
  kilogram mass;
  ~block();
};

#endif
