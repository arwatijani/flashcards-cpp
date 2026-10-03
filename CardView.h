#ifndef CARDVIEW_H
#define CARDVIEW_H

#include <string>
#include <vector>

    using namespace std;

class CardView {
public:
    virtual ~CardView() {
    }

    virtual void showText(string text) = 0;

    virtual void showOptions(vector<string> options) = 0;

    virtual void showInputField() = 0;//Fordert Benutzereingabe an

    virtual void showFeedback(bool correct) = 0;

    virtual void clear() = 0;//Löscht die Anzeige
};

#endif









