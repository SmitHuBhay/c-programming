#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

int main() {
    enum Color c;
    printf("Enter a color number:\n");
    printf("0 = RED\n1 = GREEN\n2 = BLUE\n3 = YELLOW\n4 = BLACK\n5 = WHITE\n");
    scanf("%d", &c);

    switch (c) {
        case RED:
            printf("Hex code: #FF0000\n");
            break;
        case GREEN:
            printf("Hex code: #00FF00\n");
            break;
        case BLUE:
            printf("Hex code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hex code: #FFFF00\n");
            break;
        case BLACK:
            printf("Hex code: #000000\n");
            break;
        case WHITE:
            printf("Hex code: #FFFFFF\n");
            break;
        default:
            printf("Invalid color selection.\n");
    }

    return 0;
}
