// Name: Ava Hess
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double tax = 0.0775, tip = 0.20;
  double bill;
  double charge;

  // Get the total meal charge.
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost? $";
  std::cin >> charge;

  // Calculate the tax and tip
  tax = charge * tax;
  tip = charge * tip;

  std::cout << "Tax:    $ " << tax << std::endl;
  std::cout << "Tip:    $ " << tip << std::endl;

  bill = charge + tip + tax;
  //Display the total bill of the meal
  std::cout << "Total Bill: $ " << bill << std::endl;


  return 0;
}
