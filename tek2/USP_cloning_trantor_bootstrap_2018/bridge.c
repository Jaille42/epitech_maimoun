#define NB_TRAINS 2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef struct s_data {
    int var;
    pthread_mutex_t mutex;
    char **map; 
} t_data;


void    *thread_1(void *arg) 
{
    
    pthread_exit(NULL);
}

void    bridge(void)
{
    t_data data;
    pthread_t trains[NB_TRAINS];
    int crossed_bridge = 0;
    int i = 0;
    write(1, "i = 0\n", 6);
    while (i < NB_TRAINS) {
        pthread_create(&trains[i], NULL, thread_1, NULL);
        write(1, "created\n", 8);
        i++;
    }
    write(1, "fini while\n", 11);
    i = 0;
    while (i < NB_TRAINS) {
        pthread_join(trains[i], NULL);
        write(1, "joined\n", 7);
        i++;
    }
    i = 0;
//    while (crossed_bridge < NB_TRAINS) {

  //  }
}

int main (int ac, char **av)
{
    bridge();
    return (0);
}