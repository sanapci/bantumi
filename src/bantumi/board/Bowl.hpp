#pragma once

#include "common/type_definitions.hpp"

#define NUMBER_OF_BOWLS 7
#define STARTING_BEAN_COUNT 4

namespace bantumi {
namespace board {

class Bowl {
public:
  Bowl(CUSHORT id);

  CUSHORT GetId();

  USHORT CountBeans();
  USHORT GetAllBeans();
  USHORT AddBean();

private:
  CUSHORT id_;
  USHORT beans_;
};

} // namespace board
} // namespace bantumi