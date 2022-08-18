#include <iostream>

using namespace std;

int main()
{
	char STR1[200];
	cout << "string Input \n" << endl;

	cout << "insert string input: " << endl;

	cin.getline(STR1,200);

	cout << "You entered: " << STR1 << endl;

	return 0;

}
