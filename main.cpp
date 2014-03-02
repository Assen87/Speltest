#include <iostream>
#include "function.h"

void printhello();

int main()
{
  printhello();

  std::cout << "Two times five is: " << my_multiply(2,5) << std::endl;
  
  if (my_multiply(2,5) > 1)
  {
	  std::cout << "It's larger then 1" << std::endl;
  }


  std::cin.ignore();
  return 0;
}

void printhello()
{
  std::cout << "Ich habe rom rom und cole cole!" << std::endl;
}
