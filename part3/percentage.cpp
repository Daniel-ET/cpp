#include <iostream>

using namespace std;

int main()
{
   float sum, s1, s2, s3, s4, s5, s6, s7, grade;
 
   cout << "Calculate percentage \n" << endl;

   cout << "Insert the marks of 7 subjects: \n" << endl;
   cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7;

   sum = s1+s2+s3+s4+s5+s6+s7;

   grade = (sum/7);

   cout << "Your final grade percentage is: " << grade << "%" << endl;

   return 0;
}
