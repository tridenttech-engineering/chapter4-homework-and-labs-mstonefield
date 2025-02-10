// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  // For formatting output

using namespace std;

int main() {
    // Variable declarations
    double beginningBalance = 0.0, totalDeposits = 0.0, totalWithdrawals = 0.0;
    double endingBalance = 0.0;

    // Input: Getting user values
    cout << "Enter the beginning balance: ";
    cin >> beginningBalance;

    cout << "Enter the total deposits: ";
    cin >> totalDeposits;

    cout << "Enter the total withdrawals: ";
    cin >> totalWithdrawals;

    // Processing: Calculate ending balance
    endingBalance = beginningBalance + totalDeposits - totalWithdrawals;

    // Output: Display the ending balance
    cout << fixed << setprecision(2);
    cout << "Ending balance: $" << endingBalance << endl;

    return 0;

} // end of main function