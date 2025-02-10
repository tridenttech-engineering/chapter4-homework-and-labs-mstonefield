//Advanced16.cpp
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  // For setprecision

using namespace std;

int main() {
    // Declare constant and variables
    const double increase = 1.05; // 5% increase factor
    double store1 = 0.0, store2 = 0.0, total = 0.0;
    int store1Int, store2Int, totalInt;

    // Input: Get sales values
    cout << "Enter sales for Store 1: ";
    cin >> store1;

    cout << "Enter sales for Store 2: ";
    cin >> store2;

    // Processing: Apply increase and round correctly
    store1 = store1 * increase;
    store2 = store2 * increase;
    total = store1 + store2;

    // Convert to integer cents and apply rounding
    store1Int = static_cast<int>(store1 * 100 + 0.5);
    store2Int = static_cast<int>(store2 * 100 + 0.5);
    totalInt = store1Int + store2Int;

    // Convert back to double for accurate decimal display
    cout << fixed << setprecision(2);
    cout << store1Int / 100.0 << " ---> Store 1" << endl;
    cout << store2Int / 100.0 << " ---> Store 2" << endl;
    cout << "-------------------------" << endl;
    cout << totalInt / 100.0 << " ---> Total" << endl;

    return 0;
  
}	//end of main function

//1.  Declare and initalize three int variables named store1Int, store2Int, and totalInt
//2.  Change the first assignment statement to store1Int = static_cast<int>(store1 * increase * 100 + .5);
//3.  Change the second assignment statement to store2Int = static_cast<int>(store2 * increase * 100 + .5);
//4.  Change the third assignment statement to totalInt = store1Int + store2Int;
//5.  Change store1 in the second cout statement to store1Int / 100.0
//6.  Change store2 in the third cout statement to store2Int / 100.0
//7.  Change total in the last cout statement to totalInt / 100.0
