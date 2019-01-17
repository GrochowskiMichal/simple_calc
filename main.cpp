#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char wybor;

int main()
{
    for(;;)
    {
    cout << "Podaj 1 liczbe:" << endl;
    cin>> x;
     cout << "Podaj 2 liczbe:" << endl;
    cin>> y;

    {
        cout<<"podaj liczbe!";
    }
    cout<<endl;
    cout<<"MENU G£ÓWNE"<<endl;
    cout<<"----------------"<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mno¿enie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cout<<"5.Zakoñcz"<<endl;
    cout<<endl;
    wybor=getch();

    switch(wybor )
    {
    case '1':
        {
            cout<<"suma: "<<x+y;
        }
        break;

    case '2':
        {
            cout<<"róznica: "<<x-y;
        }
        break;

    case '3':
        {
            cout<<"iloczyn: "<<x*y;
        }
        break;

    case '4':
        {
            if(y==0) cout<<"nie dzielimy przez 0 !";
            else
            cout<<"iloraz: "<<x/y;
        }
        break;

    case '5':
        exit(0);

    default:
    {
            cout<<"b³êdny znak, brak takiej opcji w menu!";
    }
    break;
    }
    getchar();getchar();
    system("cls");



    }
    return 0;
}
