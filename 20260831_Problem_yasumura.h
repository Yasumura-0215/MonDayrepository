#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>
using namespace std;

// 銀行口座を表すクラス
class BankAccount
{
private:
    string accountHolder; // 口座名義人
    double balance;       // 口座の残高

public:
    // コンストラクタ
    // 口座名義人と初期残高を設定する
    BankAccount(const string& holder, double initialBalance);

    // 現在の残高を取得する
    double getBalance() const;

    // 指定した金額を入金する
    void deposit(double amount);

    // 指定した金額を引き出す
    void withdraw(double amount);

    // 口座情報を表示する
    void displayAccountInfo() const;
};

#endif