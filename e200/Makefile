a.out: ejercicio200.o modulo-interprete.o modulo-dicpaginas.o modulo-tablahash.o modulo-pagina.o
	g++ ejercicio200.o modulo-interprete.o modulo-dicpaginas.o modulo-tablahash.o modulo-pagina.o

ejercicio200.o: ejercicio200.cpp modulo-interprete.hpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-pagina.hpp 
	g++ -c ejercicio200.cpp

modulo-pagina.o: modulo-pagina.cpp modulo-pagina.hpp
	g++ -c modulo-pagina.cpp

modulo-tablahash.o: modulo-tablahash.cpp modulo-tablahash.hpp modulo-pagina.hpp
	g++ -c modulo-tablahash.cpp

modulo-dicpaginas.o: modulo-dicpaginas.cpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-pagina.hpp
	g++ -c modulo-dicpaginas.cpp

modulo-interprete.o: modulo-interprete.cpp modulo-interprete.hpp modulo-dicpaginas.hpp modulo-tablahash.hpp modulo-pagina.hpp
	g++ -c modulo-interprete.cpp

