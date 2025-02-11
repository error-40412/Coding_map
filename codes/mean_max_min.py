#Write a Python program to accept n numbers from the user. Then find the minimum,
#maximum, and mean values. Write different functions for calculating minimum,
#maximum, and mean values.
'''
first we will store the numbers in list
then we will use numpy to calculate the mean 
and list method of min and max
'''

import numpy as np
def mean(lst):
    mean_value = np.mean(lst)
    return mean_value

def max(lst):
    max_value = np.max(lst)
    return max_value

def min(lst):
    min_value = np.min(lst)
    return min_value

input_user = []
n = int(input("Enter total number of elements\n"))
for i in range(n):
    number = int(input("Enter the elemnet: \n"))
    input_user.append(number)

print(f" Mean of numbers is: {mean(input_user)}\n Maximum value from numbers is: {max(input_user)}\n Minimum value from numbers is: {min(input_user)}")
