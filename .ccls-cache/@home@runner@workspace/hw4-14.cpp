// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  
  // Variable declarations
  int smallPizzas, mediumPizzas, largePizzas, familyPizzas;
  int totalPizzas;
  double smallPct, mediumPct, largePct, familyPct;

  // Input: Get user input for each pizza type
  cout << "Enter the number of small pizzas sold: ";
  cin >> smallPizzas;

   cout << "Enter the number of medium pizzas sold: ";
   cin >> mediumPizzas;

  cout << "Enter the number of large pizzas sold: ";
  cin >> largePizzas;

  cout << "Enter the number of family pizzas sold: ";
  cin >> familyPizzas;

   // Processing: Calculate total pizzas sold
   totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;

   // Ensure totalPizzas is not zero to avoid division by zero
  if (totalPizzas > 0) {
     smallPct = (static_cast<double>(smallPizzas) / totalPizzas) * 100;
     mediumPct = (static_cast<double>(mediumPizzas) / totalPizzas) * 100;
     largePct = (static_cast<double>(largePizzas) / totalPizzas) * 100;
     familyPct = (static_cast<double>(familyPizzas) / totalPizzas) * 100;
   } else {
      smallPct = mediumPct = largePct = familyPct = 0.0;  // Avoid division by zero
   }

  // Output: Display results
  cout << fixed << setprecision(1);
  cout << "\nTotal pizzas sold: " << totalPizzas << endl;
  cout << "Small pizzas: " << smallPct << "%\n";
  cout << "Medium pizzas: " << mediumPct << "%\n";
  cout << "Large pizzas: " << largePct << "%\n";
  cout << "Family pizzas: " << familyPct << "%\n";

  return 0;
} // end of main function