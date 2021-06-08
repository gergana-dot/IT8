#include <iostream>
using namespace std;

int main()
{
 int godina;
 cout << "type in a year : ";
 cin >> godina;
 while (godina<=0) {
    cout << "invalid; type in a year : ";
    cin >> godina;
 }

 if (godina%400==0 or godina%4==0 and godina%100!=0){
    cout << "the year IS a leap year";
 }
 else cout << "the year ISN'T a leap year";


    return 0;
}
