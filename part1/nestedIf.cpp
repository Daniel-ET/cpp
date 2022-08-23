#include <iostream>

using namespace std;

int main()
{
	int x, y;
	x = 80;
	y = 50;
	cout << "Nested if Statement \n" << endl;
	
	if (x == 80) //if first condition fails nothing is printed
	{
		cout << "The first condition has been met" << endl;
		if (y == 50)
		{
			cout << "The second condition has been met \n" << endl;
			cout << "This is a nested if statement" << endl;
		}
	}
}
