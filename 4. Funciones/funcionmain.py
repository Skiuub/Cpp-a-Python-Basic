# Definicion de una funcion en python
# para definir una funcion usamos el identificador "def" seguido de "nombreDeLaFuncion()" y un ":"
def main():
    return 0
#al terminar la funcion retornamos un 0 al igual que en c++

# IMPORTANTE
# def main():
#     esto esta dentro de la funcion
# esto esta fuera de la funcion y da un error
#     return 0
#
# Python no funciona con llaves, funciona con identaciones
# Esto quiere decir que cuando definas una funcion uses el "enter" y te asegures de usar el "tab" para que todo quede dentro de una funcion
# ejemplo de esto es lo siguiente

def funcion():
    print("Estoy dentro de la funcion ")
print("Estoy fuera de la funcion")

# De esta misma forma se entiende por ejemplo que los if y los ciclos funcionan bajo la misma regla, veamos el siguiente ejemplo de esto

def ciclos():
    print("Estoy dentro de la funcion")
    i = 0
    while(i < 100):
        print("Estoy dentro de la funcion y dentro del ciclo")
        i = i+1
        if (i/2 > 50):
            print("Estoy dentro de la funcion, dentro del ciclo y tambien dentro del if")
        else:
            print("Estoy dentro de la funcion, dentro del ciclo y dentro del condicional else")
        
        print("Estoy dentro de la funcion, dentro del ciclo pero fuera de los condicionales")
    
    print("Estoy dentro de la funcion pero fuera del ciclo")
    
print("Estoy fuera de la funcion, fuera del ciclo y fuera de los condicionales")
