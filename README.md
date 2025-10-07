# Buscador WWW (práctica AED)

Repositorio del proyecto “Buscador WWW”, correspondiente a la práctica de la asignatura Algoritmos y Estructuras de Datos (AED).

## Índice
- [Descripción](#descripción)
- [Objetivos](#objetivos)
- [Tecnologías](#tecnologías)
- [Estructura del proyecto](#estructura-del-proyecto)
- [Instalación y uso](#instalación-y-uso)
- [Ejemplos / casos de prueba](#ejemplos--casos-de-prueba)
- [Evaluación y criterios](#evaluación-y-criterios)
- [Limitaciones conocidas](#limitaciones-conocidas)
- [Posibles mejoras](#posibles-mejoras)
- [Autores](#autores)
- [Licencia](#licencia)

## Descripción  
“Buscador WWW” es una aplicación de práctica para la asignatura AED. Su objetivo es implementar algoritmos de búsqueda / recuperación de información sobre documentos web (o representaciones de páginas) y permitir consultas eficientes.

## Objetivos
- Aprender a indexar contenido web (o textual) de forma eficiente.  
- Implementar algoritmos de búsqueda (por ejemplo: búsqueda por palabra clave, ranking, paginación).  
- Manejar estructuras de datos (listas invertidas, árboles, vectores, etc.).  
- Gestionar consultas de usuario y devolver resultados ordenados.

## Tecnologías
- Lenguaje: (indicar lenguaje usado — por ejemplo, **Python**, **Java**, **C++**, etc.).  
- Herramientas de compilación / ejecución: (ej: `make`, `gradle`, `npm` si aplica).  
- Dependencias externas (si hay): librerías para manipulación de texto, índices, etc.

## Estructura del proyecto
```
/
├── src/                     # Código fuente
├── tests/                   # Pruebas unitarias / de integración
├── data/                    # Archivos de documentos / ejemplos
├── scripts/                 # Scripts auxiliares para generación de índices, etc.
├── README.md
├── LICENSE
└── (archivos de configuración)
```

Ajusta según la estructura real del repositorio.

## Instalación y uso
Pasos típicos:

```bash
# Clona el repositorio
git clone https://github.com/wall3n/buscador-www-AED.git
cd buscador-www-AED

# Si hay archivo de configuración o dependencia
# Por ejemplo:
# instalar dependencias
[ comando de instalación ]

# Compilar / ejecutar
[ comando para ejecutar la aplicación ]

# Realizar consultas
[ ejemplo de uso ]
```

## Ejemplos / casos de prueba
Aquí algunos ejemplos de cómo consultar la aplicación:

- Consulta simple: "palabra1 palabra2"
- Consulta con operadores lógicos (si soporta): palabra1 AND palabra2
- Salida esperada: lista de documentos relevantes con puntuaciones / ranking

Incluye casos de prueba de los archivos en `tests/` (o en donde estén).

## Evaluación y criterios
La práctica será evaluada en base a:

- Correctitud de los resultados (que se devuelvan los documentos adecuados)  
- Eficiencia (tiempo de respuesta ante consultas grandes)  
- Uso adecuado de estructuras de datos  
- Calidad del código (legibilidad, modularidad)  
- Cobertura de pruebas  
- Documentación (README, comentarios)

## Limitaciones conocidas
- Volumen de datos pequeño (no optimizado para web real de gran escala)  
- No soporta (si aplica): búsqueda semántica, relevancia avanzada, stemming, etc.  
- Uso de memoria no optimizado en algunos casos

## Posibles mejoras
- Añadir soporte de operadores booleanos más complejos  
- Soporte de ranking basado en TF‑IDF o BM25  
- Stemming, lematización, sinónimos  
- Indexado incremental o en tiempo real  
- Interfaz gráfica o API REST  
- Escalabilidad para grandes volúmenes de datos

## Autores
- Francisco Moreno Sánchez

## Licencia
Este proyecto se entrega como práctica académica.  
(Puedes indicar una licencia como MIT o la que decida la asignatura).
