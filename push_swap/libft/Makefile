

SRCS =	./ft_atoi.c		\
	./ft_atol.c 		\
	./ft_abs.c			\
	./ft_isalnum.c		\
  	./ft_isprint.c		\
	./ft_memcpy.c		\
	./ft_strchr.c		\
	./ft_strlcpy.c		\
	./ft_strnstr.c		\
	./ft_tolower.c		\
	./ft_atoi.c			\
	./ft_isalpha.c		\
	./ft_itoa.c			\
	./ft_memmove.c		\
	./ft_strdup.c		\
	./ft_strlen.c		\
	./ft_strrchr.c		\
	./ft_toupper.c		\
	./ft_bzero.c		\
	./ft_isascii.c		\
	./ft_memchr.c		\
	./ft_memset.c		\
	./ft_strjoin.c		\
	./ft_strmapi.c		\
	./ft_strtrim.c		\
	./ft_calloc.c		\
	./ft_isdigit.c		\
	./ft_memcmp.c		\
	./ft_split.c		\
	./ft_strlcat.c		\
	./ft_strncmp.c		\
	./ft_substr.c		\
	./ft_striteri.c		\
	./ft_putchar_fd.c	\
	./ft_putstr_fd.c	\
	./ft_putendl_fd.c	\
	./ft_putnbr_fd.c

SRCSB = ./ft_lstnew.c			\
		./ft_lstadd_front.c		\
		./ft_lstsize.c			\
		./ft_lstlast.c			\
		./ft_lstadd_back.c		\
		./ft_lstdelone.c		\
		./ft_lstclear.c			\
		./ft_lstiter.c			\
		./ft_lstmap.c

INCS	= ./libft.h
OBJS	= $(SRCS:c=o)
OBJSB	= $(SRCSB:c=o)
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.PHONY: all bonus clean fclean re

all:	$(NAME)

.c.o: 
	$(CC) $(CFLAGS) -I$(INCS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:	$(OBJSB)
	ar rc $(NAME) $(OBJSB)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
		$(RM) $(NAME)

re:	fclean all
