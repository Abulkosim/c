    /*
     * Basic Pointer Arithmetic:
     * Write a function that takes an integer array and its size as parameters.
     * Use pointer arithmetic to calculate and return the sum of all elements in the array.
    */

    #include <stdio.h>

    int sumOfArrayNumbers(int *arr, int size) {
        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        return sum;
    }

    int main() {
        int nums[] = {1};

        const int sizeOfNums = sizeof(nums) / sizeof(nums[0]);
        printf("%d\n", sumOfArrayNumbers(nums, sizeOfNums));

        return 0;
    }
