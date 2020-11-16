

#include <iostream>
#include <string>

using namespace std;



int main()
{
    char choiceTwo; 
    int typeOfSandwich = 0;
    int price = 0;
    int total = 0;

    do 
    {
        cout << "What kind of snadwich would you like (1)Ham (2)Veggie (3)Rat: " << "\n";
        cin >> typeOfSandwich;
        if(typeOfSandwich == 1)
        {
            price = 4;
        }
        if (typeOfSandwich == 2) 
        {
            price = 3;
        }
        if(typeOfSandwich == 3)
        {
            price = 2;
        }
        total += price;
        cout << "Would you like more sandwiches(y/n): " << "\n";
        cin >> choiceTwo;

    } while (choiceTwo == 'y' || choiceTwo == 'Y');
    cout << "Your total is: $" << total << "\n";
    return 0;

}

