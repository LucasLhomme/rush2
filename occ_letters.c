/*
** EPITECH PROJECT, 2024
** occ_letters
** File description:
** occurences of a letter in a string
*/

#include "include/my.h"
#include <unistd.h>

void my_print_percent(float percent)
{
    int ent = (int)percent;
    int dec = (int)(percent * 100) - (ent * 100);

    write(1, " ", 1);
    write(1, "(", 1);
    my_put_nbr(ent);
    my_putchar('.');
    my_put_nbr(dec);
    write(1, "%", 1);
    write(1, ")", 1);
}

char my_tolower(char str)
{
    if (str >= 65 && str <= 90) {
        str = str + 32;
    }
    return str;
}

static void occ_letters(char *str, char letter)
{
    int ind = 0;
    int occ = 0;
    float percent = 0.0;
    int val_tot = my_strlen(str);

    while (str[ind] != '\0') {
        if (my_tolower(str[ind]) == my_tolower(letter)) {
                occ++;
        }
        ind++;
    }
    my_putchar(letter);
    write(1, ":", 1);
    my_put_nbr(occ);
    percent = (occ * 100) / val_tot;
    my_print_percent(percent);
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
