#ifndef FILLINCARD_H
#define FILLINCARD_H

#include "Card.h"

#include <vector>

using namespace std;

class FillInCard : public Card {         //Lückentextkarte
private:
    vector<string> answers;            // speichert richtigen antworten bsp int,a+b

    char delimiter;                  //Speichert das Trennzeichen ,

    string normalize(string s);    //hilfsmethode macht alles klein entfernt Leerzeichen

    vector<string> parseInput(string input);    //Teilt die Eingabe in mehrere Teile

public:
    FillInCard(
        string question,
        vector<string> answers,
        char delimiter
        );

    bool checkAnswer(string input);

    void render(CardView& view);
};

#endif
