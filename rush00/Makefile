SRC_DIR := ./
OBJ_DIR := ./obj/
SRC :=  main.cpp \
        Entity.cpp \
        GameEngine.cpp \
        Player.cpp \
        Bullet.cpp \
        Visual.cpp

HEADERS := main.cpp \
        Entity.cpp \
        GameEngine.cpp \
        Player.cpp \
        Bullet.cpp \
        Visual.cpp

SRC := $(addprefix $(SRC_DIR), $(SRC))
OBJ := $(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.cpp=.o))
NAME = ft_retro
CC = c++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^ -lncurses
	@echo "\033[0;32m$@ was created"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all