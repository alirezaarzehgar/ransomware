CC  = cc
INP = *.c
OUT = bin/Virus
ARG = -g -Wall

all:
	@mkdir -p bin
	$(CC) $(ARG) -o $(OUT) $(INP)
