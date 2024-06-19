//Nombre: Mamani Catacora, Johan Anibal
#include<iostream>
using namespace std;
int main(){
    int n, s, i;
    cout<<"Ingrese la cantidad de numeros a sumar: ";
    cin>>n;
    s=0;
    i=1;
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    cout<<"La sumatoria de los "<<n<<" primeros numeros es: "<<s<<endl;
    return 0;
}