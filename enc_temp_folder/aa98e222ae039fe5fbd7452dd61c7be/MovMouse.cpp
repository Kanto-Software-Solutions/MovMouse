#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

//int CalcularPosCursor(int fila, int col, int inicial_x, inicial_y)

int main(int px_altura){
    //Variables para el mov
    int tam_Celda = px_altura / 9;
    int x, y;


    std::cout << "Hello World!\n";
    while (true) {
        cout << "a" << endl;
        cin >> x >> y;
        SetCursorPos(x, y);
    }
}
//Se debe establecer una matriz de 9 x 9. El movimiento del mouse debe estar limitado a este