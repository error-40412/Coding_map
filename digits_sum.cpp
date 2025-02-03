/*
A C++ program to find the sum of individual digits of a positive integer.
*/

// First import iostream
#include<iostream>

// Then create main fuction with int type and return 0
int main()
{
    // initialise the int for variable
    int num , rem , sum;

    //take user input
    std::cout << "Enter a number\n";
    std::cin >> num;

    // main logic : so basically we have store a unit digit and add to sum till num is less than 0
    // first initiate value of sum to 0 or else it will take garbage value
    sum = 0;
    while(num>0)
    {
        // remainder
        rem = num % 10;
        //sum
        sum = sum + rem;
        //remove unit digit
        num = num / 10;
    }
    // display sum
    std::cout << "The sum of digits are as follow: "<<sum;
    return 0;
}