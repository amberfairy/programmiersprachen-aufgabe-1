#include <iostream>
#include <string>

double mile_to_kilometer(double meile) {
    return meile * 1.609;
}




int main()
{
  std::cout << "Geben Sie die gewuenschte Zahl an Meilen ein.\n";
  double meile;
  std::cin >> meile;
  std::cout << "Es sind ";
  std::cout << mile_to_kilometer(meile);
  std::cout << " Kilometer.\n";
  return 0;
}
