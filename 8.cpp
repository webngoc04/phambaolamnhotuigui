#include <iostream>
using namespace std;

int main()
{
    int n; // khai báo biến n là số ngày
    cin >> n; // nhập giá trị của n từ bàn phím
    int money = 0; // khai báo và khởi tạo biến money là số tiền tiết kiệm của bé
    for (int i = 1; i <= n; i++) // vòng lặp từ i = 1 đến i <= n, mỗi lần tăng i thêm 1
    {
        money += 2000 + (i - 1) * 1000; // cộng vào money số tiền bé Hà bỏ vào lợn mỗi ngày, bằng 2000 cộng với số ngày trừ 1 nhân với 1000
    }
    cout << money << endl; // in ra giá trị của money
    return 0;
}
