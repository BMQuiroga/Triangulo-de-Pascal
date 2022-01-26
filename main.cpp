#include <iostream>

using namespace std;

void impresora(int fila);

int recursiva(int fila, int columna);

int main(){
    int filas;
    cin>>filas;
    for (int i=0; i<filas; i++){
        impresora(i+1);
    }
    return 0;
}

void impresora(int fila){
    for (int i=0; i<fila; i++){
        cout << recursiva(fila, i) << " ";
    }
    cout << endl;
}

int recursiva(int fila, int columna){
    int suma=0;
    if(columna==0)
        return 1;
    //if(columna==1)
    //    return fila;//PARA AHORRAR TIEMPO DE PROCESADO
    else{
        for (int i=1; i<fila; i++){
            if(fila>i)
                suma+=recursiva(fila-i,columna-1);
        }
    }
    return suma;
}