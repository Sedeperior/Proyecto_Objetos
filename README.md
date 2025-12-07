Sistema de Control de Asistencias
=============================================================
-----El sistema permite:-----

.-Ingresar una matrícula de alumno
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
  =========================================================
  °Mostrar total de faltas
