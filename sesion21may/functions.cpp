#include <iostream>
#include "variables.h"
using namespace std;

/*
C- CREATE
R- READ
U- UPDATE
D- DELETE
*/

/*CREATE*/
void menu();
void addReg();
void showReg();
void addReg(){



cout << "datos del estudiante\n";
cout << "CIF";
scanf(" %[^\n]", people[pos].cif);
cout << "NOMBRES: ";
scanf(" %[^\n]", people[pos].name);
cout << "APELLIDOS: ";
scanf(" %[^\n]", people[pos].lastname);
cout << "año";
scanf(" %[^\n]", people[pos].year);
pos++;
}

/*READ*/
void showReg(){
    for(int i=0; i < pos; i++){
        printf("nombre: %s %S \nAño: %d"
        , people[i].name, people[i].lastname
        , people[i].year);
        cout << "*******************************\n";
    }
}

void menu(){
    int op=0;
    do{
system("cls||clear");
cout << "1. agregar \n";
cout << "2.mostrar \n";
cout << "3. salir \n";
cin >> op;
switch (op)

{
case 1:
addReg();
system("pause");
break;

case 2:
showReg();
system("pause");
break;

 case 3:
 break;
default:
    break;
}
    }while (op!=3);        
    }
    
