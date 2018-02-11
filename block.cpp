#include "block.hpp"

block::~block() {
  delete &joined;
  delete &internalCode;
}
