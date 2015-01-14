CC= gcc
LD_FLAGS= -I../../. -L../../.
LIBS= -lcgic
BIN= cgi-bin
SRC= src

${BIN}/form: $(SRC)/form.c
	mkdir -p  ${BIN}
	${CC} ${LD_FLAGS} ${LIBS} $? -o $@

clean:
	rm -rf ${BIN}

.PHONY: clean
