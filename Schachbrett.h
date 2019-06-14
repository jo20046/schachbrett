//
// Created by Enthöfer Joshua on 2019-06-14.
//

#ifndef SCHACHBRETT_SCHACHBRETT_H
#define SCHACHBRETT_SCHACHBRETT_H


#include <vector>

class Schachbrett {

public:
    Schachbrett();
    bool springer_erreicht_feld(int von_x, int von_y, int nach_x, int nach_y);

private:
    std::vector<std::vector<int>> schachbrett_;

};


#endif //SCHACHBRETT_SCHACHBRETT_H
