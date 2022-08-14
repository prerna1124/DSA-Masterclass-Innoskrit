class Innoskrit {
    static int binarySearch(int[] arr)
    {
        int start = 0, end = arr.length - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
                return mid;
            else if(arr[mid] > arr[mid - 1]) start = mid + 1;
            else end = mid - 1;
            
        }
    
        return -1;
    }

    public static void main(String args[])
    {
        System.out.println(binarySearch(new int[]{12, 15, 30, 33, 41, 20, 12, 10}));
        System.out.println(binarySearch(new int[] {1, 2, 3, 1}));
    }
}