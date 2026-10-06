#include <iostream>

void rayas(); //prototipo

int main(){
    rayas(); 
    std::cout<< "\n     MENU PRINCIPAL     \n";
    std::cout << "1. Jugar \n";   //Llamada a la función
    std::cout << "2. Opciones \n";
    std::cout << "3. Salir \n";
    rayas();
    return 0;
}

void rayas(){ // Declarando procesos de la función
    for (int i = 1; i < 40; i++){
        std::cout << "=";
    }
}