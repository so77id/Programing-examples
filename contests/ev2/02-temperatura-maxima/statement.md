# Descipcion
La direccion meteorologica del planeta irregular le ha pedido hacer un algoritmo que logre capturar la temperatura maxima y el dia en el cual esta temperatura estuvo presente.
Para esto su programa debe recibir la temperatura de cada dia desde el dia 0 hasta el dia N.
Su programa dejara de capturar las temperaturas cuando reciba un -1. (esto debido a que las temperaturas estan en la escala kelvin y en esa escala no existe la temperatura negativa)

# inputs
La entrada consite en un numero por linea hasta recibir un -1.
Cada numero representa la temperatura que hizo en ese dia.
ej:
    10
    20
    30
    8
    12
    -1

el dia 0 la temperatura fue 10
el dia 1 la temperatura fue 20
el dia 2 la temperatura fue 30
el dia 3 la temperatura fue 8
el dia 4 la temperatura fue 12
Para la lectura de programa por que se ingreso un -1

# outputs
La salida consiste en una linea donde se imprime la temperatura maxima alcanzada y en que dia fue.

ej:
    30 2
La temperatura maxima fue de 30 el dia 2

Si la temperatura maxima se repite mas de un dia, se considera la maxima temperatura el dia con el numero mas grande