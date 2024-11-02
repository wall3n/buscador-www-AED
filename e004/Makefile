a.out: ejercicio4.o modulo-interprete.o modulo-dicpaginas.o modulo-pagina.o
	g++ ejercicio4.o modulo-interprete.o modulo-dicpaginas.o modulo-pagina.o

ejercicio4.o: ejercicio4.cpp
	g++ -c ejercicio4.cpp

modulo-pagina.o: modulo-pagina.cpp modulo-pagina.hpp
	g++ -c modulo-pagina.cpp

modulo-dicpaginas: modulo-dicpaginas.cpp modulo-dicpaginas.hpp modulo-pagina.hpp
	g++ -c modulo-dicpaginas.cpp

modulo-interprete: modulo-interprete.cpp modulo-interprete.hpp modulo-dicpaginas.hpp modulo-pagina.hpp
	g++ -c modulo-interprete.cpp
