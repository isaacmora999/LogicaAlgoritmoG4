#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int num, cont = 0;
   int i =1;
   cout << "digite un numero: ";
   cin >> num;

   while(i <= num ){

   if(num%i == 0) {
    
   cont++;
   }
    i++;
   }
if (cont == 2){
    cout << "el numero es primo" << endl;
}else
{
    cout << "el numero no es primo " << endl;

}
return 0;
    }
    
