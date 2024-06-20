//Nombre: Mamani Catacora, Johan Anibal
#include<iostream>
using namespace std;
int main(){
    int n, s=0;
    cout<<"Ingrese la cantidad de numeros a sumar: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    cout<<"La sumatoria de los "<<n<<" primeros numeros es: "<<s<<endl;
    return 0;
}