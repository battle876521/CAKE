#include "receipt.h"

void receipt::set(int data[])
{
    while (1)
    {
        cout << "請輸入您手中發票號碼: ";
        cin >> user[0];
        if (data[0] == user[0])
        {
            cout << "恭喜您獲得本次特別獎，獎金1000萬元" << endl;

        }
        if (data[1] == user[0])
        {
            cout << "恭喜您獲得本次特獎，獎金200萬元" << endl;

        }
        if (user[0] == data[2] || user[0] == data[3] || user[0] == data[4])
        {
            cout << "恭喜您獲得本次頭獎，獎金20萬元" << endl;

        }
        if (user[0] != data[0] && user[0] != data[1] && user[0] != data[2] && user[0] != data[3] && user[0] != data[4])
        {
            for (int i = 2; i < 9; i++)
            {
                if (abs(data[i] - user[0]) % 10000000 == 0)
                {
                    cout << "恭喜您獲得本次二獎，獎金4萬元" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 1000000 == 0)
                {
                    cout << "恭喜您獲得本次三獎，獎金1萬元" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 100000 == 0)
                {
                    cout << "恭喜您獲得本次四獎，獎金4000元" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 10000 == 0)
                {
                    cout << "恭喜您獲得本次五獎，獎金1000元" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 1000 == 0)
                {
                    cout << "恭喜您獲得本次六獎，獎金200元" << endl;
                    break;
                }
                time++;
            }
            if (time == 7)
            {
                cout << "沒中呦" << endl;
            }
        }
        cout << endl;
        time = 0;
    }
}
