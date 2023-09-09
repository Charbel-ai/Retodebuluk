#include <iostream>
#include <string>

//Arreglar:
//Agregar mecanismos, si ingresa algo que no exista tanto en parte autonoma como teleoperada que lo devuelva
//Mostrar otra vez los botones
//Investigar como funcionan los pistones para los mecanismos 
int tiempototal; 
int tiempolimite = 147;
int tiempo;
int grados; 
std::string direccion;  
char decision; 
char seriedeaccion;
char seriedeaccion2 = std::toupper(seriedeaccion);
char boton;


// El boton A esta conectado a los controladores del 1 al 4, conectados a motores del chasis, es un spark max
// Este boton esta conectado al puerto CAN del roborio 
void botonA (){
  std::cout<<"Boton A: Control del movimiento del autonomo (adelante,atras,izquierda,derecha)"<<std::endl; 
   
   //Codigo que se repite hasta que el usuario ingrese una direccion valida 
   do{
  std::cout<<"Ingrese la direccion: "<<std::endl; 
  std::cin>>direccion; 
  if( (direccion != "izquierda" ) && (direccion != "derecha" ) && (direccion != "atras" ) && (direccion != "adelante" )){
    std::cout<<"Ingrese una direccion que exista"<<std::endl; 
  }
   }
   while ((direccion != "izquierda" ) && (direccion != "derecha" ) && (direccion != "atras" ) && (direccion != "adelante" )); 

  std::cout<<"Ingrese el tiempo en segundos: "<<std::endl; 
  std::cin>>tiempo; 
  std::cout<<""<<std::endl; 
  std::cout<<"El autonomo se ha movido hacia "<<  direccion << " por "<< tiempo << " segundos"<<std::endl; 

}

//El boton B esta conectado a el controlador numero 5, para el motor planetario, es un talon srx
//Esta conectado al puerto CAN del roborio
void botonB(){
  std::cout<<"Boton B: Controla el giro del autonomo"<<std::endl; 
 
  //Codigo que se repite hasta que el usuario ingrese una direccion valida 
   do{
  std::cout<<"Ingrese la direccion: "<<std::endl; 
  std::cin>>direccion; 
  if( (direccion != "izquierda" ) && (direccion != "derecha" ) && (direccion != "atras" ) && (direccion != "adelante" )){
    std::cout<<"Ingrese una direccion que exista"<<std::endl; 
  }
   }
   while ((direccion != "izquierda" ) && (direccion != "derecha" ) && (direccion != "atras" ) && (direccion != "adelante" )); 

  std::cout<<"Ingrese el tiempo en segundos: "<<std::endl; 
  std::cin>>tiempo; 
  std::cout<<"Ingrese los grados que gire el autonomo: "<<std::endl; 
  std::cin>>grados; 
  std::cout<<""<<std::endl; 
  std::cout<<"El autonomo a girado hacia la "<<  direccion << " " << grados << " grados, por "<< tiempo << " segundos"<<std::endl; 
   
}

void botonC(){
  std::cout<<"El boton C: Estira los pistones y toma una llanta"<<std::endl; 
  std::cout<<"Los pistones se han estirado"<<std::endl; 
  std::cout<<"Has tomado una llanta"<<std::endl; 
  std::cout<<"El tiempo de duracion fue de: 1 segundos  "<<std::endl; 
  std::cout<<"Escoge el boton D para contraer los pistones y colocar la llanta en el elevador "<<std::endl;
  tiempo = 1; 
}
void botonD(){
  std::cout<<"El boton D: Contrae los pistones y coloca la llanta en el elevador "<<std::endl; 
  std::cout<<"Los pistones se han contraido : "<<std::endl; 
  std::cout<<"Has colocado una llanta en el elevador"<<std::endl; 
  std::cout<<"El tiempo de duracion fue de: 3 segundo  "<<std::endl; 
  tiempo = 3; 
 
}



