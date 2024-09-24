#include <stdio.h>
#include <stdlib.h>
int main(){
    char a = 'o';
    switch(a){
        case 'o':
            puts("o");
        break;
        case 'n':
            puts("n");
        break;
        default:
            puts("autre");
    }
    return EXIT_SUCCESS;
}