#pragma once

class State {
    public:
        virtual void Display() = 0;
        virtual void Update() = 0;
        virtual void GetInput() = 0;
};