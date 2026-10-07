# Parcial 1 - Ejercicios en C++

Este repositorio contiene varios ejercicios prácticos desarrollados en C++ sobre tipos de datos, estructuras y manejo de memoria. Está pensado como material de estudio para un primer parcial o práctica inicial de programación.

## Descripción general

Los programas incluidos muestran conceptos básicos como:

- tipos de datos primitivos
- tamaños en bytes y bits
- rangos de valores
- estructuras (`struct`)
- uso de `typedef`
- cálculo de tamaños de memoria

## Archivos del proyecto

- `bytes.cpp` — muestra información de tipos de datos primitivos con menú interactivo.
- `bytes1.cpp` — versión similar a `bytes.cpp` con limpieza de pantalla y espera para volver al menú.
- `bytes2.cpp` — otra variación de información de tipos primitivos con manejo de entrada y salida visual.
- `datos.cpp` — ejercicio sobre detección automática del tipo de dato ingresado.
- `ejercicio2.cpp` — ejemplo de estructura `Persona` con campo `Direccion` y cálculo del tamaño total.
- `ejercicio3.cpp` — ejercicio con `struct Datos` y `typedef` para mostrar bytes de una estructura.
- `ejercicio4.cpp` — ejercicio con una estructura anidada que incluye un alumno y datos de la escuela.
- `hola-mundo.html` — archivo HTML vacío o de prueba, no contiene lógica de C++.

## Requisitos

Necesitas un compilador de C++ instalado, por ejemplo:

- MinGW
- GCC
- Clang

## Compilar un archivo

Desde la terminal, en la carpeta del proyecto, ejecuta:

```bash
g++ bytes.cpp -o bytes
```

Para ejecutar el programa compilado:

```bash
./bytes
```

En Windows, normalmente se usa:

```powershell
g++.exe bytes.cpp -o bytes.exe
bytes.exe
```

## Ejemplo de ejecución

```bash
$ g++ datos.cpp -o datos
$ ./datos
```

## Observaciones

- Algunos programas usan funciones como `system("cls")` y `getch()`, lo cual es típico en entornos Windows.
- Si compilas en Linux o macOS, puede que necesites ajustar esas llamadas para que sean compatibles.
- El objetivo principal es aprender cómo C++ maneja memoria, tipos y estructuras.

## Autor

Proyecto de práctica de programación / primer parcial.
