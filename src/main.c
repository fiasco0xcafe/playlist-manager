#include <stdio.h>
#include <string.h>

void add_song(char *song_choice, size_t song);

int main(int argc, char **argv) {
    char song[128];

    if (argc < 2) {
        fprintf(stderr, "Please enter an option\n");
        return 1;
    }
    else if (strcmp(argv[1], "--help") == 0) {
        puts("usage: ./playlist [command]");
    }
    else if (strcmp(argv[1], "add") == 0){
        add_song(song, sizeof(song));
    }
        
    return 0;
}

void add_song(char *song_choice, size_t song) {
    printf("Enter a song: ");
    fgets(song_choice, song, stdin);
}
