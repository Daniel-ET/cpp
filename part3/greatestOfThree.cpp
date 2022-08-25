#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "Greatest of three numbers: " << endl;

    cout << "Insert second number: " << endl;
    cin >> x;
    
    cout << "Insert second number: " << endl;
    cin >> y;
    
    cout << "Insert third number: " << endl;
    cin >> z;

    if (x >= y && x >= z) 
    {
        cout << x << " is the greatest number" << endl;
    }   
    
    if (y >= y && y >= z) 
    {
        cout << y << " is the greatest number" << endl;
    }   

    if (z >= x && z >= y) 
    {
        cout << z << " is the greatest number" << endl;
    }

    return 0;
}
