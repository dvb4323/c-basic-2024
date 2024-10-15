#include <stdio.h>

// Hàm đệ quy để liệt kê xâu nhị phân
void binary_string(int n, int arr[], int i)
{
    // Điều kiện dừng: khi độ dài của xâu đạt n
    if (i == n)
    {
        // In xâu nhị phân
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[j]);
        }
        printf("\n");
        return;
    }

    // Gán giá trị 0 cho vị trí thứ i, sau đó tiếp tục đệ quy cho vị trí tiếp theo
    arr[i] = 0;
    binary_string(n, arr, i + 1);

    // Gán giá trị 1 cho vị trí thứ i, sau đó tiếp tục đệ quy cho vị trí tiếp theo
    arr[i] = 1;
    binary_string(n, arr, i + 1);
}

int main()
{
    int n;

    // Nhập độ dài của xâu nhị phân
    printf("Nhap do dai cua xau nhi phan: ");
    scanf("%d", &n);

    // Tạo mảng lưu trữ các giá trị của xâu nhị phân
    int arr[n];

    // Gọi hàm đệ quy để liệt kê các xâu nhị phân
    binary_string(n, arr, 0);

    return 0;
}
