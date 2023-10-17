number = input("Enter your mobile number: ")
count = 0
for digit in number:
    if digit == '3':
        count += 1
print("The number of 3 in your mobile number is:", count)