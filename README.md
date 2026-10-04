 # Flashcards (C++)

A flashcard learning program for the terminal, written in C++17 for the university course "Programmieren 2".

## Features

- A deck of flashcards with three card types:
  - Single choice cards
  - Fill-in-the-blank cards
  - Text cards
- Each card shows itself, checks the user's answer and reports whether it was correct

## Design

- `Card` is an abstract base class with the pure virtual functions `checkAnswer()` and `render()`
- `SingleChoiceCard`, `FillInCard` and `TextCard` implement them, so the program can treat all cards the same way through `Card*` pointers (polymorphism)
- `CardView` is an abstract interface for the display (`showText`, `showOptions`, `showInputField`, `showFeedback`, `clear`); `TerminalCardView` is its terminal implementation
- `Deck` stores the cards

## How to build and run

Open `praktikum2pg2correct.pro` in Qt Creator (qmake console project, C++17) and run it, or compile with g++:

    g++ -std=c++17 Card.cpp Deck.cpp FillInCard.cpp SingleChoiceCard.cpp TerminalCardView.cpp TextCard.cpp main.cpp -o flashcards
    ./flashcards

## Example questions in the demo deck

- How many bytes does a float have?
- Which of these is not a valid loop?
- Which character is used for inheritance in C++?
