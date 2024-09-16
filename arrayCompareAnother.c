#include <stdio.h>

int compare_arrays(int arr1[], int arr2[], int size)
{
    int i;

    // Check if arrays are directly equal
    for (i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
            break; // Exit loop if arrays are not equal
    }
    if (i == size) // If loop completes, arrays are equal
        return 1;

    // Check if one array is the reverse of the other
    for (i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[size - i - 1])
            return 0; // Arrays are neither equal nor reverse of each other
    }

    return -1; // Arrays are reverse of each other
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result = compare_arrays(arr1, arr2, size);
    printf("%d\n", result); // 1 for equal, -1 for reverse, 0 for neither
    return 0;
}
