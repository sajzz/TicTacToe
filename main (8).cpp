
#include <iostream>
#include "TTT.h"
using namespace std;

int main()
{
    makeTTT();
    printTTT();
    int cont = 0;
    while(!cont)
    {
    run();
    cout << "want to continue" << endl << "0 - Yes" << endl << "1 - No" << endl;
    cin >> cont;
    }
    
    return 0;
}
