// game.hpp

#pragma once
#include <cstdlib>
#include <ctime>

int generateRandomNumber(int min, int max) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return min + std::rand() % (max - min + 1);
}
