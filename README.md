# Lib Pokemon
LibPokemon for Epitech Renforcement

### Compilation

You will find in this repository the files required to use the pokemon library. These files will have to be copied in your directory

You should know how to use a library by now.
As for the ``pokemon.csv`` file, lets just say, it likes to stay in the same directory as the library

### Usage

This library uses a structure that is declared as follows in the ``pokemon.h`` file and contains information about a pokemon
```C
typedef struct pokemon_s
{
    char *name;
    char *shout;
    int attack;
    int health_points;
    char *type;
} pokemon_t;
```
###### Tip: Don't forget to somehow compile this structure with your code. Do includes sound familiar ?


The pokemon library has a function that will help you create a ```pokemon_t``` structure with information about a pokemon passed as parameter

It is prototyped as follows:
```C
pokemon_t *get_pokemon(const char *name);
```

### Exemple

Lets give you an exemple of how to use our superb function :

```C
pokemon_t *my_first_pokemon = get_pokemon("Pikachu");

my_putstr("I choose you ");
my_putstr(my_first_pokemon->name);
my_putstr(" !\n");
my_putstr(my_first_pokemon->shout);
my_putchar('\n');
```

```
I choose you Pikachu !
Pikachuuuu
```

The pokemon structure contains lots of other useful information, be sure to check it out

###### Tip: If you give an invalid pokemon name, the function will return a null pointer
