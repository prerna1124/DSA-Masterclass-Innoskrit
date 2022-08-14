def binarySearch(arr, element):

    start, end, ceil = 0, len(arr) - 1, 'a'

    while start <= end :

        mid = start + (end - start) // 2

        if arr[mid] <= element:
            start = mid + 1
        else:
            ceil = arr[mid]
            end = mid - 1

    return ceil

if __name__ == '__main__':
    print(binarySearch(['a', 'c', 'f', 'h'], 'f'))
    print(binarySearch(['a', 'c', 'f', 'h'], 'b'))
    print(binarySearch(['a', 'c', 'f', 'h'], 'm'))
    print(binarySearch(['a', 'c', 'f', 'h'], 'h'))