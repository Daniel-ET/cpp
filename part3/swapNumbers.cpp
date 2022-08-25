# include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    
    cout << "How to swap Numbers using three variables \n" << endl;

    cout << "insert first number: " << endl;
    cin >> x;

    cout << "Insert second number: " << endl;
    cin >> y;

    cout << "Numbers before swap: " << x << " and " << y << endl; 

    z = x;
    x = y;
    y = z;

    cout << "Numbers after swap: " << x << " and " << y << endl;


    return 0;
}
