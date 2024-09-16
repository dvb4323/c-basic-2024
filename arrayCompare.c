#include <stdio.h>

void reverse_array(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int compare_arrays(int arr1[], int arr2[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            reverse_array(arr1, size);
            for (int j = 0; j < size; j++)
            {
                if (arr1[i] != arr2[i])
                {
                    return 0;
                }
                else
                    return -1;
            }
        }
        else
            return 1;
    }
}

void main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result = compare_arrays(arr1, arr2, size);
    printf("%d\n", result);
}