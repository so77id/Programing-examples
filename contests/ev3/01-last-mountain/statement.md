# Descipcion
Un amigo suyo que es apasionado de subir montañas le ha pedido ayuda para saber cuantas montañas puede ver desde una cumbre sin ser tapado por una montaña de igual o mayor tamaño.
Usted al ser un estudiante de programacion ha decido construir un programa que solucione este problema.
Para esto le pide a su amigo que le entrege una lista las las alturas de las montañas en el orden que se ubican en el cordon montañoso.
La idea es que su programa devuelva dos listas:
- La primera debe ser una lista del mismo tamaño de la original, donde en cada indice muestra la cantidad de montañas que pueden ser vistas desde la cumbre hacia la derecha sin set tapado por una montaña de igual o mayor tamaño.
- La segunda muestra otra lista del mismo tamaño de la original, en donde en cada indice muestra la cantidad de montañas que pueden ser vistas  desde la cumbre hacia la izquierda sin ser tapado por una montaña de igual o mayor tamaño.

ej.
|     |     |
| | | |   | |
| | | | | | | |
3 2 2 3 1 2 3 1

ouput:
3 2 1 3 2 1 1 0
0 1 2 3 1 2 3 1

**Observacion**: cuando una montaña mira el limite (izquierdo o derecho) para de contar.

# inputs
La entrada consite en un numero **n** que indica la cantidad de montañas que seran ingresadas.
Las siguientes **n** lineas contienen los numeros pertenecientes a cada montaña

# outputs
La salida consiste en dos lineas, la primera linea consiste en la primera lista solucion, contiene los **n** numeros separados por un espacio.
La segunda linea consiste en la segunda lista solucion, contiene los **n** numeros separados por un espacio.

ojo:**sin espacio antes del salto de linea**, no tomar esto en cuenta puede dar como resultado una respuesta erronea que sera fuertemente penalizada.

# Constrains
1 <= **n** <= 1000
1 <= n_{i} <= 2147483647