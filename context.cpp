#include "context.h"
#include "menu_state.h"

Context::Context() {
    this->m_State = new MenuState(this);
    isExiting = false;
}

void Context::Handle() {
    this->m_State->Handle();
}

void Context::SetState(State* state) {
    delete this->m_State;
    this->m_State = state;
}