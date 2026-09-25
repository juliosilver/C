#include <iostream>

void tablaDel7(); // declarando Prototipo

int main(){
    tablaDel7(); // Llamando a la función 
    return 0;
}

void tablaDel7(){  //Declarando el procedimiento de la función
    for (int i = 1; i<=10; i++){
        std::cout << "7 x " << i << " = " << 7 * i << "\n";
    }
}