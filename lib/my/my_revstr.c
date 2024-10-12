/*
** EPITECH PROJECT, 2024
** revstr
** File description:
** reverse le str
*/

char *my_revstr(char *str)
{
    int lenght = my_revstr(str);
    char temp;

    for (int i = 0; i < lenght / 2; i++) {
        temp = str[i];
        str[i] = str[lenght - i - 1];
        str[lenght - i - 1] = temp;
    }
    return &(str[0]);
}
