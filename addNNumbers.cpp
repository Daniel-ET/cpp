# include <iostream>

using namespace std;

int main()
{
	int x, y, z, sum;
	cout << "Adding N Numbers \n" << endl;

	cout << "Please choose amount of numbers to add: " << endl;
	cin >> x;

	cout << "Please insert " << x << " number(s) only: " << endl;

	for(y=1; y<=x; y++)
	{
		cin >> z;
		sum = sum + z;
	}

	cout << "The result is: " << sum << endl;

	return 0;
}
