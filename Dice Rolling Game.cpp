#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int die1, die2;
    char choice;

    do
    {
        // Roll two dice
        die1 = (rand() % 6) + 1;
        die2 = (rand() % 6) + 1;

        cout << "You rolled:" << endl;
        cout << "Die 1: " << die1 << endl;
        cout << "Die 2: " << die2 << endl;
        cout << "Total: " << die1 + die2 << endl;

        cout << endl;
        cout << "Roll again? :";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}


