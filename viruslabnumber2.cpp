#include <iostream>
#include <string>
#include "virus.h"
#include "invecteditem.h"
#include "formulacalculation.h"
#include "otherfunction.h"

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "Russian");
       if(argc!=3)
    {
        cout<<"Неверное колличество параметров!"<<endl;
        return 1;
    }
    cout << "Добро пожаловать в программу, которая поможет вам сымитировать модель вируса на конкретном городе!" << endl;
    menu(argv[1],argv[2]);
    return 0;
}
