#include <iostream>

using namespace std;

int main()
{
	int x = 87, y = 40;

	cout << "Nested Switch \n" << endl;

	switch(x) //if first switch not met second one not tried
	{
	case 87:
		cout << "This is the first switch case" << endl;

		switch(y)
		{
		case 40:
			cout << "This is the second switch case" << endl;
		}
	}
	return 0;
}
