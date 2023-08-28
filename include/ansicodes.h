// ANSI Code constants for terminal programs.>
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
};

#endif // ANSICODES_H
