import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int arr[] = {5, 6, 3, 4, 1};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void bubble(int[] arr) {
         boolean swapped;
        // iterate n-1 times through array, i works as a counter
        for (int i = 0; i < arr.length; i++) {
            swapped = false;
            // j helps to sort out the elements
            // for every pass, the array gets sorted from the last index (right to left)
            for (int j = 1; j < arr.length - i; j++) {
                // if element lesser then previous element, then swap
                if (arr[j] < arr[j-1]) {
                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            // if you did not swap for a particular value of i, it means the array is sorted hence stop the program
            if (!swapped) {   // or can also do:  swapped == false
                break;
            }
        }
    }

}
