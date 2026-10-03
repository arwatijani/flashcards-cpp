#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

class CardView;

class Card {
protected:
    string question;
    int score;

public:
    Card(string question);

    virtual ~Card();

    virtual bool checkAnswer(string input) = 0;    //0 weil Die Methode hat keine Implementierung,uberpruft die antwort

    virtual void render(CardView& view) = 0;      //zeigt die carten an

    int getScore();
};

#endif
