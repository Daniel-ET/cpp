# include <bits/stdc++.h>
using namespace std;

// method - ? and modulo

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a%b);
}

int main()
{
  int num1, num2, HCF;

  cout << "Insert first number: " << endl;
  cin >> num1;

  cout << "Insert second number: " << endl;
  cin >> num2;

  HCF = getHCF(num1, num2);

  cout << " HCF of " << num1 << " and " << num2 << " is " << HCF << "\n" << endl;

  return 0;
}
