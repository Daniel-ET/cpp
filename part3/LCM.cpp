# include <iostream>
using namespace std;

// LCM of two integers a and b is the smallest positive integer that is divisible by both a and b

int main()
{
   int n1, n2, max;

   cout << "Enter first number: " << endl;
   cin >> n1;

   cout << "Enter second number: " << endl;
   cin >> n2;

   // max value between n1 and n2 is stored in max
   max = (n1 > n2) ? n1 : n2;

   do
   {
	if (max % n1 == 0 && max % n2 == 0)
        {
	    cout << "LCM = " << max << endl;
	    break;
        }
	else
	    max++;
   }while (true);

   return 0;
} 

