NAME = phonebook

FLAGS = -Wall -Wextra -Werror

STDFLAGS = -std=c++98

all :
	clang++ main.cpp PhoneBook.cpp Contact.cpp ${FLAGS} ${STDFLAGS} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all