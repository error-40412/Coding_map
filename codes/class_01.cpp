// A C++ program Illustrating Class Declarations, Definition, and Accessing Class Members.
// syntax for class is : class <name>{};
// here we have to use keyword public so that we can access from main func

// import lib
#include<iostream>

class students
{
public:

int global_var;

// i would define a function to display value for global variable and take input from main using obj
void display()
{
    std::cout<<"Value of variable is: "<<global_var;
}

// here i will make add function to add a and b
int add(int num1, int num2)
{
    return num1+num2;
}


};

// main function where i would create object for my class
// syntax <class_name> <objec_tname>;

int main()
{
    students roy;
    int res,a,b;
    a = 10;
    b = 20;

    // calling function from class using roy obj
    res = roy.add(a, b);
    std::cout<<"The result for adding two numbers is: "<<res<<"\n";

    // giving value to variable from main and displaying it using display 
    roy.global_var = 100;
    roy.display();

    return 0;
}
//output 
//The result for adding two numbers is: 30
//Value of variable is: 100

