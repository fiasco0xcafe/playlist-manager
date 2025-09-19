#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Please enter an option\n");
        return 1;
    }
    else if (strcmp(argv[1], "--help") == 0) {
        puts("usage: ./playlist [command]");
    }
        
    return 0;
}
