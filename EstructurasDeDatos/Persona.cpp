#include "Persona.hpp"

Persona::Persona(int edad)
{
    //El Dni y el genero se establecen de forma automatica y la edad es un parametro del constructor
    this->edad=edad;
}
int Persona::getEdad(){
    return this->edad;

}

void Persona::mostrar(){
    cout << "Su edad es de  "  << getEdad() << endl;
    cout << "Su genero es " << esMujer() << endl;
}
bool Persona::esMujer() {
    return this->genero;
}

Persona::~Persona()
{
}