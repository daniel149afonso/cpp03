# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME        = fight
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRC         = main.cpp ClapTrap.cpp
OBJ         = $(SRC:.cpp=.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ Build complete: $(NAME)"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiled: $<"

clean:
	$(RM) $(OBJ)
	@echo "🧹 Object files removed"

fclean: clean
	$(RM) $(NAME)
	@echo "🗑️  Executable removed"

re: fclean all

# **************************************************************************** #
#                                   UTILS                                      #
# **************************************************************************** #

.PHONY: all clean fclean re