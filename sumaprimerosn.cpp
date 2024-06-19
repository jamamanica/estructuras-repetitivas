//Nombre: Mamani Catacora, Johan Anibal
#include<iostream>
using namespace std;
int main(){
    int n, s, i;
    cout<<"Numeros a sumar: ";
    cin>>n;
    s=0;
    i=1;
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    cout<<"La sumatoria es: "<<s<<endl;
    return 0;
}