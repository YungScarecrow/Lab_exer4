#include <iostream>
using namespace std;
int main ()
{
	int num = 25;
	int *turo;
	
	turo = &num;
	
	cout << *turo << endl;
	
	return 0;
}
