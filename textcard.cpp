#include "TextCard.h"
#include "CardView.h"

using namespace std;

TextCard::TextCard(string question)

    : Card(question)               // Ruft Konstruktor der Basisklasse auf
{
}

bool TextCard::checkAnswer(string input)

{
    if (input == "1")
    {
        score++;
        return true;
    }

    score--;
    return false;
}

void TextCard::render(CardView& view)
    // Zeigt die Karte an
{
    vector<string> options;        // Speichert die Optionen

    options.push_back("War mir bekannt.");


    options.push_back("War mir nicht bekannt.");


    view.showText(question);

    view.showOptions(options);
}
