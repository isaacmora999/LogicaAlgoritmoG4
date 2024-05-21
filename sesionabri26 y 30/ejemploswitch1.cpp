/*leer x cantidad de numeros e imprimir
la suma de dichos numeros */
#include <iostream>

using namespace std;

#define MAX 100

// variables globales
int nums[MAX];
int pos = 0;

void agregarNum(int num);
int sumar(int suma, int pos);

void agregarNum(int num)
{
    if (pos < MAX)
    {
        nums[pos] = num;
        pos++;
    }
    else{

    cout << "no hay espacio para almacenar" << num << endl;
}
}

int sumar(int suma, int elemAct){
    if(elemAct == -1){
        return suma;
    }

    suma += nums[elemnAct];
    sumar(suma, elemAct -1);
}
void menu()
{
    int op,num;

    cout << "1. Ingresar numero:\n";
    cout << "2. sumar.\n";
    cout << "3. salir.\n";
    cout << "digite su opcion: ";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "agregar numero.";
        cout << "dime un numero: ";
        cin >> num;
        agregarNum(num);

        break;

    case 2:
        cout << "sumar: ";
        cout << "la suma es" << sumar(suma, pos -1)<< endl;
        break;

    case 3:
        cout << "salir" << endl;
        break;

    default:
        cout << "opcion invalida....";
        break;
    }
    if (op != 3)
    {
        menu();
    }
}
main()
{
    menu();
}