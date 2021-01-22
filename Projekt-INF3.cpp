#include <iostream>
#include <sstream>
#include <time.h>  
#include <ctype.h>
using namespace std;

void PCGuesser()
{
    string answer;
    int a[500];
    int mid = 500;
    int prevmax = 1000;
    int prevmin = 1;

    cout << "Vyberte si cislo a stisknete libovolne tlacitko pro pokracovani. \n";
    system("pause");

    while (true)
    {
        cout << "Je vase cislo vetsi nez " << mid << endl;

        while (answer != "ano" && answer != "ne")
        {
            cout << "Odpovidejte prosim ve formatu ano/ne. \n";
            cin >> answer;
        }

        int arraynum = -1;

        if (answer == "ne")
        {
            for (int e = prevmin; e < mid + 1; e++)
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
            cout << "Tvoje cislo je " << prevmax << endl;
            system("pause");
            exit(0);
        }

        answer = "";
    }
}

void HumanGuesser()
{
    srand(unsigned(time(0)));
    int num = rand() % 1000;
    int question = 0;
    int i = 2;

    cout << "Myslim si cislo... \n";
    
    while (i > 1)
    {
        int guess = 0;
        int question = 4;

        cout << "Napiste cislo, se kterym chcete srovnavat. \n";

        while (guess > 1000 || guess < 1)
        {
            cout << "Cislo musi byt mezi 1 a 1000. \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> guess;
        }

        cout << "Vyberte si, na co se chcete zeptat: \n1 Je vase cislo vetsi nez " << guess << "? \n2 Je vase cislo mensi nez " << guess << "? \n3 Je vase cislo rovno " << guess << "? \n";

        while (question > 3 || question <1)
        {
            cout << "Napiste cislo 1 - 3, podle otazky, na kterou se chcete zeptat. \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> question;
        }

        switch (question)
        {
        case 1:
            if (num > guess)
            {
                cout << "ano\n";
            }
            else
            {
                cout << "ne\n";
            }
            break;
        case 2:
            if (num < guess)
            {
                cout << "ano\n";
            }
            else
            {
                cout << "ne\n";
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
                cout << "ne\n";
            }
            break;
        }

    }
}

int main()
{
    string answ;

    cout << "Vyberte, kdo si bude myslet cislo (robot/clovek).\n";
    cin >> answ;
   
    if (answ == "robot")
    {
        HumanGuesser();
    }
    else if (answ == "clovek")
    {
        PCGuesser();
    }
    else
    {
        cout << "Odpovidejte pouze ve formatu robot/clovek. \n";
    }

    return 0;
}