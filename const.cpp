#include <iostream>

int main (){

    // Datos Personales De Tilin ( No se pueden cambiar )
 
    std::string Data = "El nombre del niño es: ";

    const std::string Nombre = "Tilin";

    std::string Data2 = "Su edad es: ";

    const int Edad = 10;
     
    std::string Data3 = "Y su cumpleaños es: ";

    const double Cumpleaños = 29.05;

    std::cout<< Data ;

    std::cout<< Nombre <<std::endl;

    std::cout<< Data2 ;

    std::cout<< Edad <<std::endl;

    std::cout<< Data3 ;

    std::cout<< Cumpleaños <<std::endl;

return 0;

}