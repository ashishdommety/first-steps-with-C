#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[64];
    char place[64];
    char animal[64];
    char thing[64];

    puts("Enter a name: ");
    fgets(name,64,stdin);
    puts("Enter a place: ");
    fgets(place,64,stdin);
    puts("Enter an animal: ");
    fgets(animal,64,stdin);
    puts("Enter a thing: ");
    fgets(thing,64,stdin);

    printf(" Let me tell you a story! : ");
    // printf(name);
    printf("%s flew to %s to find his pet %s that was eating a %s", name, place, animal, thing);
    /* printf(place);
    printf(" to find his pet ");
    printf(animal);
    printf(" that was eating his ");
    printf(thing);*/
}
