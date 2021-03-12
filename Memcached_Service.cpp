#include <iostream>
#include <string>
using namespace std;

int main()
{

    int testCases;

    cin >> testCases;

    while (testCases--)
    {

        int status = 0, c = 0;
        string s;
        cin >> s;

        if (s == "start")
        {
            status = 1;
        }
        else if (s == "stop" && status == 0)
        {
            c = 1;
        }
        else if (s == "stop" && status == 1)
        {
            status = 0;
        }
        else if (s == "stop" && status == 1)
        {
            status = 0;
        }
        else if (s == "restart")
        {
            status = 1;
        }
        if (c == 1)
        {
            cout << 200 << endl;
        }
        else
        {
            cout << 404 << endl;
        }
    }
}
