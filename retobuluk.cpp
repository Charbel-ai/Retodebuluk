#include <iostream>
#include <string>

int tiempototal; 
int tiempolimite = 147;
int tiempo;
int grados; 
std::string direccion;  
char seriedeaccion;
char seriedeaccion2 = std::toupper(seriedeaccion);
char boton;

// El boton A esta conectado a los controladores del 1 al 4, conectados a motores del chasis, es un spark max
// Este boton esta conectado al puerto CAN del roborio 
void botonA (){
  std::cout<<"Boton A: Control del movimiento del autonomo (adelante,atras,izquierda,derecha)"<<std::endl; 
  std::cout<<"Ingrese la direccion: "<<std::endl; 
  std::cin>>direccion; 
  std::cout<<"Ingrese el tiempo en segundos: "<<std::endl; 
  std::cin>>tiempo; 
  std::cout<<""<<std::endl; 
  std::cout<<"El autonomo se ha movido hacia "<<  direccion << " por "<< tiempo << " segundos"<<std::endl; 

}

//El boton B esta conectado a el controlador numero 5, para el motor planetario, es un talon srx
//Esta conectado al puerto CAN del roborio
void botonB(){
  std::cout<<"Boton B: Controla el giro del autonomo"<<std::endl; 
  std::cout<<"Ingrese la direccion: "<<std::endl; 
  std::cin>>direccion; 
  std::cout<<"Ingrese el tiempo en segundos: "<<std::endl; 
  std::cin>>tiempo; 
  std::cout<<"Ingrese los grados que gire el autonomo: "<<std::endl; 
  std::cin>>grados; 
  std::cout<<""<<std::endl; 
  std::cout<<"El autonomo a girado hacia la "<<  direccion << " " << grados << " grados, por "<< tiempo << " segundos"<<std::endl; 
   
}



int main(){

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
std::cout<<"El programa autonomo ha terminado"<<std::endl; 
std::cout<<"Inicion del programa teleoperado"<<std::endl; 

std:: cout<< " "<<std::endl; 

//Menu de botones 
std::cout<<"Exiten tres botones"<<std::endl; 
std::cout<<"El boton A: Controla el avanze del robot (adelante,atras,izquierda,derecha)"<<std::endl; 
std::cout<<"El boton B: Controla el giro del robot"<<std::endl; 
std::cout<<""<<std::endl;
 
 
//Esta parte del codigo se repetira hasta que el tiempo de teleoperado sea rebasado o se complete
 while(tiempototal <= tiempolimite ){
std::cout<<"Elige un boton"<<std::endl;
std::cin>> boton; 
char boton2 = std::toupper(boton);

if (boton2 == 'A'){
  botonA();
}

else if (boton2 == 'B'){
 botonB();
}
else if ('B' != boton2 != 'A'){
  std::cout<< "Ingrese un boton que exista"<<std::endl; 
}

tiempototal += tiempo; 
std::cout<<"El tiempo de teleoperado es de "<< tiempototal << " segundos "<<std::endl;

if (tiempototal > 147){
  std::cout<<"El tiempo de teleoperado ha sido rebasado"<<std::endl; 
  break;
 }


 }
 
 return 0; 
}

 
 





//-Acomodar el programa para que una parte quite y ponga las llantas
//Cuando quede cierto tiempo, mostrar que acciones realizar, segun recomendaciones de scouting




