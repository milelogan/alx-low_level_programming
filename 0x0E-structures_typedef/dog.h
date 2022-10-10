#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure of type dog
 * @name: name
 * @age: age of dog
 * @owner: owner of dog
 * Description: a struct dog that takes in some variables
 */

typedef struct dog
{
	char *name;
	float *age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
