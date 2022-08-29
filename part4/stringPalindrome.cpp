# include <iostream>
# include <string.h>

using namespace std;

int main()
{
  char string[25];
  int i, length, flag=0;

  cout << "Enter a string: " << endl;
  cin >> string;

  length = strlen(string);
 
  for(i=0; i < length; i++)
  {
  if(string[i] != string[length-i-1])
  {
  flag = 1;
  break;
  }
  }
  if(flag)
  {
    cout << string << " is NOT a palindrome" << endl;
  }
  else
  {
    cout << string << " is a palindrome" << endl;
  }

  return 0;
}
