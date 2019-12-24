/*
Christian Fitzgerald
Project 14: Random Number, Odd or Even
2/26/2017
Description: Write a program that generates a random number between 10 to 25.
The program then shows the random number generated, and informs the user if
that number is odd or even.
=== Sample Program Run =====
Test Run 1:
Generating a random number between 10 to 25: 20
The random number 20 is Even.

Test Run 2:
Generating a random number between 10 to 25: 15
The random number 15 is Odd.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int iseed = time(NULL);
    srand(iseed);
    int min = 10;
    int max = 25;
    int randomNum = min + rand() % (max-min + 1);
    cout << "Generating a random number between 10 and 25: " << randomNum << endl;
    if (randomNum % 2 == 0)
        cout << "The random number " << randomNum << " is Even.";
    else if (randomNum % 2 != 0)
        cout << "The random number " << randomNum << " is Odd.";
    return 0;
}

/*
Test Run 1:
Generating a random number between 10 and 25: 18
The random number 18 is Even.
Process returned 0 (0x0)   execution time : 0.189 s
Press any key to continue.

Test Run 2:
Generating a random number between 10 and 25: 25
The random number 25 is Odd.
Process returned 0 (0x0)   execution time : 0.202 s
Press any key to continue.
*/
