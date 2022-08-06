def reverse(arr):

	start, end = 0, len(arr) - 1
	
	while(start < end):
		temp = arr[start]
		arr[start] = arr[end]
		arr[end] = temp
		
		start += 1
		end -= 1
	
	for i in range(len(arr)):
		print(arr[i], end = " ")

if __name__ == '__main__':
	arr = [1, 2, 3, 4, 5, 6, 7]
	reverse(arr)