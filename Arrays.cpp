#include <iostream>
using namespace std;
int main()
{
    int arrayOne[90] = {};
    int userIndex = 0;
    int newValue = 0;
    //create an array and set it to random ints 2-9
    for (int i = 0; i < 90; i++)
    {
        arrayOne[i] = rand() % 8 + 2;
    }
    //print the array
    for (int i = 0; i < 90; i++)
    {
        cout << arrayOne[i] << " ";
    }
    cout << endl;
    //ask for user input 
    do
    {
        cout << "What index would you like to change?" << endl;
        cin >> userIndex;
        //make sure its not out of scope
        if(userIndex < 0 ||userIndex > 90)
        {
            cout << "Please re-enter number between 0-90" << endl;
            cin >> userIndex;
        }
        //change the value at Index 
        cout << " What would you like to set its value to? " << endl;
        cin >> newValue;
        arrayOne[userIndex] = newValue;
        //reprint array
        for (int i = 0; i < 90; i++)
        {
            cout << arrayOne[i] << " ";
        }

    } while (userIndex != -1);
 
}