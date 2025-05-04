NAME = tests.out

LIBFTPRINTF :=  $(PROJECT_DIR)/libftprintf.a
LIBFT :=  $(PROJECT_DIR)/libft/libft.a

RAW_SOURCES := $(shell find . -name "*.c")
SOURCES := $(patsubst ./%,%,$(RAW_SOURCES))
OBJECTS := $(SOURCES:.c=.o)

FLAGS = -Wall -Wextra -Itests -Iutils -Itests/basic -Iutils/file

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFTPRINTF) $(LIBFT)
	cc $(OBJECTS) $(LIBFTPRINTF) $(LIBFT) -o $(NAME)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

$(LIBFTPRINTF):
	$(MAKE) -C $(PROJECT_DIR)

$(LIBFT):
	$(MAKE) -C $(PROJECT_DIR)/libft

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
