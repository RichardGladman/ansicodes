# AnsiCodes

A C++ Library that provides constants for the Ansi terminal codes.

## Installation

Run the following commands

```
git clone https://github.com/RichardGladman/ansicodes.git
cd ansicodes
mkdir build
cd build
cmake ..
cmake
sudo make install
```

## Usage

Using the ansicodes library is as simple as intalling it.

CMakeLists.txt:

```
cmake_minimum_required(VERSION 3.27)

project(YOUR_PROJECT_NAME)

find_package(ansicodes REQUIRED)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE /usr/local/include/ansicodes)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ansicodes::ansicodes_lib)

install(TARGETS ${CMAKE_PROJECT_NAME} RUNTIME DESTINATION bin)
```

Example C++ Code:

``` c++
#include <iostream>
#include <ansicodes.h>

int main(int argc, char **argv) {
    std::cout << ANSICodes::RED << "Red Text" << std::endl;
    std::cout << ANSICodes::GREEN << "Green Text" << ANSICodes::DEFAULT_COLOUR << std::endl;
    std::cout << ANSICodes::UNDERLINE << "Underline Text" << ANSICodes::UNDERLINE_OFF << std::endl;
    return 0;
}
```
