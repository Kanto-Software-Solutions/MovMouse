#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int SetPosCursor(int tam_Celda, int fila, int col, int inicial_x, int inicial_y){
    int x = inicial_x + ((tam_Celda) / 2 * col);
    int y = inicial_y + ((tam_Celda) / 2 * fila);   
    SetCursorPos(x, y);
    return true;
}
    

int main(){
    //Variables para el mov
    int tam_matriz;     //Tamaño n de una matri n*n
    int inicial_x;      //Distancia en pixeles donde inicia la matriz en
    int inicial_y;      //pantalla (x,y)
    int tam_celda;      //El tamaño de cada celda de la matriz en px

    int col     = 0;
    int fila    = 0;
    tam_matriz  = 9;
    tam_celda   = 100;
    inicial_x = 100;
    inicial_y = 100;


    while (true) {
        if (col >= 9) {
            fila++;
            col = 0;
        }
        if (fila >= 9) {
            fila = 0;
        }
        SetPosCursor(tam_celda, fila, col, inicial_x, inicial_y);
        cout << '[' << fila << ',' << col << ']' << endl;
        col++;
        Sleep(1);
    }
}
//Se debe establecer una matriz de 9 x 9. El movimiento del mouse debe estar limitado a este