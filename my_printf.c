/*
** my_printf.c for header in /Users/olivie_a/My_printf/olivie_a
** 
** Made by OLIVIER Steven
** Login   <olivie_a@etna-alternance.net>
** 
** Started on  Tue Apr  5 14:17:47 2016 OLIVIER Steven
** Last
** Last
 update Tue Apr  5 14:17:49 2016 OLIVIER Steven
*/
#include "my_printf.h"

void	point(va_list ap, char c)
{
  void (*tab[9]) (va_list);
  int i;
  char* strg;

  i = 0;
  strg = "scdio%uxX";
  tab[0] = &my_s;
  tab[1] = &my_c;
  tab[2] = &my_d;
  tab[3] = &my_i;
  tab[4] = &my_o;
  tab[5] = &my_mod;
  tab[6] = &my_u;
  tab[7] = &my_x;
  tab[8] = &my_X;
  while ( strg[i] != '\0' )
    {
      if (c == strg[i])
        (*tab[i])(ap);
      i++;
    }
}

int	my_printf(char *str, ...)
{
  va_list ap;
  int taille;
  int c;
  char a;

  va_start(ap, str);
  c = 0;
  a = 0;
  taille = my_strlen(str);
  while (taille != c)
  {
    if (str[c] == '%')
    {
      a = str[c+1];
      point(ap, a);
      c++;
    }
   else
      my_putchar(str[c]);
    c++;
  }
  va_end(ap);
  return 0;
}
