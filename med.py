def min_moves_to_median(price, k):
    n = len(price)
    price.sort()

    median_index = (n-1) // 2
    median = price[median_index]

    if median == k:
        return 0

    moves = 0
    if median > k:
        for i in range(median_index, -1, -1):
            moves += max(0, price[i] - k)
    else:
        for i in range(median_index, n):
            moves += max(0, k - price[i])

    return moves


a=[int(i) for i in input().split()]
k=int(input())
print(min_moves_to_median(a,k))