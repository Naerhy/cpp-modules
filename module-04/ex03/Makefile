NAME = interface

SRC = AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  main.cpp \
	  MateriaSource.cpp

OBJ = ${SRC:.cpp=.o}

CC = g++ ${CFLAGS}

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

.cpp.o:
	${CC} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJ}
	${CC} -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
