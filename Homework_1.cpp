#include<iostream>
using namespace std;
int main()
{
	float ThiBaths,dollars,Euro;
	dollars = 30.737;
	Euro    = 34.92;
	cout << " ThiBaths is " ;
	cin  >> ThiBaths;
	cout << " *** Exchange Rate ***" << endl;
	cout <<  ThiBaths  << " ThiBaths is " <<  ThiBaths/dollars << "dollars" << endl;
	cout <<  ThiBaths  << " ThiBaths is " <<  ThiBaths/Euro    << "Euro   " << endl;
    return (0);
}
