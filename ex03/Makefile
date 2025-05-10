NAME = InterfaceRecap

CC = c++
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

RM = rm -f

SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp AMateria.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean
