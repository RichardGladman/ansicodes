// ANSI Code constants for terminal programs.
// SPDX-FileCopyrightText: 2023 Richard Gladman <richard.gladman@thefifthcontinent.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef ANSICODES_H
#define ANSICODES_H

#include <string>

/**
 * @todo write docs
 */
class ANSICodes
{
public:
    static const std::string BLACK;
    static const std::string RED;
    static const std::string GREEN;
    static const std::string YELLOW;
    static const std::string BLUE;
    static const std::string MAGENTA;
    static const std::string CYAN;
    static const std::string WHITE;
    static const std::string DEFAULT_COLOUR;

    static const std::string BLACK_BACKGROUND;
    static const std::string RED_BACKGROUND;
    static const std::string GREEN_BACKGROUND;
    static const std::string YELLOW_BACKGROUND;
    static const std::string BLUE_BACKGROUND;
    static const std::string MAGENTA_BACKGROUND;
    static const std::string CYAN_BACKGROUND;
    static const std::string WHITE_BACKGROUND;
    static const std::string DEFAULT_BACKGROUND;

    static const std::string BLACK_BRIGHT;
    static const std::string RED_BRIGHT;
    static const std::string GREEN_BRIGHT;
    static const std::string YELLOW_BRIGHT;
    static const std::string BLUE_BRIGHT;
    static const std::string MAGENTA_BRIGHT;
    static const std::string CYAN_BRIGHT;
    static const std::string WHITE_BRIGHT;
    static const std::string DEFAULT_BRIGHT;

    static const std::string BLACK_BACKGROUND_BRIGHT;
    static const std::string RED_BACKGROUND_BRIGHT;
    static const std::string GREEN_BACKGROUND_BRIGHT;
    static const std::string YELLOW_BACKGROUND_BRIGHT;
    static const std::string BLUE_BACKGROUND_BRIGHT;
    static const std::string MAGENTA_BACKGROUND_BRIGHT;
    static const std::string CYAN_BACKGROUND_BRIGHT;
    static const std::string WHITE_BACKGROUND_BRIGHT;
    static const std::string DEFAULT_BACKGROUND_BRIGHT;

    static const std::string BOLD;
    static const std::string BOLD_OFF;
    static const std::string DIM;
    static const std::string DIM_OFF;
    static const std::string UNDERLINE;
    static const std::string UNDERLINE_OFF;
    static const std::string BLINK;
    static const std::string BLINK_OFF;
    static const std::string REVERSE;
    static const std::string REVERSE_OFF;
    static const std::string HIDE;
    static const std::string HIDE_OFF;

    static const std::string RESET;
};

#endif // ANSICODES_H
