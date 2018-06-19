CC 		= gcc -g3

RM 		= rm -f

CPPFLAGS 	= -Iinclude

CFLAGS 		= -W -Wall -Wextra

SRCS 		= 	main/main.c \
			src/square.c \
			src/my_pow.c \
			src/square_root.c \
			src/is_alpha.c \
			src/my_putchar.c \
			src/my_readchar.c \
			src/low_case.c \
			src/my_strlen.c \
			src/my_putstr.c \
			src/my_strcpy.c \
			src/my_getnbr.c \
			src/my_strcat.c \
			src/my_strcmp.c 
			


OBJS 		= $(SRCS:.c=.o)

NAME 		= test


$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)