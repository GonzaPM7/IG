
Este esqueleto utiliza las librerias:
 - freeglut(x86) para la gesti�n de las ventanas y la libreria OpenGL
 - glml para las operaciones mat�maticas en CPU que siguen las especificaciones de las operaciones matem�ticas en GPU de OpenGL.

Al a�adir un nuevo proyecto recuerda a�adir la p�gina de propiedades ProyectosGLFG.props al nuevo proyecto:
Men� VER -> Otras ventanas -> Administrador de propiedades -> Agregar hoja de propiedades existente -> ProyectosIG.props -> Guardar

Para a�adir una nueva libreria, copia su directorio en la soluci�n y los bin de la libreria en el directorio bin de la soluci�n.
Y a�ade los nuevos elementos al archivo ProyectosGLFG.props en las lineas: IncludePath, LibraryPath y AdditionalDependencies.

Tambi�n puedes crear otras p�ginas de propiedades.