int main(){

std:: cout<< "------ RETO BULUK ------"<<std::endl; 
std:: cout<< "Incio del periodo autonomo del robot "<<std::endl; 
std::cout<< "Existen tres opciones: "<<std::endl;
std:: cout<< " "<<std::endl; 

do{
std:: cout<< "Opcion A: Tarda 10 segundo en realizarse y realiza funciones basicas del robot "<<std::endl; 
std:: cout<< "Opcion B: Tarda 13 segundos en relizarse y realiza funciones basicas del robot"<<std::endl; 
std:: cout<< "Opcion C: Tarda 15 segundo en relizarse, indentifica y coloca una llanta"<<std::endl; 
std:: cout<< " "<<std::endl; 

std:: cout<< "Elige tu opcion: "<<std::endl; 
std:: cin>> seriedeaccion; 

  char seriedeaccion2 = std::toupper(seriedeaccion);
// Cada serie de accion imprimira: que hizo, en cuanto tiempo lo realizo cada accion y cuanto tiempo se tardo en total
//La serie de accion A serie de accion se centrara en que el autónomo avanze 3 metros
//Se detenga y despues mgire hacia la direccion donde comenzo para asi volver al lugar donde comenzo
if (seriedeaccion2 == 'A'){

tiempototal = 10; 
std:: cout<<"------ Serie de accion A ------"<<std::endl; 
std:: cout<<"El robot avanzo tres metros, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El robot se detuvo y gire 180 grados, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El robot avanzo tres metros volviendo al lugar donde empezo, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El robot total de accion fue de: "<< tiempototal<<" segundos"<<std::endl; 
std:: cout<<"Quedan 5 segundos del programa autonomo"<<std::endl; 
break; 
}

//La serie de accion B hara que el autónomo avanza 4 metros, se detenga, gire su propio eje volviendo a la misma posicion donde estaba
// Despues el autonomo retrodecera 2 metros y avanzara 4 metros.
else if (seriedeaccion2 == 'B'){
tiempototal = 13; 
std:: cout<<"------ Serie de accion B ------"<<std::endl; 
std:: cout<<"El robot avanzo cuatro metros, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El robot se detuvo y gire 180 grados, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El robot retrocedio 2 metros, tardo: 2 segundos"<<std::endl; 
std:: cout<<"El robot avanzo 4 metros, tardo: 4 segundos"<<std::endl; 
std:: cout<<"El tiempo total de accion fue de: "<< tiempototal<< " segundos"<<std::endl; 
std:: cout<<"Quedan 2 segundos del programa autonomo"<<std::endl; 
break; 
}

//La serie de accion C, primero identificara donde esta la llanta
//Despues  el robot se coloca en posicon a la llanta
//Al estar en posicion, los pistones se estiran y con el velcro se pegan a la llanta, se contraen y posicionan la llanta
//Al tener la llanta, el elevador empieza a funcionar y eleva la llanta a la altura del coche
// Al estar a la altura, los pistones se vuelven a estirar y pegan la llanta al coche con el velcro
else if (seriedeaccion2 == 'C'){
tiempototal = 15; 
std:: cout<<"------ Serie de accion C ------"<<std::endl; 
std:: cout<<"El robot ha identificado la posicion de la llanta y se ha colocado frente a ella, tardo: 1 segundos"<<std::endl; 
std:: cout<<"Los pistones se han estirado, pegandose a la llanta,tardo: 2 segundos"<<std::endl; 
std:: cout<<"Los pistones se han contraido y han dejado la llanta en posicion con el elevador, tardo: 3 segundos"<<std::endl; 
std:: cout<<"El robot ha indentificado el coche y se ha puesto en posicion a este, tardo: 2 segundos"<<std::endl; 
std:: cout<<"El elevador ha empezado a funcionar, a elevado la llanta a la altura del coche, tardo: 3 segundos"<<std::endl; 
std:: cout<<"Los pistones se han estirado y pegado la llanta al coche usando el velcro q ue tienen, tardo: 3 segundos"<<std::endl; 
std:: cout<<"Los pistones se han contraido, tardo: 1 segundos"<<std::endl; 
std:: cout<<"El tiempo total de accion fue de: "<< tiempototal<< " segundos"<<std::endl; 
std:: cout<<"El tiempo de autonomo ha sido completado con los 15 segundos dados"<<std::endl; 
break; 
}

if ( ( seriedeaccion2 != 'B') && (seriedeaccion2 != 'A') && (seriedeaccion2 != 'C')){
    std::cout<<"Ingrese una opcion que exista"<<std::endl; 
}
}
while ((seriedeaccion2 != 'B') && (seriedeaccion2!= 'A') && (seriedeaccion2 != 'C'));




//Inicio del programa teleoperado
std::cout<<""<<std::endl; 
std::cout<<"El programa autonomo ha terminado"<<std::endl; 
std::cout<<""<<std::endl; 
std::cout<<"------ Inicio del programa teleoperado ------"<<std::endl; 
std:: cout<< " "<<std::endl; 

//Menu de botones 
//Esta parte del codigo se repetira hasta que el tiempo de teleoperado sea rebasado o se complete
 while(tiempototal <= tiempolimite ){
std::cout<<""<<std::endl; 
std::cout<<"------ BOTONES ------"<<std::endl; 
std::cout<<"El boton A: Controla el avanze del robot (adelante,atras,izquierda,derecha)"<<std::endl; 
std::cout<<"El boton B: Controla el giro del robot"<<std::endl; 
std::cout<<"El boton C: Estira los pistones"<<std::endl; 
std::cout<<"El boton D: Contrae los pistones"<<std::endl; 
std::cout<<""<<std::endl;
std::cout<<"Elige un boton"<<std::endl;
std::cin>> boton; 
char boton2 = std::toupper(boton);

if (boton2 == 'A'){
  botonA();
}

else if (boton2 == 'B'){
 botonB();

}

else if (boton2 == 'C'){
  botonC();
}

else if (boton2 == 'D'){
  botonD(); 

}

if ((boton2 != 'A') && (boton2 != 'B' && (boton2 != 'C') && (boton2 != 'D'))){
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

 




