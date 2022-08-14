def binarySearch(arr, element, left):
    
    start, end, index = 0, len(arr) - 1, -1
    
    while start <= end :
        mid = start + (end - start) // 2
        
        if arr[mid] == element:
            index = mid
            if left == True:
                end = mid - 1
            else:
                start = mid + 1
        elif arr[mid] > element:
            end = mid - 1
        else:
            start = mid + 1
            
    return index

def findRange(arr, element):
    res = [-1, -1]
    res[0] = binarySearch(arr, element, True)
    if res[0] != -1 :
        res[1] = binarySearch(arr, element, False)

    return res

if __name__ == '__main__':
    res = findRange([1, 3, 8, 10, 15], 10)
	print("[", res[0], " ", res[1], "]", endl = "")

	res = findRange([1, 3, 8, 10, 15], 12)
    print("[", res[0], " ", res[1], "]", endl = "")

    res = findRange([1, 6, 6, 6, 9], 6)
    print("[", res[0], " ", res[1], "]", endl = "")