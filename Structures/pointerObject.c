#include <stdio.h>

// Define a structure for a book
struct Book {
  char name[25];
  char author[25];
  int number;
};

int main() {
  // Declare a structure variable book1 and initialize it
  struct Book book1 = {"Harry Potter", "J.K. Rowling", 100};

  // Declare a pointer to a structure of type Book
  struct Book *pointer;

  // Assign the address of book1 to the pointer
  pointer = &book1;

  // Print the details of the book using the pointer
  printf("Book Name: %s\nAuthor Name: %s\nBook Number: %d\n", pointer->name,
         pointer->author, pointer->number);

  return 0;
}
