# Análisis de Algoritmos de Ordenamiento

Proyecto en C++ que implementa 8 algoritmos de ordenamiento clásicos, mide sus tiempos de ejecución y genera reportes en CSV para análisis comparativo.

## 🛠️ Estructura del Código
- **`main.cpp`**: Archivo principal del programa.
- **`Algoritmos.cpp`**:  Archivo donde se ejecutan los algoritmos de ordenamiento.
- **`Plantilla.cpp`**:  Archivo donde se ejecutan las funciones principales del programa.
- **`Algoritmos.hpp`**: Archivo desde donde se llaman las funciones de los algoritmos.
- **`Plantilla.hpp`**: Archivo desde donde se llaman las funciones principales del programa
- **`Carpeta Tablas`**: Carpeta donde se ubican los archivos .csv generados por el programa.  
- **`Carpeta Gráficas`**: Carpeta donde se ubican las gráficas que interpretan los archivos .csv.
- **`README.md`**: Archvivo donde se comunica las especificaciones del repositorio.

## 📋 Requisitos del sistema

- Compilador C++ (g++ 9.0 o superior recomendado)
- Sistema operativo: Windows
- 4GB de RAM (para pruebas con arreglos grandes)
- 500MB de espacio en disco

## ⚒️Compilación (todos los algoritmos)
```bash
g++ main.cpp -o ordenamientos -O2
```

## 🪓Ejecución
```bash
./ordenamientos
```

## 📊 Algoritmos implementados
Bubble Sort: Ordenamiento simple por intercambio O(n²)

Selection Sort: Selección del mínimo en cada iteración O(n²)

Insertion Sort: Construye la secuencia ordenada gradualmente O(n²)

Merge Sort: Divide y vencerás con recursión O(n log n)

Quick Sort: Particionamiento recursivo O(n log n) promedio

Heap Sort: Uso de estructura heap O(n log n)

Shell Sort: Mejora de Insertion Sort con brechas O(n^(3/2)))

## ⏱️ Resultados experimentales

GRAFICA ///

## 🎯 Conclusiones
- **Para pequeños conjuntos (n < 100):**
  - Inserción y Burbuja Optimizado son más eficientes
  - Quick Sort muestra sobrecarga por recursión

- **Para grandes conjuntos (n > 500):**
  - Merge Sort y Heap Sort mantienen O(n log n)
 
## 📌 Instrucciones de Uso
Compilar el proyecto

Ejecutar el programa (generará los CSV en la misma carpeta)

Importar los CSV a Excel/Power BI para el análisis

Usar la fila "Promedio" en cada CSV para generar las gráficas
  - Burbuja Clásico es 100x más lento que otros

- **Mejor equilibrio:** Shell Sort (buen rendimiento en todos los tamaños)

## 📄 Licencia
MIT License - Ver LICENSE.md
