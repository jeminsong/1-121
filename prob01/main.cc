#include <iomanip>
#include <iostream>

int main() {
  double tax = 0.075;
  double tip = 0.0;
  double subtotal = 0.0;
  std::cout << "Please input meal cost: ";
  std::cin >> subtotal;
  std::cout << "Please input tip percentage: ";
  std::cin >> tip;
  std::cout << "\n"
            << "Restaurant Bill"
            << "\n";
  std::cout << "===================="
            << "\n";
  std::cout << std::fixed << std::setprecision(2) << "Subtotal: $" << subtotal
            << "\n";
  std::cout << std::fixed << std::setprecision(2) << "Taxes: $"
            << tax * subtotal << "\n";
  std::cout << std::fixed << std::setprecision(2) << "Tip: $"
            << (tip / 100.0) * subtotal << "\n";
  std::cout << "===================="
            << "\n";
  std::cout << std::fixed << std::setprecision(2) << "Total: $"
            << subtotal + (tax * subtotal) + ((tip / 100) * subtotal) << "\n";
  return 0;
}