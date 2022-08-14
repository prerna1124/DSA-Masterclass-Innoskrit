class Innoskrit {
    static int binarySearch(int[] arr, int element, boolean left)
    {
        int start = 0, end = arr.length - 1, index = -1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == element) {
                index = mid;
                if(left) end = mid - 1;
                else start = mid + 1;
            }
            else if(arr[mid] > element) end = mid -1;
            else start = mid + 1;
            
        }
    
        return index;
    }

    static int[] findRange(int[] arr, int element) {
        int[] res = new int[2];
        res[0] = binarySearch(arr, element, true);
        if(res[0] != -1) {
            res[1] = binarySearch(arr, element, false);
            return res;
        }
        res[1] = -1;
        return res;
    }

    public static void main(String args[])
    {
        int[] res = findRange(new int[]{1, 3, 8, 10, 15}, 12);
        System.out.println("["+res[0]+","+res[1]+"]");
        res = findRange(new int[]{1, 3, 8, 10, 15}, 15);
        System.out.println("["+res[0]+","+res[1]+"]");
        res = findRange(new int[]{1, 6, 6, 6, 12}, 6);
        System.out.println("["+res[0]+","+res[1]+"]");
    }
}