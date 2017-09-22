CC=gcc
CFLAGS=-Wall -Werror -Wextra
EXEC=run
CPP_FILE=account.cpp display.cpp shadow.cpp
H_FILE=account.h display.h

all: build

build: $(CPP_FILE) $(H_FILE)
	@echo "Build Shadow Terminal With The Output -->" $(EXEC)
	$(CC) -o $(EXEC) $(CPP_FILE) $(H_FILE) $(CFLAGS)

clean:
	@echo "Cleaning ./run"
	rm run
