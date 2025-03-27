# Análisis de Algoritmos de Ordenamiento 🚀

Proyecto que implementa y compara 7 algoritmos de ordenamiento clásicos en C++, incluyendo análisis de rendimiento y documentación detallada.

## 📋 Requisitos del sistema

- Compilador C++ (g++ 9.0 o superior recomendado)
- Sistema operativo: Windows
- 4GB de RAM (para pruebas con arreglos grandes)
- 500MB de espacio en disco

## 🛠️ Compilación y ejecución

# Compilar (todos los algoritmos)
g++ main.cpp -o ordenamientos -O2

# Ejecutar
./ordenamientos

#📊 Algoritmos implementados
Bubble Sort: Ordenamiento simple por intercambio O(n²)

Selection Sort: Selección del mínimo en cada iteración O(n²)

Insertion Sort: Construye la secuencia ordenada gradualmente O(n²)

Merge Sort: Divide y vencerás con recursión O(n log n)

Quick Sort: Particionamiento recursivo O(n log n) promedio

Heap Sort: Uso de estructura heap O(n log n)

Shell Sort: Mejora de Insertion Sort con brechas O(n^(3/2)))

#⏱️ Resultados experimentales

Gráfica comparativa

Tiempos de ejecución promedio para diferentes tamaños de entrada (100-10,000 elementos)

#🎯 Conclusiones

Merge Sort y Quick Sort demostraron mejor rendimiento para n > 1,000

Los algoritmos O(n²) son adecuados para entradas pequeñas (<100 elementos)

El factor de estabilidad es crucial en aplicaciones específicas

#📄 Licencia
Este proyecto está bajo la licencia MIT - ver LICENSE.md para más detalles.
