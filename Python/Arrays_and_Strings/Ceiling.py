def binarySearch(arr, element):

    start, end, ceil = 0, len(arr) - 1, -1

    while start <= end :

        mid = start + (end - start) // 2

        if arr[mid] < element:
            start = mid + 1
        else:
            ceil = mid
            end = mid - 1

    return ceil

if __name__ == '__main__':
    print(binarySearch([1, 3, 8, 10, 15], 12))
    print(binarySearch([3, 8, 10], 8))
    sprint(binarySearch([3, 8, 10], 12))