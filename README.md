# 🚀 Análisis de Algoritmos de Ordenamiento

Proyecto en C++ que implementa 8 algoritmos de ordenamiento clásicos, mide sus tiempos de ejecución y genera reportes en CSV para análisis comparativo.

## 📊 Algoritmos implementados
- **Bubble Sort →** Intercambia repetidamente elementos adyacentes en orden incorrecto
- **Selection Sort →**   Selecciona el elemento más pequeño y lo coloca en su posición correcta en cada iteración
- **Insertion Sort →** Inserta cada elemento en su posición correcta dentro de la porción ya ordenada
- **Merge Sort →** Divide el arreglo recursivamente, ordena y combina las mitades ordenadas
- **Quick Sort →** Ordena mediante particionamiento alrededor de un pivote y recursión
- **Heap Sort →** Convierte el arreglo en un heap para extraer elementos en orden
- **Shell Sort →** Ordena por inserción con brechas decrecientes para mayor eficiencia
  
## 🛠️ Estructura del Código
- **`main.cpp`**: Archivo principal del programa.
- **`Algoritmos.cpp`**:  Archivo donde se ejecutan los algoritmos de ordenamiento.
- **`Plantilla.cpp`**:  Archivo donde se ejecutan las funciones principales del programa.
- **`Algoritmos.hpp`**: Archivo desde donde se llaman las funciones de los algoritmos.
- **`Plantilla.hpp`**: Archivo desde donde se llaman las funciones principales del programa
- **`Tablas`**: Carpeta donde se ubican los archivos .csv generados por el programa.  
- **`GráficaResultados.png`**: Imagen de la gráfica donde se comparan los distintos resultados.
- **`README.md`**: Archvivo donde se comunica las especificaciones del repositorio.

## 📋 Requisitos del sistema
- Compilador C++: g++ 9.0+ (Windows/Linux) o clang++.
- RAM: 4GB (para arreglos grandes).
- Espacio en disco: 500MB.
- Sistemas soportados: Windows 10/11 o Linux (Ubuntu/Debian recomendado).

## ⚙️ Compilación y ejecución
**Windows (CMD/PowerShell)**
1. Compilar:
   ```bash g++ main.cpp Algoritmos.cpp Plantilla.cpp -o ordenamientos -O2 -I .```
2. Ejecutar:
   ```bash .\ordenamientos.exe```

**Linux (Terminal)**
1. Instalar dependencias (si es necesario):
   ```bash sudo apt update && sudo apt install g++ build-essential```
2. Compilar:
   ```bash g++ main.cpp Algoritmos.cpp Plantilla.cpp -o ordenamientos -O2 -I .```
3. Ejecutar:
   ```bash ./ordenamientos ```
   

## 📌 Instrucciones de Uso
- Compilar el proyecto
- Ejecutar el programa (generará los CSV en la misma carpeta)
- Importar los CSV a Excel/Power BI para el análisis
- Usar la fila "Promedio" en cada CSV para generar las gráficas

## ⏱️ Resultados experimentales

![Comparación de algoritmos](Gráfica.png) 


## 🎯 Conclusiones
- El más rápido: Quick Sort (Rápido) gana en velocidad para la mayoría de los casos (especialmente con muchos datos).
- Para pocos datos: El algoritmos de Inserción por ordenación y el de Burbuja son buenas opciones.
- Consistentes pero más lentos: Los algoritmos de Mezcla, Montículos y Shell funcionan bien, pero no son tan rápidos como Quick Sort.
- El más lento: Algoritmo de Burbuja Optimizado. Con muchos datos es 100 veces más lento.

💡 Consejos práctico:

- Usa Quick Sort casi siempre (es el mejor balance).
- Si tienes datos casi ordenados o muy pocos, prueba Insertion Sort.

## 📄 Licencia
MIT License - Ver LICENSE.md
