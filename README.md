# EDA_Demostración de la "curse of dimensionality"

Este script en C++ muestra una demostración de la "maldición de la dimensionalidad", un fenómeno que ocurre en el ámbito del aprendizaje automático y la minería de datos cuando se trabaja con conjuntos de datos de alta dimensionalidad. La "maldición de la dimensionalidad" se refiere a los desafíos y problemas que surgen al analizar y procesar datos en espacios de alta dimensionalidad.

## ¿Qué es la "Maldición de la Dimensionalidad"?

La "maldición de la dimensionalidad" se produce cuando el número de dimensiones (características o variables) en un conjunto de datos es extremadamente grande en comparación con el tamaño de los datos. A medida que aumenta la dimensionalidad, surgen varios desafíos y problemas que pueden afectar negativamente el rendimiento y la eficacia de los algoritmos de aprendizaje automático.

Algunos de los efectos de la "maldición de la dimensionalidad" incluyen:

1. **Esparsidad de los datos**: En espacios de alta dimensionalidad, los datos tienden a dispersarse y volverse escasos. Esto significa que a medida que aumenta el número de dimensiones, los puntos de datos individuales se vuelven más distantes entre sí, lo que dificulta la identificación de patrones y relaciones significativas en los datos.

2. **Sobreajuste**: El sobreajuste ocurre cuando un modelo se adapta demasiado a los datos de entrenamiento y no generaliza bien a nuevos datos. En espacios de alta dimensionalidad, hay una mayor probabilidad de que el modelo se ajuste a ruido o variaciones aleatorias en los datos de entrenamiento, lo que puede conducir a un rendimiento deficiente en datos no vistos.

3. **Requerimientos computacionales**: A medida que aumenta la dimensionalidad, la cantidad de cálculos y recursos computacionales necesarios para procesar los datos también aumenta drásticamente. Esto puede llevar a un aumento en el tiempo de ejecución y dificultades en la implementación de algoritmos eficientes.

## Funcionamiento del Código

El código en este script muestra una demostración de la "maldición de la dimensionalidad". Aquí se explica cómo funciona:

1. Se generan aleatoriamente datos de prueba en un espacio de alta dimensión. El número de muestras y la dimensión se pueden ajustar según sea necesario.

2. Se calcula la distancia Euclidiana entre una muestra de referencia y todas las demás muestras en el conjunto de datos.

3. Se almacenan las distancias calculadas en un vector.

4. Se realiza un análisis de frecuencia en las distancias para determinar si existen valores repetidos.

5. Se mide el tiempo de ejecución del código utilizando la biblioteca `chrono` de C++.

Para obtener más detalles sobre la implementación y ejecución del código, consulta el archivo `main.cpp` en este repositorio.

