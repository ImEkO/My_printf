##
## Makefile for header in /Users/olivie_a/My_printf/olivie_a
## 
## Made by OLIVIER Steven
## Login   <olivie_a@etna-alternance.net>
## 
## Started on  Fri Apr  8 12:57:37 2016 OLIVIER Steven
## Last update Fri Apr  8 12:57:37 2016 OLIVIER Steven
##

CC	= gcc
SRC	=	my_printf.c\
		fonction.c\
		fonction2.c\
		option.c\
		option2.c


OBJ	= $(SRC:%.c=%.o)
RM	= rm -rf
CFLAGS	+= -shared
CFLAG	+= -fPIC -W -Wall -Werror -ansi
static  = libmy_printf_`uname -m`-`uname -s`.a
dynamic = libmy_printf_`uname -m`-`uname -s`.so

make: all

my_printf_static:	$(OBJ)
			ar r $(static) $(OBJ)

all: my_printf_static my_printf_dynamic

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME) $(static) $(dynamic) a.out main.o

re:	fclean all

my_printf_dynamic:	$(OBJ)
			$(CC) $(CFLAG) -o $(dynamic) $(CFLAGS) $(SRC)

.PHONY:		all clean fclean my_printf_static my_printf_dynamic re