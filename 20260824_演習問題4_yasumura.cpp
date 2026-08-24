#include <iostream>

// 配列の値を倍にする関数
void multiplyArray(int numbery[], int size, int pAry) {
    for (int i = 0; i < size; i++) {
        numbery[i] = numbery[i] * pAry;
    }
}

int main() {
    int numbers[5] = { 10, 20, 30, 40, 50 };
    int pAry;

    // 倍率を入力
    std::cin >> pAry;

    // 変更前の表示
    std::cout << "変更前 ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    // 関数を呼び出して配列を書き換える
    multiplyArray(numbers, 5, pAry);

    // 変更後の表示
    std::cout << "変更後 ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
