#ifndef TEXTCARD_H
#define TEXTCARD_H

#include "Card.h"

using namespace std;

class TextCard : public Card {
public:
    TextCard(string question);

    bool checkAnswer(string input);

    void render(CardView& view);
};

#endif
