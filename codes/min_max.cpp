// Write a C++ program to find both the largest and smallest number in a list of
// integers.
// so first we will assume first element to be min and check with rets of list and accordingly replace 
// with min
// and same for max

// first import lib
#include<iostream>

// main function
int main()
{
    // initialise
    int n, num[10], i, min, max;
    
    // first take value for n as n is the no of elements as in array num[10] 10 is maximum elements
    // but we will not considred all 10

    std::cout<<"Enter total no of elements\n";
    std::cin>>n;

    // using for loop take values for array
    for(i=0; i<n; i++)
    {
        std::cout<<"Enter "<<i+1<<" element\n";
        std::cin>>num[i];
    }
    
    // now initialise max and min to first element
    min = num[0];
    max = num[0];

    // now iterate the array to replace smallest with min
    for(i=1; i<n; i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }

    // now iterate the array to replace largest with max
    for(i=1; i<n; i++)
    {
        if(num[i]>min)
        {
            max = num[i];
        }
    }

    // display the largest and smallest
    std::cout<<"Smallest of array is: \n"<<min;
    std::cout<<"Largest of array is: "<<max;
}