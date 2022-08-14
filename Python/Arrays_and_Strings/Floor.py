def binarySearch(arr, element):

    start, end, floor = 0, len(arr) - 1, -1

    while start <= end :

        mid = start + (end - start) // 2

        if arr[mid] > element:
            end = mid - 1
        else:
            floor = mid
            start = mid + 1

    return floor

if __name__ == '__main__':
    print(binarySearch([1, 3, 8, 10, 15], 12))
    print(binarySearch([3, 8, 10], 8))
    print(binarySearch([3, 8, 10], 2))