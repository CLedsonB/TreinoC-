#include <iostream>


using namespace std;

int main()
{
	int a[3];
	cout << sizeof(a) << " -> array" << endl;
	cout << sizeof(a) / sizeof(int) << " -> und." << endl;
}