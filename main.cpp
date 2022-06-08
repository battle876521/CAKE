#include "receipt.h"

int main(){

    receipt a;
    int data[9] = {   };
    cout << "請輸入本期特別獎號碼: ";
    cin >> data[0];
    cout << "請輸入本期特獎號碼: ";
    cin >> data[1];
    cout << "請輸入本期頭獎號碼(1): ";
    cin >> data[2];
    cout << "請輸入本期頭獎號碼(2): ";
    cin >> data[3];
    cout << "請輸入本期頭獎號碼(3): ";
    cin >> data[4];
    cout << "請輸入本期增開六獎的3位數號碼(1): ";
    cin >> data[5];
    cout << "請輸入本期增開六獎的3位數號碼(2): ";
    cin >> data[6];
    cout << "請輸入本期增開六獎的3位數號碼(3): ";
    cin >> data[7];
    cout << "請輸入本期增開六獎的3位數號碼(4): ";
    cin >> data[8];

    a.set(data);
    cout << endl;

}