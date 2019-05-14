CC = clang -Weverything

TESTS= test_readsac test_readsacpdw test_readsachead test_writesac test_sacheadoffset\
	   test_issac

all: $(TESTS)

test_readsachead: test_readsachead.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

test_readsac: test_readsac.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

test_readsacpdw: test_readsacpdw.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

test_writesac: test_writesac.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

test_sacheadoffset: test_sacheadoffset.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

test_issac: test_issac.o sacio.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

clean:
	rm *.o $(TESTS)
