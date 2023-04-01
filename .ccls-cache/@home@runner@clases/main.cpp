/*
autor: edwin sebastian pardo salamanca

crear 3 clases (persona, profesor, estudiante), que se pueda presentar. el estudiante que curse 9no o superior, puiede inscribirse en el curso de programacion. en el programa principal, se presenta los 3 objetos, si el estudiante puede o no hacer el curso de programacion 

-los datos miembros necesarios de la clase, son definidos por el programador
-la cantidad de metodos de cada clase, son definidos por el programador
 



*/
#include <iostream>
using namespace std;

// Clase persona para conocer el nombre
class Persona {
// Datos miembros PRIVADO
private:
string nombre;
  // El constructor, para pasar datos iniciales al objeto al ser instanciado
public:
Persona(string n ){
  nombre=n;
}
// Métodos miembros de la clase
void presentarse() { cout<<"mi nombre es "<<nombre; }
};
/****************************************************************/

//clase profesor para saber que enseña y se hereda la clase persona para saber tener los datos de persona 
class Profesor : public Persona {

// Datos miembros PRIVADO
private:
string enseña;

// El constructor, para pasar datos iniciales al objeto al ser instanciado
public:
Profesor (string en, string n  ){
  enseña=en;
  nombre=n;
}

// Métodos miembros de la clase
void presentarse() { cout<<"mi nombre es "<<nombre<< "y mi sere su profesor de "<<enseña; }
};

/*************************************************************************/

//clase profesor para saber cual es grado y se hereda la clase persona para saber tener los datos de persona 
class Estudiante : public Persona {

// Datos miembros PRIVADO
private:
int grado;

// El constructor, para pasar datos iniciales al objeto al ser instanciado
public:
Estudiante(int g, string n){ 
nombre=n;
grado=g;
}

// Métodos miembros de la clase
void presentarse() { cout<<"mi nombre es "<<nombre<< "y estoy en "<<grado<<" grado"; }

void puede_cursar_programacion(){ if(grado>8){
  cout<<"puede cursar el curso de programacion";
}
 }
}; 




int main() {

  //presentarse persona
string nom;

  //se piden los datos
cout<<"     persona      ";
  cout<<"ingrese nombre: ";
    cin>>nom;
  cout<<endl;

  //Se instancia el objeto persona
  Persona per(nom);
  per.presentarse();

  /******************************************************/

  string profesion, nomb;
cout<<"                   profesor";

  //se piden los datos
  cout<<"digite su nombre: ";
  cin>>nomb;
  cout<<endl;

  cout<<"digite su profesion: ";
  cin>>profesion;
  cout<<endl;

//Se instancia el objeto profesor
Profesor por(nom,profesion);
  por.presentarse();
cout<<endl;
  
  /***********************************************************/

  string nomb_estudiante;
  int grado_e;

cout<<"                   estudiante";

  //se piden los datos
  cout<<"digite su nombre: ";
  cin>>nomb_estudiante;
  cout<<endl;

  cout<<"digite su grado: ";
  cin>>grado_e;
  cout<<endl;

  //Se instancia el objeto profesor
  Estudiante est(grado_e, nomb_estudiante);
  est.presentarse();
  cout<<endl;
est.puede_cursar_programacion();
  
  return 0;
}