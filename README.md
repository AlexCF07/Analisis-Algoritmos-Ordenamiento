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

- Compilador C++ (g++ 9.0 o superior recomendado)
- Sistema operativo: Windows
- 4GB de RAM (para pruebas con arreglos grandes)
- 500MB de espacio en disco

## ⚙️ Compilación y ejecución
**Windows (CMD/PowerShell)**
1. Compilar:
```bash
g++ main.cpp Algoritmos.cpp Plantilla.cpp -o ordenamientos -O2 -I .
```
2. Ejecutar:
```bash
.\ordenamientos.exe
```

**Linux (Terminal)**
1. Instalar dependencias (si es necesario):
```bash
sudo apt update && sudo apt install g++ build-essential
```
2. Compilar:
```bash
g++ main.cpp Algoritmos.cpp Plantilla.cpp -o ordenamientos -O2 -I .
```
3. Ejecutar:
```bash
./ordenamientos
```
   

## 📌 Instrucciones de Uso
- Compilar el proyecto
- Ejecutar el programa (generará los CSV en la misma carpeta)
- Importar los CSV a Excel/Power BI para el análisis
- Usar la fila "Promedio" en cada CSV para generar las gráficas

## ⏱️ Resultados experimentales

![Comparación de algoritmos](Gráfica.png) 


## 🎯 Conclusiones
- **Para pequeños conjuntos (n < 100):**
  - Inserción y Burbuja Optimizado son más eficientes
  - Quick Sort muestra sobrecarga por recursión

- **Para grandes conjuntos (n > 500):**
  - Merge Sort y Heap Sort mantienen O(n log n)
  - Burbuja Clásico es 100x más lento que otros
  - **Mejor equilibrio:** Shell Sort (buen rendimiento en todos los tamaños)

## 📄 Licencia
MIT License - Ver LICENSE.md
