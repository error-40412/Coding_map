#Write a Python program to accept a string from the user. Generate a new string from
#the accepted string by shifting two characters to the right. Display the generated string.
#(e.g. if the input is hacking 2022 then the generated new string will be 22hacking20)

'''
first we will take string then extract it's last two charater using string manipulation 
then make new string out of them and after that we will concat it with original string
'''

input_string = input("Enter a string\n")
new_string = input_string[-1] + input_string[-2] + input_string[:len(input_string)-2]
print(new_string) 