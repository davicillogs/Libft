NAME = libft.a

FLAGS = -Wall -Wextra -Werror -g

INC = ./includes

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
			ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)


### TODO : Pretty makefile

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
%.o:%.c
	gcc -c $(FLAGS) -I $(INC) $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
