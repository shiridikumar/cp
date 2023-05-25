def max_magical_set_size(A, K):
    N = len(A)
    # Initialize good set
    good_set = set()
    for i in range(N):
        # Add index i to good set if the condition is satisfied
        for j in good_set:
            if abs(i - j) < K:
                break
        else:
            good_set.add(i)
    return len(good_set)



max_magical_set_size([1,2,3],)