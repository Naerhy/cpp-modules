NAME = intern

SRC = Bureaucrat.cpp \
	  Form.cpp \
	  Intern.cpp \
	  main.cpp \
	  PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp \
	  ShrubberyCreationForm.cpp

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
