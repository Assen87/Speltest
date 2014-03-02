#include <iostream>

void printhello();

int main()
{
  printhello();

  std::cin.ignore();
  return 0;
}

void printhello()
{
  std::cout << "Ich habe alcohol getrunken!" << std::endl;
}
