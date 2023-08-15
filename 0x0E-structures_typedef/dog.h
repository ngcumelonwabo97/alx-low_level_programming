#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 * with its basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * poppy - typedef for struct dog
 */
typedef struct dog poppy;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
poppy *new_dog(char *name, float age, char *owner);
void free_dog(poppy *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
