#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string answer; 
    int g = 1000;

    cout << "Vyber si cislo a stiskni libovolne tlacitko pro pokracovani. \n" ;
    cin;
    int a[1000];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = i;
    }

    int chall = 1000;
    int prev = 0;

    for (int i = 500; i < 1000; i=chall)
    {

        cout << "Je tvoje cislo vetsi nez" << i << endl;
        cin >> answer;

        int arraynum = 0;
        int end = 1001;


        if (answer == "ne")
        {
            for (int e = prev; e < end; e++)
            {
                a[arraynum] = e;
                arraynum++;
            }
        }
        else if (answer == "ano")
        {

        }
        else
        {

        }

        prev = i;
    }

    return 0;
}
