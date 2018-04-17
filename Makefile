# **************************************************************************** #
#                                                          LE - /              #
#                                                              /               #
#   Makefile                                         .::    .:/ .      .::     #
#                                                 +:+:+   +:    +:  +:+:+      #
#   By: aberneli <aberneli@student.42.fr>          +:+   +:    +:    +:+       #
#                                                 #+#   #+    #+    #+#        #
#   Created: 2017/11/16 07:56:05 by aberneli     #+#   ##    ##    #+#         #
#   Updated: 2018/04/10 09:47:28 by albarbos    ###    #+. /#+    ###.fr       #
#                                                         /                    #
#                                                        /                     #
# **************************************************************************** #

.PHONY: all clean fclean re normy

NAME = fdf

SRCS = 			src/fdf.c 					\
				src/parse.c 				\
				src/init_struct_parse.c 	\
				src/init_struct_print.c 	\
				src/init_struct_option.c	\
				src/print_line.c 			\
				src/make_coor.c 			\
				src/handing_option.c 		\

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

INC = -I minilibx_macos -I libft

HEADERS =

LIBS = minilibx_macos/libmlx.a libft/libft.a

EXT_LIBS = -framework OpenGl -framework AppKit

all: $(NAME)

$(NAME): $(LIBS) $(OBJS)
	gcc $(FLAGS) $(LIBS) $(EXT_LIBS) $(OBJS) -o $(NAME)

$(LIBS):
	make -C ./libft
	make -C ./minilibx_macos

./%.o: ./%.c $(HEADERS)
	gcc $(FLAGS) $(INC) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make -C ./libft re
	make -C ./minilibx_macos re

re2: fclean all

normy:
	norminette $(SRCS) $(HEADERS)
