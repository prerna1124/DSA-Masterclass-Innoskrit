def binarySearch(arr, element):
    
    start, end = 0, len(arr) - 1
    
    while start <= end :
        mid = start + (end - start) // 2
        
        if arr[mid] == element:
            return mid
        elif arr[mid] > element:
            end = mid - 1
        else:
            start = mid + 1
            
    return -1

if __name__ == '__main__':
	arr = [12, 15, 30, 33, 41, 42, 52, 60]
	print(binarySearch(arr, 52))
	print(binarySearch(arr, 43))