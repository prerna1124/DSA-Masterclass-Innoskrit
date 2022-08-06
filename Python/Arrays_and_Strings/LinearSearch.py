def linearSearch(arr, element):

	for i in range(0, len(arr)):
		if arr[i] == element:
			return i

	return -1

if __name__ == '__main__':
	arr = [41, 15, 12, 30, 42, 52, 60, 33]
	print(linearSearch(arr, 52))
	print(linearSearch(arr, 43))