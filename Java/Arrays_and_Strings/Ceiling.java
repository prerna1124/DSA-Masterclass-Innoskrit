class Innoskrit {
    static int binarySearch(int[] arr, int element)
    {
        int start = 0, end = arr.length - 1, ceil = -1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] < element) start = mid + 1;
            else {
                ceil = mid;
                end = mid - 1;
            }
            
        }
    
        return ceil;
    }

    public static void main(String args[])
    {
        System.out.println(binarySearch(new int[]{1, 3, 8, 10, 15}, 12));
        System.out.println(binarySearch(new int[]{3, 8, 10}, 8));
        System.out.println(binarySearch(new int[]{3, 8, 10}, 12));
    }
}