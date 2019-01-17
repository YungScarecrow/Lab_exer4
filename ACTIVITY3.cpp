#include <iostream>
using namespace std;

int main()
{
   int num[5];
   cout << "Enter ka ng limang namber : " << endl;

   for(int i = 0; i < 5; ++i)
      cin >> num[i];

   cout << "Eto yung nilagay mo papi : " << endl;
   for(int i = 0; i < 5; ++i)
      cout << *(num + i) << endl;

   return 0;
}
