class Innoskrit {
	static int linearSearch(int[] arr, int element)
	{
        for(int i = 0; i < arr.length; i++) {
        	if(arr[i] == element) {
        		return i;
        	}
        }

        return -1;
	}

	public static void main(String args[])
	{
		int[] arr = {41, 15, 12, 30, 42, 52, 60, 33};
        System.out.println(linearSearch(arr, 52));
        System.out.println(linearSearch(arr, 43));
	}
}