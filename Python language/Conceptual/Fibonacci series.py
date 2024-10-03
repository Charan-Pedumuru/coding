n = int(input())
a, b, count = 0, 1, 0

if n <= 0:
    print("Not valid")

elif n == 1:
    print(a)

else:
    print("The fibonacci sequence of the numbers is:")
    while count < n:
        print(a)
        nth = a + b
        a = b
        b = nth
        count += 1