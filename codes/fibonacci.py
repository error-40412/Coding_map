# a Python program to generate the first ten numbers in the Fibonacci series then find the average of those ten numbers.
# first we will make a fucntion to retrun list for all elements and then use that list as input for average function
# for finding average
# Let's goooo..


# Function for creating series of fibonacci
def fibonacci_display(limit):
    series = []
    first = 0
    second = 1
    series.append(first)
    series.append(second)
    i = 2
    while(i<limit):
        third = first + second
        series.append(third)
        first = second
        second = third
        i += 1
    return series



# Function using for loop for list and is used for finding average
def display_average(list,a):
    sum = 0
    for num in list:
        sum = sum + num

    average = sum / a 
    return average



total_element = int(input("Enter no till that you want average for fibonacci: \n"))
fibonacci_series = fibonacci_display(total_element)
average = display_average(fibonacci_series,total_element)

print("The average of 10 elements of fibonacci series is: ", average)
