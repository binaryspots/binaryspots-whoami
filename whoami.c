#include <stdio.h>
#include <stdbool.h>

void myName(char name[], char handle[], char nickname[]) {
    printf("Hello my name is %s.\n", name);
    printf("My online handle is %s.\n", handle);
    printf("My nickname is %s.\n", nickname);
}

char *interests[] = {"security research", "becoming a better programmer", "and keeping fit"};

int main() {
    int numSpots = 99;
    int i = 0;

    myName("Anthony", "binaryspots", "pejjy");
    
    printf("Always in the lab getting better at ");
    while (i < 3 - 1) {
        printf("%s, ", interests[i]);
        i++;
    } 
    printf("%s.\n\n", interests[2]);

    bool dalmatian_enthusiast = true;

    if (dalmatian_enthusiast == true) {
        printf("Guilty, I am a dalmatian enthusiast.\n");
    }

    while ( numSpots != 101 ) {
        printf("That is the incorrect number of spots %d.\n", numSpots);
        numSpots++;
    }
    printf("The number of spots is 101!\n");
    return (0);
}


