#include "Deck.h"

Deck::Deck(string title) {

    this->title = title;
}

Deck::~Deck() {

    for (int i = 0; i < cards.size(); i++) {

        delete cards[i];// Löscht die Karte aus dem Speicher
    }
}

void Deck::addCard(Card* card) {// Fügt eine Karte hinzu

    cards.push_back(card);// Fügt Karte zum Vector hinzu
}

vector<Card*>& Deck::getCards() { // Gibt alle Karten zurück

    return cards;
}
