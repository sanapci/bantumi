#include "bantumi/board/Player.hpp"

namespace bantumi {
namespace board {

Player::Player(Number id) : id_(id) {
  bowls_.reserve(NUMBER_OF_BOWLS);
  for (USHORT i = 0; i < NUMBER_OF_BOWLS; ++i) {
    bowls_.push_back(i);
  }
}

} // namespace board
} // namespace bantumi