#include <stdio.h>

// Define a structure to represent a book
struct Book {
  char name[25];   // Name of the book
  char author[25]; // Author of the book
  int pages;       // Number of pages in the book
};

// Function prototype for displaying book information
void display(struct Book *);

int main() {
  // Create a book instance and initialize its values
  struct Book book1 = {"Ready Player", "Unknown", 357};

  // Create a pointer to a struct Book and point it to book1
  struct Book *pointer;
  pointer = &book1;

  // Display the information of the book
  display(pointer);

  // Indicate successful execution to the operating system
  return 0;
}

// Function to display book information
void display(struct Book *givenBook) {
  // Print the details of the given book
  printf("Name of the book: %s\nAuthor: %s\nNumber of Pages: %d\n",
         givenBook->name, givenBook->author, givenBook->pages);
}
