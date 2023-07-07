import sys
entero = 5
flotante = 5.3334
palabra = 'Hola'
lista = [1,2,3]
diccionario = {'uno':1,'dos':2,'tres':3}
conjunto = {1,2,2,3,4,5,5,6}
tuplas = (25,30,40)

print(entero,' tiene un tamaño en memoria de: ',sys.getsizeof(entero))
print(flotante,' tiene un tamaño en memoria de: ',sys.getsizeof(flotante))
print(palabra,' tiene un tamaño en memoria de: ',sys.getsizeof(palabra))
print(lista,' tiene un tamaño en memoria de: ',sys.getsizeof(lista))
print(diccionario,' tiene un tamaño en memoria de: ',sys.getsizeof(diccionario))
print(conjunto,' tiene un tamaño en memoria de: ',sys.getsizeof(conjunto))
print(tuplas,' tiene un tamaño en memoria de: ',sys.getsizeof(tuplas))