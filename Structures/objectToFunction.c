#include <stdio.h>

// Define a structure to represent a book
struct Book {
  char name[25];
  char author[25];
  int pages;
};

// Function prototype for displaying book information
void display(struct Book);

int main() {
  // Create a book instance and initialize its values
  struct Book book1 = {"Ready Player", "Unknown", 357};

  // Display the information of the book
  display(book1);

  // Indicate successful execution to the operating system
  return 0;
}

// Function to display book information
void display(struct Book givenBook) {
  // Print the details of the given book
  printf("Name of the book: %s\nAuthor: %s\nNumber of Pages: %d\n",
         givenBook.name, givenBook.author, givenBook.pages);
}
