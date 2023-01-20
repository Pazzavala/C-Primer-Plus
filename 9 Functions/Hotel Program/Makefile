# .PHONY: all
# all: usehotels

# usehotels: usehotels.o hotel.o
# 	gcc -o usehotels usehotels.o hotel.o

# usehotels.o: usehotels.c
# 	gcc -c usehotels.c -o usehotels.o

# hotel.o: hotel.c
# 	gcc -c hotel.c -o hotel.o

# .PHONY: clean
# clean: 
# 	rm -f *.o usehotels

.PHONY: all
all: usehotels

usehotels: usehotels.o hotel.o
	gcc -o $@ $^

%.o: %.c
	gcc -c $< -o $@

.PHONY: clean
clean: 
	rm -f *.o usehotels