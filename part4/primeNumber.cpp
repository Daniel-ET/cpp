#include <iostream>

using namespace std;

int main()
{
  int number, count =0;
  cout << "Enter number: " << endl;
  cin >> number;

  if(number == 0)
  {
    cout << number << " is not a prime number" << endl;
  }
  else
  {
    for(int i=2; i<number; i++)
    if (number % i == 0)
    count++;
  }
  if (count>1)
  cout << number <<" is NOT a prime number" << endl;
  else
  cout << number << "  is a prime number." << endl;
  return 0;

}
