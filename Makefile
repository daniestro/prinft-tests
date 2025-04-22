NAME = tests.out

LIBFTPRINTF :=  $(PROJECT_DIR)/libftprintf.a

SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

FLAGS = -Wall -Werror -Wextra -Iutils -Ibasic

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFTPRINTF)
	cc $(OBJECTS) $(LIBFTPRINTF) -o $(NAME)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

$(LIBFTPRINTF):
	$(MAKE) -C $(PROJECT_DIR)
