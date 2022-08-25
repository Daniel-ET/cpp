#include <iostream>

using namespace std;

int main()
{
    int x, y, sum;
    
    cout << "Add individual digits \n" << endl;

    cout << "insert some numbers: " << endl;
    cin >> x;

    do
    {
        y = x%10;

        sum = sum + y;

	x = x/10;

    }while(x != 0);

    cout << "The result is: " << sum << endl;

    return 0;

}

