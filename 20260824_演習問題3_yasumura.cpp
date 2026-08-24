#include <iostream>

using namespace std;

int main() 
{
    int numbers[5] = { 35, 82, 17, 96, 54 };
    int max = numbers[0];
    int* pAry = numbers;

    for (int i = 0; i < 5; i++)
    {
        if (*(pAry + i) > max)
        {
            max = *(pAry + i);
        }
    }

    cout << "Å‘å’lF" << max << endl;

    return 0;
}
