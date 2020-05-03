#!/usr/bin/python3


def is_palindrom(digit):
    """ check if digit is palindrom """
    digit = str(digit)

    if digit == digit[::-1]:
        return True
    return False


# prints the largest palindrom product of 3 digits
# 100 - 999

largest_palindrom = 0

for i in range(100, 1000):
    for e in range(i, 1000):
        product = i*e
        if is_palindrom(product) and product > largest_palindrom:
                largest_palindrom = product

# largest palindorm
print(largest_palindrom)
