# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 13:23:33 by rmarquar          #+#    #+#              #
#    Updated: 2024/03/27 14:11:13 by rmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 		:=		Moar_brainz
CXX 		:=		c++
CXXFLAGS 	:= 		-Wall -Wextra -Werror -std=c++98
SRC 		:= 		main.cpp Zombie.cpp zombieHorde.cpp
OBJS 		:=		$(SRC:.cpp=.o)

$(Name): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(Name)

all: $(Name)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(Name)

re:	fclean all

.PHONY: all clean fclean re
