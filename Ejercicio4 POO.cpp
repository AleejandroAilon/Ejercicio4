#include <iostream>
#include <string>
using namespace std;

class Persona{
private:
    string nombre, ocupacion;
    int edad;
    
public:
    Persona(string n, int e, string o) : nombre(n), edad(e), ocupacion(o){}
    
    void setNombre(string n){
        nombre = n;
    }
    
    void setEdad(int e){
        edad = e;
    }
    
    void setOcupacion(string o){
        ocupacion = o;
    }
    
    string getNombre() const{
        return nombre;
    }
    
    int getEdad() const{
        return edad;
    }
    
    string getOcupacion() const{
        return ocupacion;
    }
    
    void mostrarInfo() const{
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Ocupacion: " << ocupacion << endl;
    }
};

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    double promedioCalificaciones;

public:
    Estudiante(string n, int e, string o, int numEst, double prom) : Persona(n, e, o), numeroEstudiante(numEst), promedioCalificaciones(prom) {}

    void setNumeroEstudiante(int numEst) {
        numeroEstudiante = numEst;
    }

    void setPromedioCalificaciones(double prom) {
        promedioCalificaciones = prom;
    }

    int getNumeroEstudiante() const {
        return numeroEstudiante;
    }

    double getPromedioCalificaciones() const {
        return promedioCalificaciones;
    }

    void mostrarInformacionEstudiante() const {
        cout << "Numero de Estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de Calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    Estudiante estudiante("Jonathan", 21, "Estudiante", 1001, 8.5);

    cout << "Informacion de la persona:" << endl;
    estudiante.mostrarInfo();
    cout << endl;

    estudiante.mostrarInformacionEstudiante();

    return 0;
}
