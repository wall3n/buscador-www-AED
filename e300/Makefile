a.out: ejercicio300.o modulo-interprete.o modulo-dicpaginas.o modulo-tablahash.o modulo-arbol.o modulo-pagina.o
	g++ ejercicio300.o modulo-interprete.o modulo-dicpaginas.o modulo-tablahash.o modulo-arbol.o modulo-pagina.o

ejercicio300.o: ejercicio300.cpp modulo-interprete.hpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-arbol.hpp modulo-pagina.hpp 
	g++ -c ejercicio300.cpp

modulo-pagina.o: modulo-pagina.cpp modulo-pagina.hpp
	g++ -c modulo-pagina.cpp

modulo-arbol.o: modulo-arbol.cpp modulo-arbol.hpp modulo-pagina.hpp
	g++ -c modulo-arbol.cpp

modulo-tablahash.o: modulo-tablahash.cpp modulo-tablahash.hpp modulo-pagina.hpp
	g++ -c modulo-tablahash.cpp

modulo-dicpaginas.o: modulo-dicpaginas.cpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-arbol.hpp modulo-pagina.hpp
	g++ -c modulo-dicpaginas.cpp

modulo-interprete.o: modulo-interprete.cpp modulo-interprete.hpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-arbol.hpp modulo-pagina.hpp
	g++ -c modulo-interprete.cpp
clean:
	rm modulo-interprete.o modulo-dicpaginas.o modulo-tablahash.o modulo-pagina.o ejercicio200.o
