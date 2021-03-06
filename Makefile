CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f

SRC = ft_bzero.c\
			ft_isalpha.c\
			ft_isprint.c\
			ft_memcmp.c\
			ft_memset.c\
			ft_strjoin.c\
			ft_strlen.c\
			ft_strrchr.c\
			ft_toupper.c\
			ft_calloc.c\
			ft_isascii.c\
			ft_isspace.c\
			ft_memcpy.c\
			ft_strchr.c\
			ft_strlcat.c\
			ft_strncmp.c\
			ft_substr.c\
			ft_atoi.c\
			ft_isalnum.c\
			ft_isdigit.c\
			ft_memchr.c\
			ft_memmove.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strnstr.c\
			ft_strcount.c\
			ft_strtrim.c\
			ft_tolower.c\
			ft_strcountchr.c\
			ft_strndup.c\
			ft_itoa.c\
			ft_strncat.c\
			ft_split.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_memccpy.c\
			ft_strmapi.c
OBJ = $(SRC:.c=.o)

SRC_B = ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c
OBJ_B = $(SRC_B:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_B)
	ar rcs $(NAME) $(OBJ) $(OBJ_B)

.PHONY:	all clean fclean re bonus
