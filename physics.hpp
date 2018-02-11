#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include "block.hpp"
#include <vector>
using std::vector;

class body {
  vector<block*> blocks;
  kilogram mass;
  point velocity;
  angle angularVelocity;
};
class system {
  vector<body> bodies;
};

#endif
