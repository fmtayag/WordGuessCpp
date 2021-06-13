#include <iostream>
#include "context.h"

///////////////////////////////

int main()
{
    Context context1;
    context1.Handle();
    
    while(!context1.isExiting) {
 
        context1.Handle();
        std::cout << "\n\n";
    }

    return 0;
}