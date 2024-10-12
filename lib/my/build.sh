#!/usr/bin/env bash
##
## EPITECH PROJECT, 2024
## build lib
## File description:
## lib qui se construit !
##

gcc -c *.c
ar rc libmy.a *.o
rm *.o
