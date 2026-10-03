#include "SingleChoiceCard.h"
#include "CardView.h"

#include <iostream>

using namespace std;

SingleChoiceCard::SingleChoiceCard(
    string question,       //Parameter des Konstruktors
    vector<string> options,
    int correctIndex
    )
    : Card(question) {        //Initialisierungsliste wird der Konstruktor der Basisklasse aufgerufen

    this->options = options;
    this->correctIndex = correctIndex;
}

bool SingleChoiceCard::checkAnswer(string input) {        //Prüft die Antwort des Benutzers

    try {//Versucht den Code auszuführen

        int answer = stoi(input);//string to int

        answer = answer - 1;

        if (answer == correctIndex) {

            score++;

            return true;
        }

    } catch (...) {
    }

    score--;

    return false;
}

void SingleChoiceCard::render(CardView& view) {

    view.showText(question);

    view.showOptions(options);
}
