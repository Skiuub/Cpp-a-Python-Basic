#include <iostream> //se añaden los archivos que se quieren incluir dentro de nuestra funcion
int main ()  //se define una funcion declarando su tipo, en este caso se define una funcion de enteros
{   //usamos corchetes para encapsular toda nuestra funcion en estos
    return 0; //retornamos un valor 0 para decir que es el fin de nuestra funcion
} //cerramos los corchetes que marcan el final de la funcion


    
/*
En c++ las funciones funcionan en base a corchetes, esto quiere decir que todo lo que haya dentro de estos son lo que representa la funcion como tal,
bajo esta premisa entonces podemos decir lo siguiente: 
    -No importan las identaciones (tabs)
    -Si quisieramos podriamos escribir todo dentro de la misma linea
Entonces bajo esta premisa podemos denotar que el siguiente ejemplo es lo mismo que la funcion de arriba
*/

int funcion(){printf("Holamundo"); return 0;}

//Asi como tambien podemos decir que lo siguiente es igual que lo de arriba

int funcion2(){
printf("Hola mundo")
    return 0;
}

/*
Ya, pero por que pasa esto?
Esto pasa porque el compilador interpreta las lineas de codigo en base a los operadores logicos que hay, de esta forma es que cuando pasamos los corchetes 
nos referimos a todo lo que hay dentro de una funcion, por esto mismo podemos decir que el compilador entiende como linea de codigo todo lo que hay hasta llegar
a un ";" (punto y coma), entonces todo lo que haya separado bajo este operador, cuenta dentro de la misma linea de codigo

*/
