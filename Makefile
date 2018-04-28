CC 		= gcc

RM 		= rm -f

CPPFLAGS 	= -Iinclude

CFLAGS 		= -W -Wall -Wextra

SRCS 		= src/main.c

OBJS 		= $(SRCS:.c=.o)

NAME 		= test


$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
