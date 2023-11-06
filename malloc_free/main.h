#ifndef __MAIN_H__
#define __MAIN_H__

/*PROTOTYPE FUNCTION _PUTCHAR*/
int _putchar(char c);

/*PROTOTYPE FUNCTIONS OF THE PROJECT*/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif