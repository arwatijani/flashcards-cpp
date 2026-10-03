TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Card.cpp \
        Deck.cpp \
        FillInCard.cpp \
        SingleChoiceCard.cpp \
        TerminalCardView.cpp \
        TextCard.cpp \
        main.cpp

HEADERS += \
    Card.h \
    CardView.h \
    Deck.h \
    FillInCard.h \
    SingleChoiceCard.h \
    TerminalCardView.h \
    TextCard.h
