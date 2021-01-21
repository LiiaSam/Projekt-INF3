#include <iostream>
#include <sstream>
#include <time.h>  
using namespace std;

void PCG()
{
    string answer;
    int g = 1000;
    int a[500];
    int mid = 500;
    int prevmax = 1000;
    int prevmin = 1;

    cout << "Vyber si cislo a stiskni libovolne tlacitko pro pokracovani. \n";
    system("pause");

    for (int i = 500; i < 1002; i = mid)
    {
        cout << "Je tvoje cislo vetsi nez " << i << endl;

        while (answer != "ano" && answer != "ne")
        {
            cout << "Odpovidejte prosim ve formatu ano/ne. \n";
            cin >> answer;
        }

        int arraynum = -1;

        if (answer == "ne")
        {
            for (int e = prevmin; e < i + 1; e++)
            {
                arraynum++;
                a[arraynum] = e;
            }
        }
        else
        {
            for (int e = mid + 1; e < prevmax + 1; e++)
            {
                arraynum++;
                a[arraynum] = e;
            }
        }

        prevmax = a[arraynum];
        prevmin = a[0];
        mid = a[arraynum / 2];

        if (prevmax == prevmin)
        {
            cout << "Tvoje cislo je " << prevmax;
            exit(0);
        }
        answer = "";
    }
}

void PLG()
{
    srand(unsigned(time(0)));
    int num = rand() % 1000;
    int guess = 0;
    int quest = 0;

    cout << "Myslim si cislo... \nNapiste cislo, se kterym chcete srovnavat. \n";

    while (guess > 1000)
    {
        cout << "Vyberte si cislo mezi 1 a 1000.";
        cin >> guess;
    }

    cout << "Vyberte si, na co se chcete zeptat: \n1 Je vase cislo vetsi nez " << guess << "? \n2 Je vase cislo mensi nez " << guess << "? \n3 Je vase cislo rovno " << guess << "? \n";
    cin >> quest;

    while (quest != 1 && quest != 2 && quest != 3)
    {
        cout << "Napiste cislo 1 - 3, podle otazky, na ktero use chcete zeptat.";
        cin >> quest;
    }

    switch (quest)
    {case 1:
        if (num > guess)
        {
            cout << "ano";
        }
        else
        {
            cout << "ne";
        }
        break;
    case 2:
        if (num < guess)
        {
            cout << "ano";
        }
        else
        {
            cout << "ne";
        }
        break;
    case 3:
        if (num = guess)
        {
            cout << "ano \nVyhrali jste hru.";
            exit(0);
        }
        else
        {
            cout << "ne";
        }
        break;
    }

}

int main()
{
    string answ;

    cout << "Vyberte, kdo si bude myslet cislo (robot/clovek).\n";
    cin >> answ;
   
    if (answ == "robot")
    {
        PCG();
    }
    else if (answ == "clovek")
    {
        PLG();
    }

    return 0;
}


//vemte zdrojový kod a zkompirujte kompilátorem za pomocí g++ program.cpp -o program