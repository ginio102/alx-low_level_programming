#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic information
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *t);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
