#include <iostream>
#include <string>

void botonA(){

}

void botonB(){
    
}

void botonAB(){

}

int main(){

int tiempototal; 
char seriedeaccion;
char boton;
char seriedeaccion2 = std::toupper(seriedeaccion);


std:: cout<< "Incio del periodo autonomo del automata "<<std::endl; 
std::cout<< "Existen tres opciones: "<<std::endl;
std:: cout<< " "<<std::endl; 

do{
std:: cout<< "Opcion A: Tarda 10 segundo en realizarse "<<std::endl; 
std:: cout<< "Opcion B: Tarda 13 segundos en relizarse "<<std::endl; 
std:: cout<< "Opcion C: Tarda 15 segundo en relizarse "<<std::endl; 
std:: cout<< " "<<std::endl; 

std:: cout<< "Elige tu opcion: "<<std::endl; 
std:: cin>> seriedeaccion; 

  char seriedeaccion2 = std::toupper(seriedeaccion);
// Cada serie de accion imprimira: que hizo, en cuanto tiempo lo realizo cada accion y cuanto tiempo se tardo en total
//La serie de accion A serie de accion se centrara en que el autónomo avanze 3 metros
//Se detenga y despues mgire hacia la direccion donde comenzo para asi volver al lugar donde comenzo
if (seriedeaccion2 == 'A'){

tiempototal = 10; 
std:: cout<<"El autonomo avanzo tres metros, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El autonomo se detuvo y gire 180 grados, volviendo a la direccion donde empezo, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El autonomo avanzo tres metros volviendo al lugar donde empezo, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El tiempo total de accion fue de: "<< tiempototal<<" segundos"<<std::endl; 
std:: cout<<"Quedan 5 segundos del programa autonomo"<<std::endl; 
break; 
}

//La serie de accion B hara que el autónomo avanza 4 metros, se detenga, gire su propio eje volviendo a la misma posicion donde estaba
// Despues el autonomo retrodecera 2 metros y avanzara 4 metros.
else if (seriedeaccion2 == 'B'){
tiempototal = 13; 
std:: cout<<"El autonomo avanzo cuatro metros, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El autonomo se detuvo y gire 180 grados, volviendo a la direccion donde empezo, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El autonomo retrocedio 2 metros, tardo: 2 segundos"<<std::endl; 
std:: cout<<"El autonomo avanzo 4 metros, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El tiempo total de accion fue de: "<< tiempototal<< " segundos"<<std::endl; 
std:: cout<<"Quedan 2 segundos del programa autonomo"<<std::endl; 
break; 
}

//La serie de accion C, avanzara 5 metros y se detendra.
//Despues girara 90 grados a la derecha
//Avanzara 4 metros y se detendra
//Girara 180 grados y avanzara 4 metros 
else if (seriedeaccion2 == 'C'){
tiempototal = 15; 
std:: cout<<"El autonomo avanzo cinco metros, tardo: 5 segundos"<<std::endl; 
std:: cout<<"El autonomo se detuvo y giro 90 grados hacia la derecha,tardo: 3 segundos"<<std::endl; 
std:: cout<<"El autonomo avanzo 4 metros, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El autonomo se detuvo y giro 180 grados, tardo: 4 segundos"<<std::endl; 

std:: cout<<"El tiempo total de accion fue de: "<< tiempototal<< " segundos"<<std::endl; 
std:: cout<<"El tiempo de autonomo fue terminado completamente"<<std::endl; 
break; 
}

else if ( 'B' != seriedeaccion2 != 'A' && 'C' != seriedeaccion2){
    std::cout<<"Ingrese una opcion que exista"<<std::endl; 
}
}
while ('B' != seriedeaccion2 != 'A' && 'C' != seriedeaccion2);




//Inicio del programa teleoperado
std::cout<<""<<std::endl; 
std::cout<<"Ingrese T para pasar al programa teleoperado"<<std::endl; 
std::cin>> boton;
  char boton2 = std::toupper(boton);

if (boton2 == 'T' ){
std::cout<<"El programa teleoperado ha empezado"<<std::endl; 
}
 
std:: cout<< " "<<std::endl; 
 //Menu de botones 
std::cout<<"Exiten tres botones"<<std::endl; 
std::cout<<"El boton A: Controla el lado derecho de un autonomo"<<std::endl; 
std::cout<<"El boton B: Controla el lado izquierdo del autonomo"<<std::endl; 
std::cout<<"El boton AB: Seleccionas los dos botones anteriores, haciendo que el autonomo avanze completamente "<<std::endl; 




return 0;
}
