'''
A Python program to convert Celsius temperature to its equivalent temperature in
Fahrenheit. Accept Celsius temperature from the user and display Fahrenheit
temperature.
'''

# First I took input from user using input
Celsius = float(input("Enter temperature in Celsius\n"))

# Now calculate fahrenheit using formula f = (9/5)*c + 32
Fahrenheit = (9/5)*Celsius + 32

#Now display fahrenheit
print("Temperature in Fahrenheit is: ", Fahrenheit)
