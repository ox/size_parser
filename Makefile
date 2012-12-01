CC ?= gcc
CFLAGS ?= -pedantic -Wall

EXEC = size_check
SRCS = size_check.c
OBJS = ${SRCS:.c=.o}

all: ${EXEC}

.c.o:
	${CC} ${CFLAGS} -o $@ -c $<

${EXEC}: ${OBJS}
	${CC} ${LDFLAGS} -o ${EXEC} ${OBJS}

clean:
	rm ./${EXEC}
	rm ./*.o

.PHONEY: all clean
