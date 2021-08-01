#include "source.h"

namespace sv {

void Source::Draw() {
  werase(w_);
  // test
  mvwprintw(w_, 0, 0, inst_ ? inst_->getFileName().c_str() : "Beep!");
}

void Source::UIChar(int ch) {}

bool Source::TransferPending() { return false; }

} // namespace sv