#include <iostream>

using namespace std;

int main()
{
   int principal;
   float rate, period, simple;

   cout << "Simple Interest Calculator: " << endl;

   cout << "Insert principal amount: " << endl;
   cin >> principal;

   cout << "Insert interest rate: " << endl;
   cin >> rate;

   cout << "Insert the period (in years): " << endl;
   cin >> period;

   simple = (principal* rate * period)/100;

   cout << "\n The total simple interest  = " << simple << endl;

   return 0;
   
}
