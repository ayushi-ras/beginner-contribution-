#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    std::vector<int> left_arr(n1);
    std::vector<int> right_arr(n2);

    // Copy data to temporary arrays left_arr[] and right_arr[]
    for (int i = 0; i < n1; i++) {
        left_arr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        right_arr[i] = arr[middle + 1 + i];
    }

    // Merge the two sorted arrays back into arr[]
    int i = 0; 
    int j = 0;
    int k = left; 

    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        } else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left_arr[], if any
    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right_arr[], if any
    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Sort first and second halves
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> input_list(n);
    std::cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> input_list[i];
    }

    merge_sort(input_list, 0, n - 1);

    std::cout << "Sorted list: ";
    for (int i = 0; i < n; i++) {
        std::cout << input_list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
