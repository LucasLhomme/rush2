/*
** EPITECH PROJECT, 2024
** occ_letters
** File description:
** occurences of a letter in a string
*/

#include "../include/my.h"
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
    int taille_occ = 1;
    if (letter > 122 || letter > 90 && letter < 97 || letter < 65)
        return 84;

    while (str[ind] != '\0') {
        if (my_tolower(str[ind]) == my_tolower(letter)) {
                occ++;
        }
        ind++;
    }
    my_putchar(letter);
    write(2, ":", 1);
    my_put_nbr(occ);
    return 0;
}

int main (int argc, char **argv)
{
    if (argc != 1) {
        return 84;
    } else {
        occ_letters(argv[0], argv[1]);
        return 0;
    }
}
