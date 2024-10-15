#include <stdio.h>

// Hàm đệ quy để giải bài toán Tháp Hà Nội
void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    // Điều kiện cơ bản: nếu chỉ có 1 đĩa, di chuyển trực tiếp
    if (n == 1)
    {
        printf("Di chuyen dia 1 tu coc %c sang coc %c\n", from_rod, to_rod);
        return;
    }

    // Bước 1: Di chuyển n-1 đĩa từ cọc from_rod sang cọc aux_rod, sử dụng to_rod làm trung gian
    hanoi(n - 1, from_rod, aux_rod, to_rod);

    // Bước 2: Di chuyển đĩa lớn nhất (đĩa thứ n) từ cọc from_rod sang cọc to_rod
    printf("Di chuyen dia %d tu coc %c sang coc %c\n", n, from_rod, to_rod);

    // Bước 3: Di chuyển n-1 đĩa từ cọc aux_rod sang cọc to_rod, sử dụng from_rod làm trung gian
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n;

    // Nhập số lượng đĩa
    printf("Nhap so luong dia: ");
    scanf("%d", &n);

    // Gọi hàm để giải bài toán Tháp Hà Nội
    hanoi(n, 'A', 'C', 'B'); // A là cọc nguồn, C là cọc đích, B là cọc trung gian

    return 0;
}
