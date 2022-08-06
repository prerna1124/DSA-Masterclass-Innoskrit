class Innoskrit {
	static void reverse(int[] arr)
	{
        int start = 0, end = arr.length - 1;
        
        while(start < end) {
            swap(arr, start, end);
            start++;
            end--;
        }
        
        for(int element : arr) {
            System.out.print(element + " ");
        }
	}

	static void swap(int[] arr, int i, int j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	public static void main(String args[])
	{
		int[] arr = {1, 2, 3, 4, 5, 6, 7};
        reverse(arr);
	}
}