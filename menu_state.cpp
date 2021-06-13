#include <iostream>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"


MenuState::MenuState(Context* context) {
    m_Context = context;
}

void MenuState::Display() {
    std::cout << "Word Guess in C++\n";
    std::cout << "by zyenapz\n";
    std::cout << "------------------\n";
    std::cout << "1. Play\n";
    std::cout << "2. Exit\n";
    std::cout << "> Select: ";
}

void MenuState::GetInput(bool& running) {
    char choice;

    std::cin >> choice;

    switch(choice) {
        case '1':
            // TODO
            break;
        case '2':
            running = false;
            break;
        default:
            std::cout << "That's not a valid option.\n";
            break;
    }
}

void MenuState::Update() {
    // The update function
}