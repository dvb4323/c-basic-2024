#include <stdio.h>

#define MAX 100 // Giới hạn tối đa cho n và k

// Mảng lưu trữ giá trị tổ hợp đã tính toán
int memo[MAX][MAX];
// Biến đếm tổng số phép tính cộng
int addition_count = 0;

// Hàm đệ quy có nhớ tính tổ hợp chập k của n
int combination(int n, int k)
{
    // Điều kiện cơ bản
    if (k == 0 || k == n)
    {
        return 1;
    }

    // Kiểm tra nếu giá trị đã được tính trước đó
    if (memo[n][k] != -1)
    {
        return memo[n][k];
    }

    // Công thức đệ quy: C(n, k) = C(n-1, k-1) + C(n-1, k)
    addition_count++; // Tăng biến đếm số phép tính cộng
    memo[n][k] = combination(n - 1, k - 1) + combination(n - 1, k);

    return memo[n][k];
}

int main()
{
    int n, k;

    // Nhập giá trị n và k
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    // Khởi tạo mảng memo với giá trị -1 để đánh dấu chưa tính toán
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            memo[i][j] = -1;
        }
    }

    // Gọi hàm tính tổ hợp và in kết quả
    int result = combination(n, k);
    printf("To hop chap %d cua %d phan tu la: %d\n", k, n, result);
    printf("Tong so phep tinh cong da thuc hien: %d\n", addition_count);

    return 0;
}
