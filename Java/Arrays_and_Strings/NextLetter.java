class Innoskrit {
    static char binarySearch(char[] arr, char element)
    {
        int start = 0, end = arr.length - 1;
        char ceil = 'a';
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] <= element) start = mid + 1;
            else {
                ceil = arr[mid];
                end = mid - 1;
            }
            
        }
    
        return ceil;
    }

    public static void main(String args[])
    {
        System.out.println(binarySearch(new char[]{'a', 'c', 'f', 'h'}, 'f'));
        System.out.println(binarySearch(new char[]{'a', 'c', 'f', 'h'}, 'b'));
        System.out.println(binarySearch(new char[]{'a', 'c', 'f', 'h'}, 'm'));
        System.out.println(binarySearch(new char[]{'a', 'c', 'f', 'h'}, 'h'));
    }
}