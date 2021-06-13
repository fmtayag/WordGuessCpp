#include <iostream>
#include "context.h"

///////////////////////////////

int main()
{
    Context context1;
    
    bool running = true;
    while(running) {
        context1.Display();
        context1.GetInput(running);
        context1.Update();
        std::cout << "\n\n";
    }

    return 0;
}