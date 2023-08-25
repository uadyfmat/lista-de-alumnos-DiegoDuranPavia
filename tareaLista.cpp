#include <iostream>
#include <cstring>
struct alumno {
    char nombreAlumnoCompleto[75];
    int creditosAprobatorios;
    int semestreEquivalente;
};
struct nodo{
    alumno datos alumno;//algo raro pasa aqui revisar
    nodo* siguiente;
};
//funcion
alumno* crearAlmuno(const char*,int,int);
nodo* crearNodo(alumno*);
int nodoOrdenado();//revisar como hacer este que no recuerdo
void imprimir(nodo);
int main(){
    //crear 5 instancias de estructuras Alumno
    //digamos que 25 creditos es el equivalente a un semeste
    alumno* alumno1=crearAlumno("pedrito zanches",75,3);//revisar tambien
     alumno* alumno2=crearAlumno("aquiles brinco",100,4);
      alumno* alumno3=crearAlumno("messi campeon",58,2);
       alumno* alumno4=crearAlumno("oppenhaimer peliculon",145,5);
        alumno* alumno5=crearAlumno("profe cambranes",225,9);
    //crear la lista con las 5 instancias de Alumno
    //insertar de forma ordenada de acuerdo al número de créditos (descendente)
    //imprimir la lista
}