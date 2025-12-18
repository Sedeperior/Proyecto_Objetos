Sistema de Control de Asistencias
===============================================================================
-----El sistema permite:-----

.-Ingresar una matrícula de alumno (ya sea A001. A002, A003 o A004)
.-Mostrar el nombre del alumno
.-Mostrar las faltas por materia:
  °Física
  °Matemáticas
  °Programación
.-Mostrar el profesor correspondiente de cada materia
.-Calcular la suma total de faltas

-----Diseño de clases:-----

El programa se compone de las siguientes clases:
.-Personas (Contiene):
  °Lista de alumnos (nombre + matrícula)
  °Lista de profesores (nombre + materia)
  °Las materias consultan esta información (agregación).
  °Materias (Física, Matemáticas, Programación)
    +Cada materia contiene:
      -Lista local de matrículas y número de faltas
      -Un puntero a Personas para obtener:
        *nombre del alumno
        *nombre del profesor correspondiente

.-Asistencia (Hereda de):
  °Física
  °Matemáticas
  °Programación 
.-Responsable de:
  °Solicitar matrícula
  °Buscar alumno
  °Mostrar faltas por materia
  °Mostrar profesores
  °Mostrar total de faltas
===============================================================================
-----El sistema NO permite:-----
  .-Ingresar matrículas fuera de las señaladas
  .-Obtener datos fuera de los especificados
  .-Modificar los datos 
===============================================================================
-----Cómo compilar-----
El proyecto está desarrollado en C++ y se compone de varios archivos .cpp y .h.
El programa principal se encuentra en Main.cpp y depende de varias clases auxiliares.
Asegúrate de que todos los archivos estén en la misma carpeta:
•	Main.cpp
•	Personas.h
•	Personas.cpp
•	Asistencia.h
•	Asistencia.cpp
•	Fisica.h
•	Fisica.cpp
•	Matematicas.h
•	Matematicas.cpp
•	Programacion.h
•	Programacion.cpp
Se necesita:
•	Sistema operativo Linux (o similar)
•	Compilador g++
•	Terminal o consola
Para verificar que tienes g++ instalado usa g++ --version
Recuerda que en C++:
•	Cada archivo .cpp se compila por separado
•	El ejecutable final se crea enlazando todos los .cpp juntos
No es suficiente compilar solo Main.cpp, porque las funciones que usa están definidas en otros archivos.
Para compilar:
1.-Abrir la terminal
Ubícate en la carpeta donde están todos los archivos del proyecto:
cd ruta/al/proyecto
2.-Si quiere compilarlo en cmd
Después de descargar todos los archivos y ponerlos en una carpeta, copie la dirección completa de la ubicación de la carpeta y entonces ponga el siguiente comando:
cd "dirección completa de la carpeta"
4.-Compilar TODOS los archivos .cpp
Ejecuta el siguiente comando:
g++ Asistencia.cpp Personas.cpp Fisica.cpp Main.cpp Matematicas.cpp  Programacion.cpp -o main
Este comando:
•	Compila todos los archivos .cpp
•	Enlaza todas las clases
•	Genera un ejecutable llamado main
Recuerda ejecutar desde la terminal 

===============================================================================
