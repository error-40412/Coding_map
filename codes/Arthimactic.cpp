//  A C++ program to generate the first n terms of the sequence

// first import libraries
#include<iostream>

// now main program
int main()
{
    // take user input as no of elements,inital input and difference and initaliase the variables as i for iteration 
    int first, no_term, diff, result, i;
    std::cout<<"Enter first element\n";
    std::cin>>first;
    std::cout<<"Enter difference between elements\n";
    std::cin>>diff;
    std::cout<<"Enter no of elements to be printed\n";
    std::cin>>no_term;

    // Main logic
    // first take inital number and print it 
    std::cout<<first<<" ";
    // add diff then replace first with result and then print it
    // and repeat it till no of terms

    // as we have printed first number already therefore use no_term-1 condition
    for(i=0; i<no_term-1; i++)
    {
        result = first + diff;
        std::cout<<result<<" ";
        first = result;

    }
    return 0;

}