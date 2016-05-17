/*
** my_printf.h for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Fri Apr  8 12:19:52 2016 OLIVIER Steven
** Last
** Last update Fri Apr  8 12:19:56 2016 OLIVIER Steven
*/

#ifndef __my_printf_h__
#define __my_printf_h__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>


void    my_putchar(char c);
void    my_putstr(char *str);
void    my_put_nbr(int n);
void    my_put_nbru(unsigned int n);
void    my_s(va_list ap);
void    my_d(va_list ap);
void    my_c(va_list ap);
void    my_i(va_list ap);
void    my_o(va_list ap);
void	my_X(va_list ap);
void	my_x(va_list ap);
void    my_mod();
void    my_u(va_list ap);
void    point(va_list ap, char c);
void    convertion(int a);

int     my_printf(char *str, ...);
int	my_strlen(char *str);
int	hexadeci(unsigned int hexo, char* base);
#endif
