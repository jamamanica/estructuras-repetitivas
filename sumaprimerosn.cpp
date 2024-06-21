//Nombre: Mamani Catacora, Johan Anibal
#include<iostream>
using namespace std;
int main(){
    int n, s=0;
    cout<<"<<SUMA DE NUMEROS PARES>>"<<endl;
    cout<<"Ingrese la cantidad de numeros a sumar: ";
    cin>>n;
    for(int i=2;i<=2*n;i=i+2){
        s=s+i;
    }
    cout<<"La sumatoria de los "<<n<<" primeros numeros pares es: "<<s<<endl;
    return 0;
}