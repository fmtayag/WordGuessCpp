#include "context.h"
#include "menu_state.h"

Context::Context() {
    this->m_State = new MenuState(this);
}

void Context::Display() {
    this->m_State->Display();
}

void Context::Update() {
    this->m_State->Update();
}

void Context::GetInput() {
    this->m_State->GetInput();
}

void Context::SetState(State* state) {
    delete this->m_State;
    this->m_State = state;
}