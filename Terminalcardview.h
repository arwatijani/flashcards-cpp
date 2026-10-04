#ifndef TERMINALCARDVIEW_H
#define TERMINALCARDVIEW_H

#include "CardView.h"

class TerminalCardView : public CardView {//TerminalCardView erbt von CardView
public:
    void showText(string text);//Zeigt einen Text im Terminal

    void showOptions(vector<string> options);//Zeigt Antwortmöglichkeiten

    void showInputField();//Fordert eine Eingabe an

    void showFeedback(bool correct);//Zeigt richtig/falsch

    void clear();
};

#endif
