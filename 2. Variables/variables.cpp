//define main function
int main()
{
    //enteros
    int x = 10;
    //flotantes
    float y = 10.5;
    //caracteres
    char z = 'a';
    //booleanos
    bool w = true;
    //strings
    string v = "Hola, mundo";
    //arreglos
    int arreglo[5] = {1, 2, 3, 4, 5};
    //tuplas
    tuple<int, float, char> tupla = make_tuple(10, 15.5, 'a');
    
    //imprimir variables
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << w << endl;
    cout << v << endl;
    cout << arreglo[0] << endl;
    cout << get<0>(tupla) << endl;

    return 0;
}