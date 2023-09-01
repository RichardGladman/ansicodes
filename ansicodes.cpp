// ANSI Code constants for terminal programs.
// SPDX-FileCopyrightText: 2023 Richard Gladman <richard.gladman@thefifthcontinent.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#include <ansicodes.h>

const std::string ANSICodes::BLACK = "\033[30m";
const std::string ANSICodes::RED = "\033[31m";
const std::string ANSICodes::GREEN = "\033[32m";
const std::string ANSICodes::YELLOW = "\033[33m";
const std::string ANSICodes::BLUE = "\033[34m";
const std::string ANSICodes::MAGENTA = "\033[35m";
const std::string ANSICodes::CYAN = "\033[36m";
const std::string ANSICodes::WHITE = "\033[37m";
const std::string ANSICodes::DEFAULT_COLOUR = "\033[39m";

const std::string ANSICodes::BLACK_BACKGROUND = "\033[40m";
const std::string ANSICodes::RED_BACKGROUND = "\033[41m";
const std::string ANSICodes::GREEN_BACKGROUND = "\033[42m";
const std::string ANSICodes::YELLOW_BACKGROUND = "\033[43m";
const std::string ANSICodes::BLUE_BACKGROUND = "\033[44m";
const std::string ANSICodes::MAGENTA_BACKGROUND = "\033[45m";
const std::string ANSICodes::CYAN_BACKGROUND = "\033[46m";
const std::string ANSICodes::WHITE_BACKGROUND = "\033[47m";
const std::string ANSICodes::DEFAULT_BACKGROUND = "\033[49m";

const std::string ANSICodes::BLACK_BRIGHT = "\033[90m";
const std::string ANSICodes::RED_BRIGHT = "\033[91m";
const std::string ANSICodes::GREEN_BRIGHT = "\033[92m";
const std::string ANSICodes::YELLOW_BRIGHT = "\033[93m";
const std::string ANSICodes::BLUE_BRIGHT = "\033[94m";
const std::string ANSICodes::MAGENTA_BRIGHT = "\033[95m";
const std::string ANSICodes::CYAN_BRIGHT = "\033[96m";
const std::string ANSICodes::WHITE_BRIGHT = "\033[97m";
const std::string ANSICodes::DEFAULT_BRIGHT = "\033[99m";

const std::string ANSICodes::BLACK_BACKGROUND_BRIGHT = "\033[100m";
const std::string ANSICodes::RED_BACKGROUND_BRIGHT = "\033[101m";
const std::string ANSICodes::GREEN_BACKGROUND_BRIGHT = "\033[102m";
const std::string ANSICodes::YELLOW_BACKGROUND_BRIGHT = "\033[103m";
const std::string ANSICodes::BLUE_BACKGROUND_BRIGHT = "\033[104m";
const std::string ANSICodes::MAGENTA_BACKGROUND_BRIGHT = "\033[105m";
const std::string ANSICodes::CYAN_BACKGROUND_BRIGHT = "\033[106m";
const std::string ANSICodes::WHITE_BACKGROUND_BRIGHT = "\033[107m";
const std::string ANSICodes::DEFAULT_BACKGROUND_BRIGHT = "\033[109m";

const std::string ANSICodes::BOLD = "\033[1m";
const std::string ANSICodes::BOLD_OFF = "\033[21m";
const std::string ANSICodes::DIM = "\033[2m";
const std::string ANSICodes::DIM_OFF = "\033[21m";
const std::string ANSICodes::UNDERLINE = "\033[4m";
const std::string ANSICodes::UNDERLINE_OFF = "\033[24m";
const std::string ANSICodes::BLINK = "\033[5m";
const std::string ANSICodes::BLINK_OFF = "\033[25m";
const std::string ANSICodes::REVERSE = "\033[7m";
const std::string ANSICodes::REVERSE_OFF = "\033[27m";
const std::string ANSICodes::HIDE = "\033[8m";
const std::string ANSICodes::HIDE_OFF = "\033[28m";

const std::string ANSICodes::RESET = "\033[0m";

const std::string ANSICodes::CLEAR_SCREEN = "\033[2J";
