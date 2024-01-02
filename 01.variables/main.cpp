#include<iostream>
using namespace std;



int main() {
 
    // Declaración de variables
    int edad;            // Variable para almacenar la edad
    double altura;       // Variable para almacenar la altura
    char inicial;        // Variable para almacenar la inicial del nombre
    bool es_estudiante;  // Variable booleana para verificar si es estudiante

    // Inicialización de variables
    edad = 25;
    altura = 1.75;
    inicial = 'J';
    es_estudiante = true;

    // Mostrar valores en la consola (vemos mas de esto en la seccion "I/O de datos")
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Inicial del nombre: " << inicial << std::endl;
    std::cout << "¿Es estudiante? " << (es_estudiante ? "Sí" : "No") << std::endl;

    return 0;
}
