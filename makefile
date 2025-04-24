# makefile for SD23
#
#
sd23: sd23.cpp
	g++ -Wall -g sd23.cpp -o ./Build/DEBUG/sd23


.PHONY: clean
clean:
	rm ./Build/DEBUG/sd23


