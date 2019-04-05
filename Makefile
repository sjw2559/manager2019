 CC = gcc
 CFlags  = -W -Wall
 TARGET = signup
 OBJECTS = main.o menu.o user.o
 
 all : $(TARGET)
 
 $(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
 clean : 
	rm *.o signup 
