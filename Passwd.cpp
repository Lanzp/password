#include <iostream>
#include <string>

using namespace std;
int delay(int x);

int main()
{
    string passwd;
    string inpasswd;
    cout << "please input the passwd" << "\n" << endl;

    cin >> passwd;


    while (1)
    {
        cout << "The passwd :" << "\n" << endl;

        cin >> inpasswd;

        if(inpasswd == passwd)
        {
            cout << "the passwd is right" << endl;
            return 0;
        }

        else
        {
            cout << "the passwd is false,please reinput :" << endl;
            cin >> inpasswd;

            if (inpasswd == passwd)
            {
                cout << "the passwd is right" << endl;
                return 0;
            }
            else
            {
                cout << "the passwd is false,please reinput :" << endl;
                cin >> inpasswd;

                if (inpasswd == passwd)
                {
                    cout << "the passwd is right" << endl;
                    return 0;
                }
                else
                {
                    cout << "the passwd is false,the number of false are over three times!!!"
                         << "wait thrity seconds to try again." << endl;
                    delay(100);

                }
            }

        }
    }
    return 0;
}

int delay(int x)
{
    int a,b;
    for(;x>0;x--)
    {
        for(a=10000;a>0;a--)
        {
            for(b=12000;b>0;b--);
        }
    }
    return 0;
}

