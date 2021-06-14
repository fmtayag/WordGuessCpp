#include "context.h"
#include <vector>
#include <string>
#include <iterator>
using namespace std;
// -------------------
#pragma once
class PlayState : public State
{
    private:
        Context* m_Context;

        vector< vector<string> > words = {
            {"banana", "a long yellow fruit"},
            {"apple", "a round red fruit"},
            {"book", "a collection of pages bound together with covers"}
        };
        vector< vector<string> >::const_iterator iter;
        int currentQuestion;
        int score;
        string answer;

    public:
        PlayState(Context* context);
        void Handle();
};