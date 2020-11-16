#include <iostream>
#include <cstring>
using namespace std;
string replace(string s1, string s2, string s3)
{
	while (true) 
	{
	int index = s1.find(s2);
		if (index != -1) 
		{
			s1 = s1.replace(index, s3.length() - 1, s3);
		}
		else 
		{
			return s1;
		}
	}
}
int main()
{
	string stringOne;
	string stringTwo;
	string stringThree;

	getline(cin, stringOne);
	cin >> stringTwo;
	cin >> stringThree;
	cout << replace(stringOne, stringTwo, stringThree);
}