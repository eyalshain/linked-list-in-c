CC = gcc
SRC = linked_list.c main.c 

TARGET = run

all:	$(TARGET)

$(TARGET):
	$(CC) -o $(TARGET) $(SRC)


clean:
	rm -f run