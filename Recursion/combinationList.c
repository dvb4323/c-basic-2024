#include <stdio.h>

// Hàm đệ quy để liệt kê tổ hợp chập k của n phần tử
void combination(int arr[], int n, int k, int index, int data[], int i)
{
    // Nếu số phần tử đã chọn đủ k, in ra tổ hợp
    if (index == k)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", data[j]);
        }
        printf("\n");
        return;
    }

    // Khi không còn phần tử nào để chọn
    if (i >= n)
    {
        return;
    }

    // Chọn phần tử thứ i và tiếp tục đệ quy cho các phần tử tiếp theo
    data[index] = arr[i];
    combination(arr, n, k, index + 1, data, i + 1);

    // Bỏ qua phần tử thứ i và tiếp tục đệ quy
    combination(arr, n, k, index, data, i + 1);
}

int main()
{
    int n, k;

    // Nhập giá trị n và k
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    // Tạo mảng chứa các phần tử 1, 2, ..., n
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    // Mảng tạm thời để lưu trữ tổ hợp
    int data[k];

    // Gọi hàm đệ quy để liệt kê tổ hợp chập k của n phần tử
    combination(arr, n, k, 0, data, 0);

    return 0;
}
