#ifndef POKEMON_H_
#define POKEMON_H_

typedef struct pokemon_s
{
    char *name;
    char *shout;
    int attack;
    int health_points;
    char *type;
} pokemon_t;

pokemon_t *get_pokemon(char const *);

#endif /* POKEMON_H_ */