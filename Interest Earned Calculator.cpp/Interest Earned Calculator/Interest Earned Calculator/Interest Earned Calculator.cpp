// Interest Earned Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chantell Jenkins
// Interest Earned Calculator
// October 5, 2026
// This program calculates the interest earned on a principal amount over a specified period of time, given an annual interest rate and the number of times that interest is compounded per year.

#include <iostream>
#include <cmath>
using  namespace std;
int main()
{
    std::cout << "Interest Earned Calculator" << std::endl;
    double principal;
    double interestRate;
    int timesCompounded;
    std::cout << "Enter the starting principal: ";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (as a percentage): ";
    std::cin >> interestRate;
    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> timesCompounded;
	interestRate = interestRate / 100; // Convert percentage to decimal
    double finalAmount = principal * pow(1 + interestRate / timesCompounded, timesCompounded);
    double interestEarned = finalAmount - principal;
    std::cout << "Starting principal : " << principal << std::endl;
    std::cout << "Annual interest rate : " << interestRate << std::endl;
    std::cout << "Times compounded : " << timesCompounded << std::endl;
    std::cout << "Final amount : " << finalAmount << std::endl;
    std::cout << "Interest earned : " << interestEarned << std::endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
