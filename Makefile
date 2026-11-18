flags   := -Wall -std=c23 -00 -I./include
ldflags :=

.PHONY: clean

all: larpcoin

larpcoin: larpcoin.o network.o crypto.o
	cc $(flags) $^ -o $@ $(ldflags)

larpcoin.o: larpcoin.c include/larpcoin.h include/project.h
	cc $(flags) -c $<

network.o: network.c include/network.h include/project.h
	cc $(flags) -c $<

crypto.o: crypto.c include/crypto.h include/project.h
	cc $(flags) -c $<

clean:
	rm -f *.o larpcoin
