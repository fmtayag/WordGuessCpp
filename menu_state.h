#include "context.h"
// --------------------
#pragma once
class MenuState: public State {
    private:
        Context* m_Context;

    public:
        MenuState(Context* context);
        void Display();
        void Update();
        void GetInput(bool& running);
};
