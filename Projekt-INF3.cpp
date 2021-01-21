#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string answer; 
    int g = 1000;

    cout << "Vyber si cislo a stiskni libovolne tlacitko pro pokracovani. \n" ;

    int a[999];
    for (int i = 0; i < 1000; i++)
    {
        a[i] = i;
    }

    int mid = 500;
    int prevmax = 1000;
    int prevmin = 1;

    for (int i = 500; i < 1001; i=mid)
    {
        cout << "Je tvoje cislo vetsi nez " << i << endl;
        cin >> answer; 

        int arraynum = -1;

        if (answer == "ne")
        {
            for (int e = prevmin; e < i+1; e++)
            {
                arraynum++;
                a[arraynum] = e;
            }
        }
        else if (answer == "ano")
        {
            for (int e = mid + 1; e < prevmax + 1; e++)
            {
                arraynum++;
                a[arraynum] = e;
            }
        }
        else
        {
            cout << "Odpovidejte prosim ve formatu ano/ne a restartujte hru. \n";
            exit(0);
        }

        prevmax = a[arraynum];
        prevmin = a[0];
        mid = a[arraynum / 2];

        if (prevmax == prevmin)
        {
            cout << "Tvoje cislo je " << prevmax;
            exit(0);
        }
        else
        {
            continue;
        }
    }

    return 0;
}


//vemte zdrojový kod a zkompirujte kompilátorem za pomocí g++ program.cpp -o program