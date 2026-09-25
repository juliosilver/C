#include <iostream>

void rayas(); //prototipo

int main(){
    rayas();    //Llamada a la función
    return 0;
}

void rayas(){ // Declarando procesos de la función
    for (int i = 1; i < 40; i++){
        std::cout << "-";
    }
}