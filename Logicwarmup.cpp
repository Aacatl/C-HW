#include <iostream>
#include <string>

int main()
{
  int cats = 3, dogs = 4, friends = 5;
  
  
  if(!(cats < dogs) && friends == 5)
  {
      std::cout << "True" << std:: endl;
  }
  else
  {
      std::cout << "False";
  }
  
  return 0;
}
