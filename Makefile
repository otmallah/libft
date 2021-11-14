NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

CC = @gcc

AR = ar rc

OBJECT = *.o

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_L_BLUE = \033[1;34m
C_WHITE = \033[1;37m
C_RES = \033[0m

FILES = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c


BS =	ft_lstsize.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstadd_back.c\
		ft_lstlast.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c

OS = $(subst .c,.o,$(BS))





OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJECT)	
	@echo "$(C_GREEN)[LIBFT CREATED]$(C_RES)"

clean :
	@$(RM) $(OBJECT)
	@echo "$(C_L_BLUE)[Objects deleted!]$(C_RES)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(C_RED)[Removed $(NAME)]$(C_RES)"

bonus: $(OS)
	 $(AR) $(NAME) $(OBJECT)
	@echo "$(C_RED)[/~~~\/~~\/~~~\/~~~\/~~\/~~~\                    /~~~\/~~\/~~~\/~~~\/~~\/~~~\
 					\n| /\/ /\/ /\ || /\/ /\/ /\ |                    | /\ \/\ \/\ || /\ \/\ \/\ |\
  					\n\ \/ /\/ /\/ /\ \/ /\/ /\/ /     Bonus part     \ \/\ \/\ \/ /\ \/\ \/\ \/ /\
  					\n\ \/\ \/\ \/  \ \/\ \/\ \/                      \/ /\/ /\/ /  \/ /\/ /\/ /\
					\n,_/\ \/\ \/\ \__/\ \/\ \/\ \______________________/ /\/ /\/ /\__/ /\/ /\/ /\_,\
					\n(__/\__/\__/\____/\__/\__/\________________________/\__/\__/\____/\__/\__/\__)]"

re : clean all
	@echo "$(C_RED)[ Mission Passed!]$(C_RES)"
	