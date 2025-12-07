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
1.-El proyecto usa características básicas de C++ y se compila con -std=c++17. 
Coloca todos los archivos .cpp y .h en la misma carpeta antes de compilar.
2.-Utiliza el compilador: g++
3.-Abre la terminal en la carpeta del proyecto y 
ejecuta uno de estos comandos según tu sistema
4.-Ejecuta el programa
===============================================================================
