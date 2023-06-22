#include "bantumi/board/Bowl.hpp"

namespace bantumi {
namespace board {

Bowl::Bowl(CUSHORT id) : id_(id), beans_(STARTING_BEAN_COUNT) {
  if (!id) {
    beans_ = 0;
  }
}

CUSHORT Bowl::GetId() { return id_; }

USHORT Bowl::CountBeans() { return beans_; }

USHORT Bowl::GetAllBeans() {
  USHORT total = beans_;
  beans_ = 0;
  return total;
}

USHORT Bowl::AddBean() { return ++beans_; }

} // namespace board
} // namespace bantumi