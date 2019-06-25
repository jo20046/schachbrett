//
// Created by Enthöfer Joshua on 2019-06-14.
//

#include "Schachbrett.h"

Schachbrett::Schachbrett() {
    for (int i = 0, feldname = 0; i < 8; i++) {
        std::vector<int> zeile;
        for (int j = 0; j < 8; j++, feldname++) {
            zeile.push_back(feldname);
        }
        schachbrett_.push_back(zeile);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            add_springer_verbindungen(j, i);
        }
    }
}

bool Schachbrett::springer_erreicht_feld(int von, int nach) {
    std::vector<int> ptvon = abs_to_pt(von);
    std::vector<int> ptnach = abs_to_pt(nach);
    int von_x = ptvon[0];
    int von_y = ptvon[1];
    int nach_x = ptnach[0];
    int nach_y = ptnach[1];
    return (von_x - 1 == nach_x && von_y - 2 == nach_y) || (von_x + 1 == nach_x && von_y - 2 == nach_y) ||
           (von_x + 2 == nach_x && von_y - 1 == nach_y) || (von_x + 2 == nach_x && von_y + 1 == nach_y) ||
           (von_x + 1 == nach_x && von_y + 2 == nach_y) || (von_x - 1 == nach_x && von_y + 2 == nach_y) ||
           (von_x - 2 == nach_x && von_y + 1 == nach_y) || (von_x - 2 == nach_x && von_y - 1 == nach_y);
}

void Schachbrett::add_springer_verbindungen(int x, int y) {
    int h[] = {-1, 1, 2, 2, 1, -1, -2, -2};
    int v[] = {-2, -2, -1, 1, 2, 2, 1, -1};
    for (int i = 0; i < 8; i++) {
        int ziel_x = x + h[i];
        int ziel_y = y + v[i];
        if (ziel_x >= 0 && ziel_x <= 7 && ziel_y >= 0 && ziel_y <= 7) {
            if (x < ziel_x && y < ziel_y) {
                springer_verbindungen_.push_back({schachbrett_[x][y], schachbrett_[ziel_x][ziel_y]});
            }
        }
    }
}

std::vector<std::vector<int>> Schachbrett::springer_verbindungen() {
    std::vector<std::vector<int>> result;
    for (int i = 0; i < 8; i++) {
        std::vector<int> zeile;
        for (int j = 0; j < 8; j++) {

        }
    }
}

std::vector<int> Schachbrett::abs_to_pt(int abs) {
    int x = abs % 8;
    int y = abs / 8;
    return {x, y};
}
