#include <iostream>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"


MenuState::MenuState(Context* context) {
    m_Context = context;
}

void MenuState::Display() {
    std::cout << "I am the menu state.\n";
    if(true) {
        m_Context->SetState(new PlayState(m_Context));

    } 
}

void MenuState::Update() {
    // The update function
}

void MenuState::GetInput() {
    // The input function
}