#include <iostream>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"

PlayState::PlayState(Context* context) {
    m_Context = context;
}

void PlayState::Handle() {
    std::cout << "There are 10 words to guess. Get ready!\n";
}
