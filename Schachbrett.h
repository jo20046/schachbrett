//
// Created by Enthöfer Joshua on 2019-06-14.
//

#ifndef SCHACHBRETT_SCHACHBRETT_H
#define SCHACHBRETT_SCHACHBRETT_H


#include <vector>

class Schachbrett {

public:
    Schachbrett();
    bool springer_erreicht_feld(int von, int nach);
    void add_springer_verbindungen(int x, int y);

    std::vector<std::vector<int>> springer_verbindungen_;
    std::vector<std::vector<int>> springer_verbindungen();
    std::vector<int> abs_to_pt(int abs);

private:
    std::vector<std::vector<int>> schachbrett_;
};


#endif //SCHACHBRETT_SCHACHBRETT_H
