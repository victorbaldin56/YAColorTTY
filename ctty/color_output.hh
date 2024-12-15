#pragma once

#include <string>

namespace ctty {

enum class Attribute {
  kReset = 0,
  kBold   = 1,
};

enum class Color {
  kReset   = 0,
  kBlack   = 30,
  kRed     = 31,
  kGreen   = 32,
  kYellow  = 33,
  kMagenta = 35,
  kCyan    = 36,
  kWhite   = 37,
};

inline std::string setAttr(Attribute attr = Attribute::kReset,
                           Color color = Color::kReset) {
  return "\x1b[" + std::to_string(static_cast<int>(attr)) + ";"
              + std::to_string(static_cast<int>(color)) + "m";
}

inline std::string resetAttr() { return setAttr(); }

} // namespace ctty
