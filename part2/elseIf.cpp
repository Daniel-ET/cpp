#include <iostream> 

using namespace std;

int main()
{
	int grade;
	cout << "else if statement \n" << endl;

	cout << "Insert grade: " << endl;
	cin >> grade;

	if (grade > 100)
	{
		cout << "Incorrect grade" << endl;
	}
	else if (grade >= 80)
	{
		cout << "Grade: A" << endl;
	}
	else if (grade >= 70)
	{
		cout << "Grade: B" << endl;
	}
	else if (grade >= 50)
	{
		cout << "Grade: C" << endl;
	}
	else if (grade >= 40)
	{
		cout << "Grade: D" << endl;
	}
	else
	{
		cout << "Grade: Fail :(" << endl;
	}

	return 0;
}
