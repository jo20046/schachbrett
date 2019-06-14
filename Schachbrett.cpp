//
// Created by Enthöfer Joshua on 2019-06-14.
//

#include "Schachbrett.h"

Schachbrett::Schachbrett() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            schachbrett_[i][j] = 0;
        }
    }
}

bool Schachbrett::springer_erreicht_feld(int von_x, int von_y, int nach_x, int nach_y) {
    return (von_x - 1 == nach_x && von_y - 2 == nach_y) || (von_x + 1 == nach_x && von_y - 2 == nach_y) ||
           (von_x + 2 == nach_x && von_y - 1 == nach_y) || (von_x + 2 == nach_x && von_y + 1 == nach_y) ||
           (von_x + 1 == nach_x && von_y + 2 == nach_y) || (von_x - 1 == nach_x && von_y + 2 == nach_y) ||
           (von_x - 2 == nach_x && von_y + 1 == nach_y) || (von_x - 2 == nach_x && von_y - 1 == nach_y);
}
