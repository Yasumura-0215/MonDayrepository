#include <iostream>
#include "20260831_Problem_yasumura.h"

using namespace std;

// コンストラクタ
// 口座名義人と初期残高を設定する
BankAccount::BankAccount(const string& holder, double initialBalance)
    : accountHolder(holder), balance(initialBalance)
{}

// 現在の残高を取得する
double BankAccount::getBalance() const
{
    return balance;
}

// 指定した金額を入金する
void BankAccount::deposit(double amount)
{
    // 入金額が0より大きい場合
    if (amount > 0)
    {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else
    {
        // 0以下の金額は入金できない
        cout << "Invalid deposit amount.\n";
    }
}

// 指定した金額を引き出す
void BankAccount::withdraw(double amount)
{
    // 引き出す金額が0より大きく、残高以下の場合
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        // 金額が不正、または残高不足の場合
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}

// 口座情報を表示する
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}

// メイン関数
int main()
{
    // Aliceの口座を作成し、初期残高を5000円にする
    BankAccount account("Alice", 5000.0);

    // 口座情報を表示する
    account.displayAccountInfo();

    // 1000円を入金する
    account.deposit(1000.0);

    // 2000円を引き出す
    account.withdraw(2000.0);

    // 残高不足のため、5000円の引き出しは失敗する
    account.withdraw(5000.0);

    // 最後の口座情報を表示する
    account.displayAccountInfo();

    return 0;
}