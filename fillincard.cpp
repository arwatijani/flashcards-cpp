#include "FillInCard.h"
#include "CardView.h"

#include <algorithm>
#include <cctype>

using namespace std;

FillInCard::FillInCard(
    string question,
    vector<string> answers,
    char delimiter
    )
    : Card(question) {//Ruft den Konstruktor der Basisklasse auf.

    this->answers = answers;//Speichert die Antworten

    this->delimiter = delimiter;// Speichert das Trennzeichen
}

string FillInCard::normalize(string s) {// Normalisiert den String

    transform(
        s.begin(),// Start des Strings
        s.end(),// Ende des Strings
        s.begin(),// Speichert Ergebnis wieder in s
        ::tolower // Macht alle Buchstaben klein
        );

    s.erase(
        remove_if(
            s.begin(),
            s.end(),
            ::isspace // Entfernt Leerzeichen
            ),
        s.end()
        );

    return s; // Gibt den bearbeiteten String zurück
}

vector<string> FillInCard::parseInput(string input) {// Teilt die Eingabe in Teile

    vector<string> result;// Speichert die einzelnen Teile

    string current;// Speichert aktuellen Teil

    for (int i = 0; i < input.length(); i++) {// Geht durch jedes Zeichen

        if (input[i] == delimiter) {// Prüft auf Trennzeichen

            if (!current.empty()) {// Prüft ob current nicht leer ist

                result.push_back(current);// Fügt current zum Vector hinzu

                current.clear(); // Leert current
            }

        } else {

            current += input[i];// Fügt Zeichen zu current hinzu
        }
    }

    if (!current.empty()) {// Prüft den letzten Teil

        result.push_back(current);// Fügt letzten Teil hinzu
    }

    return result;//Gibt den Vector zurück
}

bool FillInCard::checkAnswer(string input) { // Prüft die Antwort

    vector<string> userAnswers; // Speichert Benutzerantworten


    userAnswers = parseInput(input);// Zerlegt die Eingabe

    if (userAnswers.size() != answers.size()) {// Prüft gleiche Anzahl

        score--; // Score verringern

        return false;
    }

    for (int i = 0; i < answers.size(); i++) {// Vergleicht alle Antworten

        if (
            normalize(userAnswers[i])
            !=
            normalize(answers[i])
            ) {

            score--;

            return false;
        }
    }

    score++;// Score erhöhen

    return true;// Antwort richtig
}

void FillInCard::render(CardView& view) {// Zeigt die Karte an

    view.showText(question);// Zeigt die Frage
}
