#include <iostream>
#include "variables.h"
using namespace std;

int menu();
void start();
void addgrade();
void showgrades();
float notaAlta();
float lowgrades();

int menu(){
int option;
system("cls||clear");
cout << "1. ingresar notas" << endl;
cout << "2. mostrar notas" << endl;
cout << "3. nota mas alta" << endl;
cout << "4. nota mas baja" << endl;
cout << "5. promedio" << endl;
cout << "6. salir" << endl;
cout << "ingrese una opcion:" << endl;
cin >> option;
return option;

}

void start(){
    int option;
    while (option !=6){
        option=menu();
        switch(option){
            case 1:
            cout<< "ingresar notas:" << endl;
            addgrade();
            system("pause");
break;
case 2:
showgrades();
break;
case 3:
notaAlta();
break;
case 4:
lowgrades();
break;
            case 6: 
            cout<< "salir" <<endl;
            system("pause");
            break;

            default:
            cout<< " opcion no valida"<< endl;
            system("pause");
            break;

        }
    }
}

void addgrade(){
    if(position < MAX){
        cout << "ingrese la nota: ";
        cin >> grades[position];
        position++;

    }else{
        cout<< "no hay espacio para mas notas" << endl;
    }
}

void showgrades(){
    cout<< "mostrar notas"<< endl;
    for(int i = 0; i < position; i++){
        cout<< "nota "<< i + 1 << ": "<< grades[i] << endl;
    }
    system("pause");
}

float notaAlta(){
    float mayor= grades[0];
    for(int i = 0; i< position; i++){
        if(grades[i]> mayor){
            mayor= grades[i];
        }
    }
    cout<< "la nota mas alta es: "<< mayor << endl;
    system("pause");
   
}

float lowgrades(){
    float low= grades[0];
    for(int i=0; i < position; i++ ){
        if(grades[i]< low){
            low=grades[i];
        }
    }
    cout<< " la nota mas baja es: " << low << endl;
    system("pause");
}