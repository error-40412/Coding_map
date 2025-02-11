'''
A program to accept n numbers from the user and store them in the list. Then
create a dictionary consisting of Key: EVEN and ODD and values are
corresponding even and odd number lists from accepted numbers
'''
# first we will take numbers from user and store in list then create one more list to store even and odd
# then map it with key using dictitionary
input_user = []
n = int(input("Enter total number of elements\n"))
for i in range(n):
    number = int(input("Enter the elemnet: \n"))
    input_user.append(number)

even_num = []
odd_num = []

for i in input_user:
    if(i%2==0):
        even_num.append(i)
    else:
        odd_num.append(i)

odd_even_dict={}
odd_even_dict["EVEN"] = even_num
odd_even_dict["ODD"] = odd_num

print(odd_even_dict)

