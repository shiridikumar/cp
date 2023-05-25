def sum_of_digits(n):
    return sum([int(digit) for digit in str(n)])

def split_number(n):
    x = n // 2
    y = n - x
    sum_x = sum_of_digits(x)
    sum_y = sum_of_digits(y)
    if sum_x == sum_y or abs(sum_x - sum_y) == 1:
        return (x, y)
    if sum_x > sum_y:
        return split_number(x - 1)
    else:
        return split_number(x + 1)

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    x, y = split_number(n)
    print(x, y)
