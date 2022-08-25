#include <iostream>

using namespace std;

int main()
{
    float base, height, area;

    cout << "Area of a Triangle \n" << endl;

    cout << "Insert height of triangle: " << endl;
    cin >> height;

    cout << "Insert base of triangle: " << endl;
    cin >> base;

    area = 0.5*base*height;

    cout << "The area of the given triangle is: " << area << endl;

    return 0;
}
