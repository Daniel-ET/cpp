#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Even/Odd numbers \n" << endl;

    cout << "Insert any number: " << endl;
    cin >> x;

    if (x%2 == 0)
    {
        cout << x << " Is an even number" << endl;
    }
    else
    {
        cout << x << " Is an odd number" << endl;
    }
    
    return 0;

}
