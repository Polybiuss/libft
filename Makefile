NAME = libft.a
OBJ_DIR = obj
SRC_ALLOC = alloc
SRC_CHAR = char
SRC_LST = lst
SRC_MEM = mem
SRC_PUT = put
SRC_STR = str
SRC_PRINTF = ft_printf
SRC_GNL = gnl
SRC = $(SRC_ALLOC)/ft_calloc.c \
	$(SRC_CHAR)/ft_isalnum.c \
	$(SRC_CHAR)/ft_isalpha.c \
	$(SRC_CHAR)/ft_isascii.c \
	$(SRC_CHAR)/ft_isdigit.c \
	$(SRC_CHAR)/ft_isprint.c \
	$(SRC_CHAR)/ft_tolower.c \
	$(SRC_CHAR)/ft_toupper.c \
	$(SRC_LST)/ft_lstadd_back.c \
	$(SRC_LST)/ft_lstadd_front.c \
	$(SRC_LST)/ft_lstclear.c \
	$(SRC_LST)/ft_lstdelone.c \
	$(SRC_LST)/ft_lstiter.c \
	$(SRC_LST)/ft_lstlast.c \
	$(SRC_LST)/ft_lstmap.c \
	$(SRC_LST)/ft_lstnew.c \
	$(SRC_LST)/ft_lstsize.c \
	$(SRC_MEM)/ft_bzero.c \
	$(SRC_MEM)/ft_memchr.c \
	$(SRC_MEM)/ft_memcmp.c \
	$(SRC_MEM)/ft_memcpy.c \
	$(SRC_MEM)/ft_memmove.c \
	$(SRC_MEM)/ft_memset.c \
	$(SRC_PUT)/ft_putchar_fd.c \
	$(SRC_PUT)/ft_putendl_fd.c \
	$(SRC_PUT)/ft_putnbr_fd.c \
	$(SRC_PUT)/ft_putstr_fd.c \
	$(SRC_STR)/ft_atoi.c \
	$(SRC_STR)/ft_itoa.c \
	$(SRC_STR)/ft_split.c \
	$(SRC_STR)/ft_strchr.c \
	$(SRC_STR)/ft_strdup.c \
	$(SRC_STR)/ft_striteri.c \
	$(SRC_STR)/ft_strjoin.c \
	$(SRC_STR)/ft_strlcat.c \
	$(SRC_STR)/ft_strlcpy.c \
	$(SRC_STR)/ft_strlen.c \
	$(SRC_STR)/ft_strmapi.c \
	$(SRC_STR)/ft_strncmp.c \
	$(SRC_STR)/ft_strnstr.c \
	$(SRC_STR)/ft_strrchr.c \
	$(SRC_STR)/ft_strtrim.c \
	$(SRC_STR)/ft_substr.c \
	$(SRC_PRINTF)/ft_printf.c \
	$(SRC_PRINTF)/ft_putchar_printf.c \
	$(SRC_PRINTF)/ft_putint_printf.c \
	$(SRC_PRINTF)/ft_putptr_printf.c \
	$(SRC_PRINTF)/ft_putstr_printf.c \
	$(SRC_PRINTF)/ft_putuint_printf.c \
	$(SRC_PRINTF)/ft_putx_printf.c \
	$(SRC_PRINTF)/ft_putxupper_printf.c \
	$(SRC_PRINTF)/ft_select.c \
	$(SRC_GNL)/get_next_line.c \

OBJECTS = $(SRC:%.c=$(OBJ_DIR)/%.o)

CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
ESC = \033
RESET = $(ESC)[0m
BACKGROUND = $(ESC)[48;5
FOREGROUND = $(ESC)[38;2
RED = ;196m
PURPLE = ;129m
BLUE = ;27m
PINK = ;213m
YELLOW = ;214m
GREEN = ;118m


all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(FOREGROUND)$(BLUE)create libft.a...$(RESET)"
	@$(AR) -rcs $@ $^
	@echo "$(FOREGROUND)$(PINK)libft.a created!$(RESET)"

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(FOREGROUND)$(RED)create $(OBJ_DIR)/$<$(RESET)"

$(OBJ_DIR):
	@echo "$(FOREGROUND)$(YELLOW)make directory if not exist..$(RESET)"
	@mkdir -p $(OBJ_DIR)
	@echo "$(FOREGROUND)$(GREEN)directory created$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(FOREGROUND)$(RED)all files .o removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(B_PURPLE)libft.a removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re