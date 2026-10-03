#include "Card.h"

Card::Card(string question) {
    this->question = question;
    score = 0;                       //Startwert des Scores
}

Card::~Card() {
}

int Card::getScore() {
    return score;
}











