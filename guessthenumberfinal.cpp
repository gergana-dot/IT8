#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n, x;
    cout << "guess from (x=):"; // beginning number
    cin >> x;
    cout <<  "to (n=):"; // end number
    cin >> n;
    while ( n<=0 || x<=0 || n<x){
        cout<< "invalid data ";
        cout<< "enter other min number ";
        cin >> x;
        cout<< "enter other max number ";
        cin >> n;
    } // invalid numbers
    n=n-x; // n becomes the gap between the beginning and end instead of the end
    srand(time(0));
    int num = rand() % (n+1) + x; // generates random number between n and x including n and x
    cout << "Guess My Number Game\n\n"; // game starts
    int guess = 0; // guess is 0
    int y=0; // number of tries is 0
    while (guess != num) { // while the person hasn't guessed the game will continue
        cout << "Enter a guess between x and n : ";
        cin >> guess;
        if (guess==0){
            break;
        } // stops on 0
        if (guess > num){
                y++; // counts tries
                cout << "Too high!\n\n";
            } // gives instructions
        else if (guess < num){
                y++;
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in "; // the game stops when the number is guessed
            cout << y+1;
            cout << " tries"; // how many tries the user has got it in
        }
    }

    return 0;
}
