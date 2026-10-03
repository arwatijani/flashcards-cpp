#include <iostream>

#include "TerminalCardView.h"

using namespace std;

void TerminalCardView::showText(string text) {

    cout << text << endl;
}

void TerminalCardView::showOptions(vector<string> options) {

    cout << "Ihre Auswahlmoeglichkeiten:" << endl;

    for (int i = 0; i < options.size(); i++) {

        cout << i + 1 << ": " << options[i] << endl;
    }
}

void TerminalCardView::showInputField() { //fordet Benutzereingabe an

    cout << "Bitte Ihre Eingabe:" << endl;
}

void TerminalCardView::showFeedback(bool correct) {

    if (correct) {

        cout << "Ihre Antwort war richtig." << endl;

    } else {

        cout << "Ihre Antwort war falsch." << endl;
    }
}

void TerminalCardView::clear() {

    cout << endl;
    cout << endl;
}
