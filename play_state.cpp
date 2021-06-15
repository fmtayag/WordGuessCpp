#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include "context.h"
#include "menu_state.h"
#include "play_state.h"

PlayState::PlayState(Context *context)
{
    m_Context = context;

    // Initialize currentQuestion and answer
    currentQuestion = 0;
    score = 0;
    answer = "";

    // Initialize words list
    words  = {
            {"banana", "a long yellow fruit"},
            {"apple", "a round red fruit"},
            {"book", "a collection of pages bound together with covers"},
            {"bottle", "a small container used for storing liquid"},
            {"coat", "a garment worn outdoors, especially during cold weathers"}
        };

    // Shuffle words
    std::srand(std::time(0));
    random_shuffle(words.begin(), words.end());
}

void PlayState::Handle()
{
    if (currentQuestion < words.size())
    {
        // Display question and get answer
        std::cout << currentQuestion + 1 << ". What is " << words[currentQuestion][1] << "?\n";
        std::cout << "> Answer: ";
        std::cin >> answer;

        // transform answer to lowercase
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

        // Check answer
        if (answer == words[currentQuestion][0])
        {
            std::cout << "Correct!";
            score++;
        }
        else {
            std::cout << "Wrong!";
        }

        // Increment answer
        currentQuestion++;
    }
    else {
        std::cout << "Game over!" << "\n";
        std::cout << "Your correctly guessed: " << score << " out of " << words.size() << " words.\n";
        m_Context->SetState(new MenuState(m_Context));
    }
}
