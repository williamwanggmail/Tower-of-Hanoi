#include <iostream>
using namespace std;
// 定義函數原型
//void hanoi(int n, char from, char to, char reg);

int main() {
    int n; 
    cout << "輸入河內塔數量: "<<endl;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}

void hanoi(int n, char from, char to, char reg) {//移動的盤子、 從哪個位置 、 移動至哪裡、暫存位置
    if (n == 1) {
        cout << "移動 1 從 " << from << " 至 " << to << endl;
        return;
    }

    hanoi(n - 1, from, reg, to);

    cout << "移動 " << n << " 從 " << from << " 至 " << to << endl;

    hanoi(n - 1, reg, to, from);
}
