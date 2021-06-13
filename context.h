#include "state.h"
// ------------------
#pragma once

class Context {
    private:
        State* m_State;

    public:
        Context();

        void Handle();

        void SetState(State* state);

        bool isExiting;
};