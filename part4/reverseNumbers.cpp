#include <iostream> 

using namespace std;

int main()
{
    int n, reversed=0, remainder;
    
    cout << "Enter an integer: " << endl;
    cin >> n;

    while (n != 0)
    {
	remainder = n % 10; // remainder when n/10 
	reversed = reversed*10 + remainder;
	n /= 10;  //decrease value of n 10 fold
    }
    
    cout << "Reversed Number = " << reversed << endl;

   return 0;
}
