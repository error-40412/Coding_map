//  A C++ program to generate all the prime numbers between 1 and n, where n is a value supplied by the user
// First take the n from user and then
// start from 1 and repeat is_prime function till n 
// is_prime function will return 1 is n is prime and 0 if not prime
// for less ambiguty for program we will start checking from 3 and print 2 first and set condition for for loop accordingly 
// Let's start 
#include<iostream>

// declare the function
int is_prime(int num);


// initate main function
int main()
{
    // take user input for 1 to n
    int n, num, i;

    std::cout<<"Input the number till you want to flter the prime\n";
    std::cin>>n;

    std::cout<<2<<" ";

    for(i=3; i<n-2; i++)
    {
        num = is_prime(i);
        if(num == 1)
        {
            std::cout<<i<<" ";
        }
    }
return 0;
}


// definition for function
int is_prime(int n)
{
    // declare variable
    int counter,i;
    counter = 0;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            counter += 1;
            break;
        }
    }
    if(counter == 0)
    {
        return 1;
    }

}
// it works and yes if you have any idea reagrding another algorithm which could optimize the computation let me know
// as optimizing program is main motive 
