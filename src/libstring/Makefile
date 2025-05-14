all:shared static

clean:
	rm -rf *.o

distclean:
	rm -rf *.o *.so *.a

shared:libstring.so
libstring.so:
	gcc -shared -fPIC -o libstring.so *.c

static:libstring.a
libstring.a:
	gcc -c *.c
	ar rcs libstring.a *.o
