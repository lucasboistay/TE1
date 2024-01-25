CPPC = g++
CFLAGS = -W -Wall -Wshadow -pedantic -std=c++17
INCLUDES = -I./include -I./lib/eigen-3.4.0
SRCS = fcts.cpp util.cpp methods.cpp main.cpp
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/,$(SRCS:%.cpp=%.o))
RM = rm -f

# Première règle => pour l'exécutable
a.out : $(OBJS)
	$(CPPC) $(CFLAGS) $^ -o $@ $(INCLUDES)

# Règles pour chaque fichier objet
$(OBJ_DIR)/%.o: src/%.cpp
	@echo "Building $@ from $<"
	@mkdir -p $(OBJ_DIR)
	$(CPPC) -c $(CFLAGS) $(INCLUDES) $< -o $@

# Exemples de règles pour le ménage
.PHONY: clean super_clean

clean :
	$(RM) $(OBJS)

super_clean :
	$(RM) $(OBJS) a.out
