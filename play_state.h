#include "context.h"
// -------------------
#pragma once
class PlayState: public State {
    private:
        Context* m_Context;
    public:
        PlayState(Context* context);
        void Display();
        void Update();
        void GetInput();
};