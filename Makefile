# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/04/27 12:47:23 by bpisano      #+#   ##    ##    #+#        #
#    Updated: 2018/04/27 15:41:59 by bpisano     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libmlx.a

MLX = ./mlx/libmlx.a

SRC = ml_point.c			\
	  ml_size.c				\
	  ml_frame.c			\
	  ml_view.c				\
	  ml_init.c				\
	  ml_display_window.c	\
	  ml_fill_pixel.c		\
	  ml_draw_rect.c		\

OBJECTS = $(SRC:.c=.o)

HEADS = -I ./					\
		-I ./mlx				\

FLAGS = -Wall -Werror -Wextra

RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
END = \033[0m

all: $(NAME)

$(MLX):
	@make -C mlx
	@echo "$(BLUE)mlx\033[500D\033[42C$(GREEN)[DONE]$(END)"

$(NAME): $(MLX) $(OBJECTS)
	@cp $(MLX) $(NAME)
	@ar rc $(NAME) $(OBJECTS) 
	@echo "$(BLUE)$(NAME)\033[500D\033[42C$(GREEN)[DONE]$(END)"

%.o : %.c
	@echo "Compiling $(notdir $@) \033[500D\033[42C$(RED)[KO]$(END)"
	@gcc $(FLAGS) $(HEADS) -o $@ -c $<
	@echo "\033[1A\033[500D\033[42C$(GREEN)[DONE]$(END)"

clean:
	@make clean -C mlx
	@rm -f $(OBJECTS)

fclean: clean	
	@rm -f $(NAME)

re: fclean all
