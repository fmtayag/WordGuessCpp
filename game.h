#pragma once
class State;

class Game {
public:
    enum State {
        ST_PLAYING,
        ST_MENU
    };
    
    Game();
    virtual ~Game();

    void Display();
    void Update();
    void GetInput();

    void SetState(State state);

private:
    State* m_gState;
}