#include "receipt.h"

void receipt::set(int data[])
{
    while (1)
    {
        cout << "�п�J�z�⤤�o�����X: ";
        cin >> user[0];
        if (data[0] == user[0])
        {
            cout << "���߱z��o�����S�O���A����1000�U��" << endl;

        }
        if (data[1] == user[0])
        {
            cout << "���߱z��o�����S���A����200�U��" << endl;

        }
        if (user[0] == data[2] || user[0] == data[3] || user[0] == data[4])
        {
            cout << "���߱z��o�����Y���A����20�U��" << endl;

        }
        if (user[0] != data[0] && user[0] != data[1] && user[0] != data[2] && user[0] != data[3] && user[0] != data[4])
        {
            for (int i = 2; i < 9; i++)
            {
                if (abs(data[i] - user[0]) % 10000000 == 0)
                {
                    cout << "���߱z��o�����G���A����4�U��" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 1000000 == 0)
                {
                    cout << "���߱z��o�����T���A����1�U��" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 100000 == 0)
                {
                    cout << "���߱z��o�����|���A����4000��" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 10000 == 0)
                {
                    cout << "���߱z��o���������A����1000��" << endl;
                    break;
                }
                else if (abs(data[i] - user[0]) % 1000 == 0)
                {
                    cout << "���߱z��o���������A����200��" << endl;
                    break;
                }
                time++;
            }
            if (time == 7)
            {
                cout << "�S����" << endl;
            }
        }
        cout << endl;
        time = 0;
    }
}
