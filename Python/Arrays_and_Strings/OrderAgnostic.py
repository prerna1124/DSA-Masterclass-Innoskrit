def binarySearch(arr, element):

    start, end = 0, len(arr) - 1

    while start <= end :

        mid = start + (end - start) // 2

        if arr[mid] == element:
            return mid

        if arr[0] < arr[len(arr) - 1]:

            if arr[mid] > element:
                end = mid - 1
            else:
                start = mid + 1

        else:

            if arr[mid] < element:
                end = mid - 1
            else:
                start = mid + 1

    return -1

if __name__ == '__main__':
    print(binarySearch([4, 6, 10], 10))
    print(binarySearch([1, 2, 3, 4, 5, 6, 7], 7))
    print(binarySearch([10, 6, 4], 10))
    print(binarySearch([10, 6, 4], 8))