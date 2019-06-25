#include <iostream>
#include "Schachbrett.h"

int main() {

    Schachbrett schachbrett{};

    for (const auto& zeile : schachbrett.springer_verbindungen_) {
        for (int i : zeile) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << schachbrett.abs_to_pt(62)[0] << " " << schachbrett.abs_to_pt(62)[1];

    // Springer Start: 62 bzw. (6|7)


    return 0;
}