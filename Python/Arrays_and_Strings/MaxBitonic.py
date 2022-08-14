def binarySearch(arr):
    
    start, end = 0, len(arr) - 1
    
    while start <= end :
        mid = start + (end - start) // 2
        
        if arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]:
            return mid
        elif arr[mid] > arr[mid - 1]:
            start = mid + 1
        else:
            end = mid - 1
            
    return -1

if __name__ == '__main__':
    print(binarySearch([12, 15, 30, 33, 41, 20, 12, 10]))
    print(binarySearch([1, 2, 3, 1]))