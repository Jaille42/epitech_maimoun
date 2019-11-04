#include "my.h"

void    add(t_struct *Alex) {
    Alex->i = Alex->i + 1;
}

t_list	*push(t_list* list, int number)
{
	t_list *newElem = malloc(sizeof(t_list));

	newElem->z = number;
	if (list == NULL)
		newElem->next = NULL;
	else
		newElem->next = list;
	return (newElem);
}

int main (int ac, char **av) {
    t_struct Alex;
    t_list *list;


    list = push(list, atoi(av[1]));
    list = push(list, atoi(av[2]));
    list = push(list, atoi(av[3]));
    first = list;

    while (list != NULL) {
        printf("struct : %i\n", list->z);
        list = list->next;
    }
    list = first;
    while (list != NULL) {
        printf("struct : %i\n", list->z);
        list = list->next;
    }
}