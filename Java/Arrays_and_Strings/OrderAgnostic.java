class Innoskrit {
    static int binarySearch(int[] arr, int element)
    {
        int start = 0, end = arr.length - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(arr[mid] == element) return mid;
            
            if(arr[0] < arr[arr.length-1]) {
                if(arr[mid] > element) end = mid -1;
                else start = mid + 1;
            } else {
                if(arr[mid] < element) end = mid -1;
                else start = mid + 1;
            }
            
        }
    
        return -1;
    }

    public static void main(String args[])
    {
        System.out.println(binarySearch(new int[] {4, 6, 10}, 10));
        System.out.println(binarySearch(new int[] {1, 2, 3, 4, 5, 6, 7}, 7));
        System.out.println(binarySearch(new int[] {10, 6, 4}, 10));
        System.out.println(binarySearch(new int[] {10, 6, 4}, 8));
    }
}