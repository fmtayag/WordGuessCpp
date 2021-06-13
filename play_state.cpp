#include <iostream>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"

PlayState::PlayState(Context* context) {
    m_Context = context;
}

void PlayState::Display() {
    std::cout << "I am the play state.\n";
}

void PlayState::Update() {
    // The update function
}

void PlayState::GetInput() {
    // The input function
}
