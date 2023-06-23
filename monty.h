#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
typedef struct bus_s
{
char *arg;
FILE *file;
char *content;
int lifi;
} bus_t;
extern bus_t bus;

typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void push(stack_t **head, unsigned int number);
void pall(stack_t **head, unsigned int number);
void print_int(stack_t **head, unsigned int number);
int run(char *content, stack_t **head, unsigned int counter, FILE *file);
void clear_stack(stack_t *head);
void print_pop(stack_t **head, unsigned int counter);
void swap(stack_t **head, unsigned int counter);
void add(stack_t **head, unsigned int counter);
void nothing(stack_t **head, unsigned int counter);
void sustration(stack_t **head, unsigned int counter);
void divides(stack_t **head, unsigned int counter);
void multiplies(stack_t **head, unsigned int counter);
void modulo(stack_t **head, unsigned int counter);
void print_char(stack_t **head, unsigned int counter);
void print_string(stack_t **head, unsigned int counter);
void rotates_left(stack_t **head, unsigned int counter);
void rotates_right(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void queue(stack_t **head, unsigned int counter);
void stack(stack_t **head, unsigned int counter);
#endif
