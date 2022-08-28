#include <iostream>
#include <algorithm>

// using reverse in STL
// syntax ---> reverse(start_index, last_index);

using namespace std;

int main()
{
    // Get the array
    int arr[] = { 23, 56, 79, 54, 98, 16};
 
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Print the array
    cout << "Original Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    // Reverse the array
    reverse(arr, arr + n);
 
    // Print the reversed array
    cout << "\nReversed Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
