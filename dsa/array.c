#include <stdio.h>
#include <limits.h>

void insertElement(int arr[], int *n, int x, int pos) {
    for (int i = *n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = x;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

void searchElement(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

void updateElement(int arr[], int n, int x, int pos) {
    if (pos >= 0 && pos < n) {
        arr[pos] = x;
    } else {
        printf("Invalid position\n");
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int getLength(int *n) {
    return *n;
}

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int findMax(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    reverseArray(arr, n - k);
    reverseArray(arr + n - k, k);
    reverseArray(arr, n);
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k) {
            return arr[pi];
        } else if (pi > k) {
            return quickSelect(arr, low, pi - 1, k);
        } else {
            return quickSelect(arr, pi + 1, high, k);
        }
    }
    return INT_MAX;
}

int findKthSmallest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, k - 1);
}

int main() {
    int arr[100];
    int n = 0;

    insertElement(arr, &n, 10, 0);
    insertElement(arr, &n, 20, 1);
    insertElement(arr, &n, 30, 2);
    displayArray(arr, n);

    printf("Length of array: %d\n", getLength(&n));

    deleteElement(arr, &n, 1);
    displayArray(arr, n);

    printf("Length of array: %d\n", getLength(&n));

    searchElement(arr, n, 30);
    searchElement(arr, n, 40);

    updateElement(arr, n, 50, 1);
    displayArray(arr, n);

    printf("Length of array: %d\n", getLength(&n));

    reverseArray(arr, n);
    printf("Reversed array: ");
    displayArray(arr, n);

    printf("Max element: %d\n", findMax(arr, n));
    printf("Min element: %d\n", findMin(arr, n));

    rotateArray(arr, n, 2);
    printf("Rotated array: ");
    displayArray(arr, n);

    int k = 2;
    printf("%dth smallest element: %d\n", k, findKthSmallest(arr, n, k));

    return 0;
}
