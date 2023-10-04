import java.util.Scanner;

public class binarySearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Enter Array Length :");
        int n = in.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter Array Elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        System.out.print("Enter Element to be Searched : ");
        int target = in.nextInt();

        int ans = binarysearch(arr, target);
        if (ans == -1) {
            System.out.println("Element Not Found.");
        } else {
            System.out.println("Element Found at index : " + ans);
        }
    }

    static int binarysearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + (end - start)/2;

            if (target > arr[mid]) {
                start = mid + 1;
            } else if (target < arr[mid]) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
}