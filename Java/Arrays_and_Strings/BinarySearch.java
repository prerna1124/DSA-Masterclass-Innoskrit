class Innoskrit {
    static int binarySearch(int[] arr, int element)
    {
        int start = 0, end = arr.length - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == element) return mid;
            else if(arr[mid] > element) end = mid -1;
            else start = mid + 1;
            
        }
    
        return -1;
    }

    public static void main(String args[])
    {
        int[] arr = {12, 15, 30, 33, 41, 42, 52, 60};
        System.out.println(binarySearch(arr, 52));
        System.out.println(binarySearch(arr, 43));
    }
}