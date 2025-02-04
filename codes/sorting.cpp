//A C++ program to sort a list of numbers in ascending order
// To sort there are many method which come under DSA
// Here i am gonna be using bubble sort
// To use bubble sort in ascending first we will chech first two terms
// if second is small the swap the two numbers and repeat that for whole array which is called one pass

// import libraries
#include<iostream>

int main()
{
    // initialise variables
    int num[10], i, j, temp, n;

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

    // first display it as to compare it with sorted
    std::cout<<"unsorted Array\n";
    for(i=0; i<n; i++)
    {
        std::cout<<num[i]<<" ";
    }
    std::cout<<"\n";

    // now main i loop for pass and then nested j loop for swaping
    // as we do not want to disturb sorted list we start j from 0 and take it till n-1-i 
    // in our example 5-1-i = 4-i 

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            // check for smallest 
            if(num[j]>num[j+1])
            {
                // swap the two using temp
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    // display the sorted array
    std::cout<<"sorted Array\n";
    for(i=0; i<n; i++)
    {
        std::cout<<num[i]<<" ";
    }
    return 0;
}