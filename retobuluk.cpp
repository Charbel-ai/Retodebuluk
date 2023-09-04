#include <iostream>
#include <string>

// Cada serie de accion imprimira: que hizo, en cuanto tiempo lo realizo cada accion y cuanto tiempo se tardo en total
// Funciones para cada serie de accion

int tiempototal; 
//Esta serie de accion dura 9 segundos - esto se mostrar al momento de dar las opciones
//La serie de accion A serie de accion se centrara en que el autónomo avanze 3 metros
//Se detenga y despues mgire hacia la direccion donde comenzo para asi volver al lugar donde comenzo
void seriedeaccionA (){
std:: cout<<"El autonomo avanzo tres metros, 3 segundos"<<std::endl; 
std:: cout<<"El autonomo se detuvo y gire 180 grados hacia la derecha, volteando a la direccion donde empezo, 4 segundos"<<std::endl; 
std:: cout<<"El autonomo avanzo tres metros volviendo al lugar donde empezo, 3 segundos"<<std::endl; 
std:: cout<<"El tiempo total de accion fue de: " << tiempototal <<std::endl; 


int tiempototal = 10; 
}


//Esta serie de accion dura 10 segundos
//La serie de accion B hara que el autónomo avanza 4 metros, se detenga, gire su propio eje volviendo a la misma posicion donde estaba
// Despues el autonomo retrodecera 2 metros y avanzara 4 metros.
void seriedeaccionB (){

int tiempototal = 10; 
}

//Esta serie de accion dura 15 segundos
//La serie de accion C, avanzara 5 metros y se detendra enfrente de una pieza. 
//Despues doblara sus brazos, tomara las piezasy las movera a otro lugar. 
// Devolvera sus brazos a sus posicion adecuada, girara 180 grados volviendo a su posicion original.
//Avanzara 5 metros volviendo al lugar donde empezo 
void seriedeaccionC (){

int tiempototal = 15; 
}


int main(){

char seriedeaccion;

std:: cout<< "Estas son las series de acciones que tu automata puede reliazar de forma autonoma "<<std::endl; 
std::cout<< "Existen tres opciones: "<<std::endl;

std:: cout<< " "<<std::endl; 

std:: cout<< "Opcion A: Tarda 9 segundo en realizarse "<<std::endl; 
std:: cout<< "Opcion B: Tarda 10 segundos en relizarse "<<std::endl; 
std:: cout<< "Opcion C: Tarda 15 segundo en relizarse "<<std::endl; 

std:: cout<< " "<<std::endl; 

std:: cout<< "Elige tu opcion: "<<std::endl; 
std:: cin>> seriedeaccion; 


if (seriedeaccion == 'A'){

    void seriedeaccionA();

}

else if (seriedeaccion == 'B'){
    void seriedeaccionB();

}

else if (seriedeaccion == 'C'){
    void seriedeaccionC();

}

//Inicio del programa teleoperado
std::cout<<"Ingrese T para pasar al programa teleoperado"<<std::endl; 



}
