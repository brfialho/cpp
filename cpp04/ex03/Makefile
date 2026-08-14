RED=\033[31m
GREEN=\033[32m
BOLD=\033[1m
MAGENTA=\033[95m
RESET=\033[0m

define LOADING
    @sleep 0.4
    @echo -n "$(MAGENTA)."
    @sleep 0.15
    @echo -n "."
    @sleep 0.15
    @echo ".$(RESET)"
    @sleep 0.15
endef

CC= c++ -Werror -Wextra -Wall -std=c++98
INCLUDES= -Iincludes/
SRC= main.cpp \
	srcs/AMateria.cpp \
	srcs/Ice.cpp \
	srcs/Cure.cpp \
# 	srcs/ICharacter.cpp

O_DIR= obj/
OBJ= $(SRC:%.cpp=$(O_DIR)%.o)

NAME= materia.out

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(INCLUDES) -o $(NAME)
	@echo -n "$(GREEN)\nSuccessfully Generated $(RESET)$(NAME) \n\n"

$(O_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "$(MAGENTA)Compiling$(RESET) $(notdir $<)"
	@sleep 0.0001
	@$(CC) $(INCLUDES) -c $< -o $@

clean:
	@echo "$(MAGENTA)Cleansing $(NAME) Objects"
	$(LOADING)
	@rm -rf $(O_DIR)

fclean:
	@echo "$(MAGENTA)Cleansing $(NAME)"
	$(LOADING)
	@rm -rf $(O_DIR)
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)

valgrind: all
	@valgrind ./$(NAME)

rerun: re run

vrerun: re valgrind

.PHONY: all re fclean clean run rerun valgrind vrerun