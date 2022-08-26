#include <iostream>

using namespace std;

int main()
{
    float gross, rate, tax, net;

    cout << "Net salary calculator \n" << endl;

    cout << "Insert gross salary: " << endl;
    cin >> gross;

    cout << "Insert tax rate: " << endl;
    cin >> rate;

    tax =  (rate/100)*gross;
    net = gross - tax;

    cout << "Your net salary is: " << net << endl;
   
    return 0;

}
