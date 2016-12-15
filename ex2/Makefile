FULL_PATH = /cs/course/2014/slabc/public/ex2/inputOutput

all: PitPlugger DrawArrayDriver

tar: Draw2DCharArray.c RadiusReader.c PitPlugger.c Makefile
	tar cfv ex2.tar Draw2DCharArray.c RadiusReader.c PitPlugger.c Makefile

PitPlugger: PitPlugger.o Draw2DCharArray.o RadiusReader.o
	gcc -Wall -Wvla -lm PitPlugger.o Draw2DCharArray.o RadiusReader.o -o PitPlugger

DrawArrayDriver: Draw2DCharArray.o DrawArrayDriver.o
	gcc -Wall -Wvla Draw2DCharArray.o DrawArrayDriver.o -o DrawArrayDriver

PitPlugger.o: PitPlugger.c Draw2DCharArray.h RadiusReader.h
	gcc -Wall -Wvla -c -std=c99 PitPlugger.c

Draw2DCharArray.o: Draw2DCharArray.c Draw2DCharArray.h
	gcc -Wall -Wvla -c -std=c99 Draw2DCharArray.c

RadiusReader.o: RadiusReader.c RadiusReader.h
	gcc -Wall -Wvla -c RadiusReader.c

DrawArrayDriver.o: DrawArrayDriver.c Draw2DCharArray.h
	gcc -Wall -Wvla -c DrawArrayDriver.c

test1: PitPlugger
	PitPlugger $(FULL_PATH)/pit_radius_1.in $(FULL_PATH)/stone_radius_1.in \
	| diff $(FULL_PATH)/map_pit_1_stone_1.out -

.PHONY: all tar test1
