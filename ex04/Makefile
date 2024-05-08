# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarquar <rmarquar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 10:06:49 by rmarquar          #+#    #+#              #
#    Updated: 2024/03/27 14:39:28 by rmarquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name 		:=		program
CXX 		:=		c++
CXXFLAGS 	:= 		-Wall -Wextra -Werror -std=c++98
SRC 		:= 		main.cpp
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
