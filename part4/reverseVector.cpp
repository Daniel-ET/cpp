#include <bits/stdc++.h>

using namespace std;

int main()
{
    //vector
    vector<int> a = {1, 45, 54, 71, 76, 12};

    //print vector
    cout << "Original Vector: " << endl;
    for(int i=0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    //reverse
    reverse(a.begin(), a.end());

    //print
    cout << "Reversed Vector: " << endl;
    for (int i = 0; i < a.size(); i++)
	cout << a[i] << " ";

    return 0; 

}
