#ifndef SINGLECHOICECARD_H
#define SINGLECHOICECARD_H

#include "Card.h"

#include <vector>

using namespace std;

class SingleChoiceCard : public Card {
private:
    vector<string> options;         //speichern antwortmoglichkeiten (if,while,for
    int correctIndex;              //speichert die richtige antwort

public:
    SingleChoiceCard(
        string question,         //Frage der Karte
        vector<string> options, //möglichen Antworten
        int correctIndex
        );

    bool checkAnswer(string input);    //Prüft die Benutzereingabe

    void render(CardView& view);      //Zeigt die Karte an
};

#endif
