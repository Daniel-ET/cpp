#include <iostream>

using namespace std;

int main()
{
	char grade;
	cout << "Switch statement \n" << endl;

	cout << "Insert Grade A-F " << endl;
	std :: cin >> grade;

	switch (grade)
	{
		case 'A':
		cout << "Excellent result" << endl;
		break;
		
		case 'B':
		cout << "very good  result" << endl;
		break;

		case 'C':
		cout << "Average result" << endl;
		break;

		case 'D':
		cout << "Below average result" << endl;
		break;

		case 'E':
		cout << "Passed" << endl;
		break;
		
		case 'F':
		cout << "Failed" << endl;
		break;

		default:
			cout << "Invalid Grade" << endl;

	}

	return 0;
}
