# Buscador WWW (práctica AED)

Repositorio del proyecto "Buscador WWW", correspondiente a la práctica de la asignatura Algoritmos y Estructuras de Datos (AED).

## Índice
- [Descripción](#descripción)
- [Objetivos](#objetivos)
- [Tecnologías](#tecnologías)
- [Estructura del proyecto](#estructura-del-proyecto)
- [Instalación y uso](#instalación-y-uso)
- [Ejercicios](#ejercicios)
- [Autores](#autores)

## Descripción  
"Buscador WWW" es una aplicación práctica para la asignatura AED que implementa un sistema de búsqueda de información sobre documentos web. El proyecto está organizado en ejercicios incrementales que desarrollan diferentes aspectos del buscador, desde el procesamiento básico de texto hasta la implementación de estructuras de datos avanzadas para indexación y búsqueda.

## Objetivos
- Implementar un sistema de indexación y búsqueda de contenido web
- Utilizar diferentes estructuras de datos (tablas hash, árboles) para optimizar las búsquedas
- Desarrollar un intérprete de comandos para procesar consultas
- Gestionar eficientemente la información de páginas web
- Implementar diferentes algoritmos de hash (SDBM, Jenkins)

## Tecnologías
- Lenguaje: **C++**
- Herramientas de compilación: `make`
- No requiere dependencias externas

## Estructura del proyecto
```
/
├── e001/                    # Ejercicio 1: Procesamiento básico de texto
├── e002/                    # Ejercicio 2: Gestión de consultas simples
├── e003/                    # Ejercicio 3: Implementación básica
├── e004/                    # Ejercicio 4: Módulos base (páginas y diccionario)
├── e200/                    # Ejercicio 200: Implementación con tabla hash
├── e300/                    # Ejercicio 300: Implementación con árboles
├── final/                   # Versión final del proyecto
└── README.md
```

Cada ejercicio contiene:
- Código fuente (.cpp)
- Archivos de entrada de prueba (.in)
- Archivos de salida esperada (.out)
- Makefile (cuando es necesario)
- Módulos específicos de la implementación (.cpp y .hpp)

## Instalación y uso

1. Asegúrate de tener un compilador de C++ instalado y la utilidad make.

2. Clona el repositorio:
```bash
git clone https://github.com/wall3n/buscador-www-AED.git
cd buscador-www-AED
```

3. Para compilar un ejercicio específico:
```bash
cd eXXX    # donde XXX es el número del ejercicio (001, 002, etc.)
make
```

4. Para ejecutar con los archivos de prueba:
```bash
./a.out < XXXa.in    # donde XXX es el número del ejercicio
```

## Ejercicios

1. **e001**: Procesamiento básico de texto
   - Implementación inicial del procesamiento de entrada
   - Lectura y numeración de palabras

2. **e002**: Gestión de consultas simples
   - Manejo básico de consultas de texto
   - Procesamiento de entrada/salida

3. **e003**: Implementación básica
   - Estructura inicial del buscador
   - Procesamiento de comandos básicos

4. **e004**: Módulos base
   - Implementación de módulos fundamentales:
     - Páginas web (`modulo-pagina`)
     - Diccionario de páginas (`modulo-dicpaginas`)
     - Intérprete de comandos (`modulo-interprete`)

5. **e200**: Implementación con tabla hash
   - Incorporación de tabla hash para indexación
   - Implementación de diferentes algoritmos de hash:
     - SDBM
     - Jenkins One-at-a-Time

6. **e300**: Implementación con árboles
   - Incorporación de estructuras de árbol
   - Optimización de búsquedas

7. **final**: Versión completa del proyecto
   - Integración de todos los módulos
   - Implementación final optimizada

Incluye casos de prueba de los archivos en `tests/` (o en donde estén).

## Autores
- Francisco Moreno Sánchez - francisco.morenos@um.es
- Arancha Baena León - a.baenaleon@um.es
