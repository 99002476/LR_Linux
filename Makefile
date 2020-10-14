main: main.o fact.o isprime.o pal.o
     gcc -o main main.o fact.o isprime.o pal.o
main.0: main.c
     gcc -c -o main.o main.c
fact.o: fact.c
     gcc -c -o fact.o fact.c
isprime.o: isprime.c
     gcc -c -o isprime.o isprime.c
pal.o: pal.c
     gcc -c -o pal.o pal.c
createLib:
     ar crv libarith.a fact.o isprime.o pal.o
createStaticExe:
     gcc -o staticExe main.c -larith -L
