#include <stdio.h>

// Hàm đệ quy tính tổ hợp chập k của n
int combination(int n, int k)
{
    // Điều kiện cơ bản
    if (k == 0 || k == n)
    {
        return 1;
    }
    // Công thức đệ quy: C(n, k) = C(n-1, k-1) + C(n-1, k)
    return combination(n - 1, k - 1) + combination(n - 1, k);
}

int main()
{
    int n, k;

    // Nhập giá trị n và k
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap k: ");
    scanf("%d", &k);

    // Gọi hàm tính tổ hợp và in kết quả
    int result = combination(n, k);
    printf("To hop chap %d cua %d phan tu la: %d\n", k, n, result);

    return 0;
}
