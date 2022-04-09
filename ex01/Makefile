# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmizuno <mmizuno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 23:32:38 by mmizuno           #+#    #+#              #
#    Updated: 2022/04/09 19:09:15 by mmizuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ================================= Variable ================================= #

NAME				= zombiehorde

INC_DIR				= ./incs/
SRC_DIR				= ./srcs/
SRC_NAME			= Zombie.cpp \
					  ZombieHorde.cpp \
					  main.cpp
SRCS				= $(addprefix $(SRC_DIR), $(SRC_NAME))
OBJS				= $(SRCS:.cpp=.o)					  

CC					= clang++
CFLAGS				= -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=leak
INCDIR				= -I $(INC_DIR)

RM					= rm -f

# ----------------------------- Escape Character ----------------------------- #

ESC_RESET			= \033[0m
FNT_BOLD			= \033[1m
FNT_FINE			= \033[2m
FNT_ITALIC			= \033[3m
FNT_ULINE			= \033[4m
CLR_BLACK			= \033[38;5;00m
CLR_RED				= \033[38;5;01m
CLR_GREEN			= \033[38;5;02m
CLR_YELLOW			= \033[38;5;03m
CLR_BLUE			= \033[38;5;04m
CLR_MAGENTA			= \033[38;5;05m
CLR_CYAN			= \033[38;5;06m
CLR_WHITE			= \033[38;5;07m

# ================================== Rules =================================== #

# ---------------------------------- .c.o ------------------------------------ #

.cpp.o:
					$(CC) $(CFLAGS) $(INCDIR) -c $< -o $(<:.cpp=.o)

# ------------------------------ $(NAME) / all ------------------------------- #

$(NAME):			$(OBJS)
					@echo "$(FNT_BOLD)$(CLR_CYAN)[ $(NAME) is compiling ... ]$(ESC_RESET)"
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
					@echo "$(FNT_BOLD)$(CLR_YELLOW)[ $(NAME) successfully compiled !! ]$(ESC_RESET)"

all:				$(NAME)

# ------------------------------ clean / fclean ------------------------------ #

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

# ------------------------------------ re ------------------------------------ #

re:					fclean all

# ---------------------------------- .PHONY ---------------------------------- #

.PHONY:				all clean fclean re
