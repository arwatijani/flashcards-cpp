#ifndef DECK_H
#define DECK_H

#include "Card.h"

#include <vector>

using namespace std;

class Deck {
private:
    string title;

    vector<Card*> cards;// Speichert alle Karten

public:
    Deck(string title);

    ~Deck(); // Destruktor

    void addCard(Card* card);// Fügt Karte hinzu


    vector<Card*>& getCards();// Gibt alle Karten zurück
};

#endif
