#pragma once

#include "common/type_definitions.hpp"

#include <vector>

#include "bantumi/board/Bowl.hpp"

namespace bantumi {
namespace board {

class Player {
public:
  enum class Number { One, Two };

  Player(Number id);

private:
  Number id_;
  std::vector<Bowl> bowls_;
};

} // namespace board
} // namespace bantumi