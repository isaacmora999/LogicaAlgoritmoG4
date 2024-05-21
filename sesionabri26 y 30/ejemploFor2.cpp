/*leer 5 numeros y mostrarlos*/

#include<iostream>

using namespace std;

#define MAX 5
int numeros[MAX];
int fila;

void agregar(int num)
void mostrar();

int main(int argc, char const *argv[])
{
    int cant;
    int num;
    cout<<"dime cuantos # deseas ingresar:";
    cin>> cant;
    for( int i=0; i <cant; i++){
        cout<<"dime un #: ";
        cin>> num;
        agregar(num);
    }
    cout<<"mostrar elementos\n";
    mostrar();

}
 void agregar(int num){
    if(fila >=MAX){
        cout<< "no se puede agregar mas numeros"<< endl;

    }else{
        numeros[fila]=num;
        fila++;
    }
 }
 void mostrar(){
    if(fila ==0){
        cout<< "no hay ,as elementos"<<endl;

    }
    else{
        for(int i=0; i <fila; i++){
            cout << numeros[i] << endl;
        }
    }
 }