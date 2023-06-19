
bin/interpolacion.exe : src/Lagrange_proyecto.cpp
	@echo Compilando codigo fuente
	g++ -o bin/interpolacion src/Lagrange_proyecto.cpp -Iinclude

run : bin/interpolacion
	bin/interpolacion

clean:
	@echo se borraron todos los archivos.exe
	rm -f bin/*.exe