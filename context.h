#include "state.h"
// ------------------
#pragma once

class Context {
    private:
        State* m_State;

    public:
        Context();

        void Display();
        void Update();
        void GetInput();

        void SetState(State* state);
};