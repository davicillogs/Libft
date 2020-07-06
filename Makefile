NAME = libft.a

SRC_PATH = ./

SRC_NAME = ft_bzero.c  /
			ft_isalpha.c /
			ft_isprint.c /
			ft_memcmp.c /
			ft_memset.c /
			ft_strjoin.c /
			ft_strlen.c /
			ft_strrchr.c /
			ft_toupper.c /
			ft_calloc.c /
			ft_isascii.c /
			ft_isspace.c /
			ft_memcpy.c /
			ft_strchr.c /
			ft_strlcat.c /
			ft_strncmp.c /
			ft_substr.c /
			ft_atoi.c /
			ft_isalnum.c /
			ft_isdigit.c /
			ft_memchr.c /
			ft_memmove.c /
			ft_strdup.c /
			ft_strlcpy.c /
			ft_strnstr.c /
			ft_tolower.c /
			ft_split.c/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

SRCO = $(patsubst %.c, %.o, $(SRC))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCO)
	@ar rc $(NAME) $(SRCO)
	@echo "\033[92mLibrary Compiled"

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(SRCO)
	@echo "\033[93mAll .o Files Removed"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[95mLibrary Removed"

re:	fclean all

.PHONY: all fclean clean re
