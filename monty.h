#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
* struct bus_s - variables -args, file, line content
* @arg: value
* @file: pointer to monty file
* @content: line content
* @lifi: flag change stack <-> queue
* Description: carries values through the program
*/
typedef struct bus_s
{
char *arg;
FILE *file;
char *content;
int lifi;
} bus_t;
extern bus_t bus;
/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/

typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void function_to_print_stack(stack_t **head, unsigned int number);
void function_to_print_intiger(stack_t **head, unsigned int number);
int run(char *cnt, stack_t **h, unsigned int c, FILE *f);
void function_to_clear_stack(stack_t *head);
void function_to_print_op(stack_t **head, unsigned int counter);
void function_to_swap(stack_t **head, unsigned int counter);
void function_to_add_element(stack_t **head, unsigned int counter);
void function_none(stack_t **head, unsigned int counter);
void function_to_sustration(stack_t **head, unsigned int counter);
void function_divides_two_element(stack_t **head, unsigned int counter);
void function_to_multiplies(stack_t **head, unsigned int counter);
void function_to_modulo(stack_t **head, unsigned int counter);
void function_to_print_char(stack_t **head, unsigned int counter);
void function_to_print_string(stack_t **head, unsigned int counter);
void function_to_rotates_stack(stack_t **head, unsigned int counter);
void function_to_rotate_stack_bottom(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node_to_stack(stack_t **h, int n);
void function_to_add_queue(stack_t **head, int n);
void function_to_print_queue(stack_t **head, unsigned int counter);
void function_to_print_stack_top(stack_t **head, unsigned int counter);
#endif
