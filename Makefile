TARGET=app
CXX=g++ -std=c++17
CCFLAGS=-Wall -g -MMD
LD=g++
GTKFLAGS=`pkg-config gtkmm-3.0 --cflags --libs`
OBJS=main.o tmConn.o
DEPS=TMConn.hpp

${TARGET}: ${OBJS}
	${LD} -o $@ $^ ${CCFLAGS} ${GTKFLAGS} 

%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CCFLAGS} ${GTKFLAGS}

clean:
	rm -r *.o *.d

.PHONY: clean
