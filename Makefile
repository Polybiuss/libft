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
GREEN = \033[0;32m
CYAN = \033[0;36m
RESET = \033[0m
GRAY = \033[90m

SUCCESS = $(GREEN)[SUCCESS]$(RESET)
INFO = $(CYAN)[INFO]$(RESET)


all: $(NAME)

$(OBJ_DIR):
	@if [ ! -d ./$(OBJ_DIR) ]; then \
		echo "$(INFO) Creating $(OBJ_DIR) directory ..."; \
		echo "$(GRAY)mkdir -p $(OBJ_DIR)"; \
		mkdir -p $(OBJ_DIR); \
	fi

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@echo "$(INFO) Compiling $<...$(GRAY)"
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@echo "$(INFO) Creating $(NAME)...$(GRAY)"
	@$(AR) -rcs $@ $^
	@echo "$(SUCCESS) $(NAME) created succesfully!"

clean:
	@echo "$(INFO) Removing object files...$(GRAY)"
	@rm -rf $(OBJ_DIR)
	@echo "$(SUCCESS) Objects removed."

fclean: clean
	@echo "$(INFO) Removing $(NAME)...$(GRAY)"
	@rm -f $(NAME)
	@echo "$(SUCCESS) $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re