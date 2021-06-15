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

        vector< vector<string> > words;
        vector< vector<string> >::const_iterator iter;
        int currentQuestion;
        int score;
        string answer;

    public:
        PlayState(Context* context);
        void Handle();
};