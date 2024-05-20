#include <stdio.h>

void change_colour(int color_val,int bold)
{
    printf("\033[%d;3%dm",bold, color_val);
}

void change_colour_to_black()
{
    printf("\033[0;30m");
}

void change_colour_to_red()
{
    printf("\033[0;31m");
}

void change_colour_to_green()
{
    printf("\033[0;32m");
}

void change_colour_to_yellow()
{
    printf("\033[0;33m");
}

void change_colour_to_blue()
{
    printf("\033[0;34m");
}

void change_colour_to_purple()
{
    printf("\033[0;35m");
}

void change_colour_to_cyan()
{
    printf("\033[0;36m");
}

void change_colour_to_white()
{
    printf("\033[0;37m");
}

