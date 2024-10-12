/*
** EPITECH PROJECT, 2024
** occ_letters
** File description:
** occurences of a letter in a string
*/

#include "include/my.h"
#include <unistd.h>

char my_tolower(char str)
{
    if (str >= 65 && str <= 90) {
        str = str + 32;
    }
    return str;
}

static int occ_letters(char *str, char letter)
{
    int ind = 0;
    int occ = 0;

    while (str[ind] != '\0') {
        if (my_tolower(str[ind]) == my_tolower(letter)) {
                occ++;
        }
        ind++;
    }
    my_putchar(letter);
    write(2, ":", 1);
    my_put_nbr(occ);
}

int main(int argc, char **argv)
{
    for (int i = 2; i < argc; i++) {
        if (my_strlen(argv[i]) > 1) {
            return 84;
        }
        occ_letters(argv[1], argv[i][0]);
        my_putchar('\n');
    }
    return 0;
}
