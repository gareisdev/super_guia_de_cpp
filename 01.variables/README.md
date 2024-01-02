# Super guia de C++ 

## Variables
Como seguramente sabes, los datos de nuestros programas son almacenados en posiciones designadas en la memoria RAM de nuestra computadora. Estas direcciones tienen un aspecto parecido a esto: `0x7fff5fbff6f4`
Horrible no? Imaginate tener que administrar muchos espacios de memoria!

Por suerte, en los lenguajes de programacion de alto nivel, trabajamos con variables. Estas no dejan de ser espacios de memoria, pero nos referimos a ellos por un nombre que nosotros les damos.

Por ejemplo, si quisiera trabajar con una variable que almacenara un nombre, podria hacer algo asi

```cpp
string nombre;
```

O una edad

```cpp
int edad;
```

Genial, no?

## Operador de asignacion

Para asignarle un valor a una variable debemos usar el operador de asignacion que es `=`

Podemos usarlo al momento de crear la variable
```cpp
int edad = 18;
```

O cuando esta ya hubiese sido creada

```cpp
edad = 23;
```

Fijate que no estamos agregando `int` en el segundo caso. Esto se debe a que unavez que la variable ya fue creada, no hace falta indicar nuevamente el tipo de dato asociado a esta.


## Tipos de datos
En C++ las variables deben declarar el tipo de dato con el que van a trabajar. Esto es porque C++ es un lenguaje fuertemente tipado.
Una vez que hemos definido el tipo de dato, el compilador verificara siempre que esa variable almacene siempre datos de ese tipo.

Por ejemplo

```cpp
int edad = 32;
```

Si intentamos hacer algo asi:

```cpp
edad = "Hola mundo";
```
Obtendremos un error

```bash
main.cpp:6:12: error: assigning to 'int' from incompatible type 'const char[11]'
    edad = "Hola mundo";
           ^~~~~~~~~~~~
1 error generated.
```

Los tipos de datos disponibles en C++ son:

1. **Enteros:**
   - `int`: Números enteros.
   - `short`: Enteros cortos.
   - `long`: Enteros largos.
   - `long long`: Enteros muy largos (C++11).

2. **Punto Flotante:**
   - `float`: Números de punto flotante.
   - `double`: Números de punto flotante de doble precisión.
   - `long double`: Números de punto flotante de precisión extendida.

3. **Caracteres:**
   - `char`: Un solo carácter.
   - `wchar_t`: Carácter ampliado (puede representar caracteres Unicode).
   - `char16_t` y `char32_t`: Caracteres Unicode (C++11).

4. **Booleano:**
   - `bool`: Puede almacenar `true` o `false`.

5. **Void:**
   - `void`: Se usa en funciones para indicar que no devuelven ningún valor.

6. **Tipos Compuestos:**
   - `Arrays`: Colección de elementos del mismo tipo.
   - `Structs`: Estructuras que agrupan diferentes tipos de datos.
   - `Unions`: Estructuras que permiten almacenar diferentes tipos de datos en la misma ubicación de memoria.
   - `Enumeraciones`: Conjunto de constantes con nombres asignados a valores.

7. **Punteros:**
   - `Tipo*`: Puntero a un tipo específico. Ejemplo: `int*`

8. **Tipos Definidos por el Usuario:**
   - `typedef`: Permite crear alias para tipos de datos existentes.
   - `using`: Similar a `typedef`, introducido en C++11.

9. **Tipo de Dato Auto:**
   - `auto`: Introducido en C++11, permite al compilador deducir automáticamente el tipo de datos.

