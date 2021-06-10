#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); //seed random number generator
    int rightnum = rand() % 9000 + 1000; // random number between 1000 and 9999

    int guess = 0;

	int rmdigit1 = rightnum / 1000;
	int rmdigit2 = rightnum / 100 % 10;
	int rmdigit3 = rightnum /10 % 10;
	int rmdigit4 = rightnum % 10;

    while (rmdigit1==rmdigit2 || rmdigit1==rmdigit3 || rmdigit1==rmdigit4 || rmdigit2==rmdigit3 || rmdigit2==rmdigit4 || rmdigit4==rmdigit3)
    {
         rightnum = rand() % 9000 + 1000;
         rmdigit1 = rightnum / 1000;
	     rmdigit2 = rightnum / 100 % 10;
	     rmdigit3 = rightnum /10 % 10;
	     rmdigit4 = rightnum % 10;
    }

	do
    {
    cout << "Enter your number (four different digits): ";
	cin >> guess;

	int guessdigit1 = guess / 1000;
	int guessdigit2 = guess / 100 % 10;
	int guessdigit3 = guess / 10 % 10;
	int guessdigit4 = guess % 10;

    int B=0;
    int C=0;

    if(guessdigit1==rmdigit1) { B++; }
	else if(guessdigit1==rmdigit2 || guessdigit1==rmdigit3 ||
            guessdigit1==rmdigit4) { C++; }

    if(guessdigit2==rmdigit2) { B++; }
	else if(guessdigit2==rmdigit1 || guessdigit2==rmdigit3 ||
            guessdigit2==rmdigit4) { C++; }

    if(guessdigit3==rmdigit3) { B++; }
	else if(guessdigit3==rmdigit2 || guessdigit3==rmdigit1 ||
            guessdigit3==rmdigit4) { C++; }

    if(guessdigit4==rmdigit4) { B++; }
	else if(guessdigit4==rmdigit2 || guessdigit4==rmdigit3 ||
            guessdigit4==rmdigit1) { C++; }

    cout << "B=" << B << " ";
    cout << "C=" << C << "\n";
    }
    while (guess!=rightnum);
    if (guess==rightnum) cout<<"you guessed the number!!";



	return 0;
}
