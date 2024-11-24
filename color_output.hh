#pragma once

#ifndef _WIN_32
#include <unistd.h>
#define YA_COLOR_TTY_ISATTY isatty
#else
#include <io.h>
#define YA_COLOR_TTY_ISATTY _isatty
#endif // _WIN_32

#include <iostream>
#include <string>

namespace ctty {

enum class FontType {
  kNormal = 0,
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

} // namespace ctty
