#include <iostream>

#include "Deck.h"
#include "SingleChoiceCard.h"
#include "FillInCard.h"
#include "TextCard.h"
#include "TerminalCardView.h"

using namespace std;

int main() {

    Deck deck("Programmieren 2");

    /*
        SINGLE CHOICE 1
    */

    vector<string> options1;// Optionen für erste Karte


    options1.push_back("1");
    options1.push_back("2");
    options1.push_back("3");
    options1.push_back("4");

    deck.addCard(  // Fügt eine neue Karte zum Deck hinzu

        new SingleChoiceCard(

            "Wie viele Bytes hat ein Float?",

            options1,

            3
            )
        );

    /*
        SINGLE CHOICE 2 // Optionen für zweite Karte
    */

    vector<string> options2;

    options2.push_back("for");
    options2.push_back("do-while");
    options2.push_back("if");
    options2.push_back("while");

    deck.addCard(

        new SingleChoiceCard(

            "Was ist keine gueltige Schleife?",

            options2,

            2
            )
        );

    /*
        FILL IN 1
    */

    vector<string> fillAnswers1; // Antworten für FillInCard


    fillAnswers1.push_back("int");

    fillAnswers1.push_back("a + b");

    deck.addCard(

        new FillInCard(

            "Vervollstaendigen Sie:\n___ a, b;\nreturn ___;",

            fillAnswers1, // Übergibt richtige Antworten

            ','
            )
        );

    /*
        FILL IN 2
    */

    vector<string> fillAnswers2;  // Antworten für zweite FillInCard

    fillAnswers2.push_back(":"); // Richtige Antwort = :

    deck.addCard(

        new FillInCard(

            "Welches Zeichen wird fuer Vererbung verwendet?",

            fillAnswers2,

            ','
            )
        );

    /*
        TEXT CARD 1
    */

    deck.addCard(  // Fügt TextCard hinzu

        new TextCard(

            "Die Standards C++11 und C++23 stehen fuer die Erscheinungsjahre."
            )
        );

    /*
        TEXT CARD 2
    */

    deck.addCard(

        new TextCard(

            "Ein Destruktor wird automatisch aufgerufen."
            )
        );

    TerminalCardView view;

    vector<Card*>& cards = deck.getCards();

    for (int i = 0; i < cards.size(); i++) {

        view.clear();  // Macht Leerzeilen im Terminal

        cards[i]->render(view);

        view.showInputField();

        string input;

        getline(cin, input); // Liest komplette Eingabe


        bool correct;

        correct = cards[i]->checkAnswer(input);

        view.showFeedback(correct);
    }

    return 0;
}
