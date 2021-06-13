#include "context.h"
// --------------------
#pragma once
class MenuState: public State {
    private:
        Context* m_Context;

    public:
        MenuState(Context* context);
        void Handle();
};
