def activitySelection(start, finish):
    arr = list(zip(start, finish))
    arr.sort(key=lambda x: x[1])
    count = 1
    j = 0

    for i in range(1, len(arr)):
        if arr[i][0] > arr[j][1]:
            count += 1
            j = i

    return count
