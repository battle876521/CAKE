#include "receipt.h"

int main(){

    receipt a;
    int data[9] = {   };
    cout << "�п�J�����S�O�����X: ";
    cin >> data[0];
    cout << "�п�J�����S�����X: ";
    cin >> data[1];
    cout << "�п�J�����Y�����X(1): ";
    cin >> data[2];
    cout << "�п�J�����Y�����X(2): ";
    cin >> data[3];
    cout << "�п�J�����Y�����X(3): ";
    cin >> data[4];
    cout << "�п�J�����W�}������3��Ƹ��X(1): ";
    cin >> data[5];
    cout << "�п�J�����W�}������3��Ƹ��X(2): ";
    cin >> data[6];
    cout << "�п�J�����W�}������3��Ƹ��X(3): ";
    cin >> data[7];
    cout << "�п�J�����W�}������3��Ƹ��X(4): ";
    cin >> data[8];

    a.set(data);
    cout << endl;

}