#include <iostream>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"


MenuState::MenuState(Context* context) {
    m_Context = context;
}

void MenuState::Handle() {
    char choice;

    std::cout << "Word Guess in C++\n";
    std::cout << "by zyenapz\n";
    std::cout << "------------------\n";
    std::cout << "1. Play\n";
    std::cout << "2. Exit\n";
    std::cout << "> Select: ";
    std::cin >> choice;

    switch(choice) {
        case '1':
            m_Context->SetState(new PlayState(m_Context));
            break;
        case '2':
            m_Context->isExiting = true;
            break;
        default:
            std::cout << "That's not a valid option.\n";
            break;
    }
}