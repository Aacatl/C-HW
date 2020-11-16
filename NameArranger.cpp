#include <iostream>
using namespace std;
int main()
{
	char firstName[15];
	char lastName[15];
	char middleName[15];
	char fullName[60];

	//Organizing in Normal order and asking for input

	cin >> firstName;
	cin >> middleName;
	cin >> lastName;
	
	int index = 0;
	for (int i = 0; lastName[i] != '\0'; i++)
		fullName[index++] = last[i];
	fullName[index++] = ',';
	fullName[index++] = '';
	for (int i = 0; first[i]!= '\0'; i++)
		fullName[index++] = firstName[i];
	fullName[index++] = '';
	fullName[index++] = middleName[0];
	fullName[index++] = ',';
	fullName[index++] = '\0';
	cout << fullName;




}
