# include <bits/stdc++.h>
using namespace std;

// method 1 - Euclidean Algorithm
// HCF of two numbers doesn't change if smaller number subtracted from bigger number

int getHCF(int num1, int num2)
{
    if (num1 == 0)
        return num2;

    if  (num2 == 0)
        return num1;

    //base case
    if (num1 == num2)
	return num1;

    if (num1 > num2)
	return getHCF(num1 - num2, num1);

    if (num2 > num1)
	return getHCF(num1, num2 - num1);
}

int main()
{
    int num1, num2, HCF = 1;

    cout << "Insert first number: " << endl;
    cin >> num1;

    cout << "Insert second number: " << endl;
    cin >> num2;

    HCF = getHCF(num1, num2);

    cout << "HCF of " << num1 <<" and "<< num2 <<" is "<< HCF << "\n" << endl;

    return 0;
}
