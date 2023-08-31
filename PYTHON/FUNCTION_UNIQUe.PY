def uniqueE(L):
    counts = {}
    for num in L:
        if num in counts:
            counts[num] += 1
        else:
            counts[num] = 1
    result = [num for num, count in counts.items() if count == 1]
    result.sort()
    return result
