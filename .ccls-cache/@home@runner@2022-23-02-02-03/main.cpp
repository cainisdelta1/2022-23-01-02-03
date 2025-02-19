#include <iostream>

int main()
{
  std::cout<<"Hello, World..." << std::endl;

  int counter = 0;
  while (counter < 100) 
    {
      std::cout <<counter << std::endl;
      counter++;
    }
  
  std::cout <<std::endl << std::endl << std::endl;
  
  counter = 0;
  do {
    std::cout <<counter << std::endl;
    counter++;
  }while(counter > 100); // condition checked after run once

  std::cout <<std::endl << std::endl << std::endl;
  
  // initializer; conditional; incrementer
  for (int i = 0; i < 100; i ++)
  {
    std::cout << i << std::endl;      
  }

  
  return 0;
}