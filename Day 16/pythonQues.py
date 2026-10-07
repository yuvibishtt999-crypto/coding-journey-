# Design, Develop and implement a menu driven program in Python to perform the following tasks:
#  a. Read three numbers and print largest of it 
# b. Read a number and print sum of its digit 
# c. Read a number and print reverse of the number (without using built in functions
while True:
    print("\n----- MENU -----")
    print("1. Find largest of three numbers")
    print("2. Find sum of digits of a number")
    print("3. Find reverse of a number")
    print("4. Exit")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        # Read three numbers
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))
        c = int(input("Enter third number: "))

        if a >= b and a >= c:
            largest = a
        elif b >= a and b >= c:
            largest = b
        else:
            largest = c

        print("Largest number =", largest)

    elif choice == 2:
        # Sum of digits
        num = int(input("Enter a number: "))
        n = abs(num)
        sum_digits = 0

        while n > 0:
            digit = n % 10
            sum_digits = sum_digits + digit
            n = n // 10

        print("Sum of digits =", sum_digits)

    elif choice == 3:
        # Reverse of number without built-in functions
        num = int(input("Enter a number: "))
        n = abs(num)
        reverse = 0

        while n > 0:
            digit = n % 10
            reverse = reverse * 10 + digit
            n = n // 10

        if num < 0:
            reverse = -reverse

        print("Reverse of number =", reverse)

    elif choice == 4:
        print("Program ended.")
        break

    else:
        print("Invalid choice! Please try again.")
