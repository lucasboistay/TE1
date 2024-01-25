CPPC = g++
CFLAGS = -W -Wall -Wshadow -pedantic -std=c++17
SRCS = fcts.cpp util.cpp methode.cpp main.cpp
RM = rm -f

OBJS = $(SRCS:.cpp=.o) # liste des fichiers objets

# Première règle => pour l'exécutable
a.out : $(OBJS)
	$(CPPC) $(CFLAGS) $^ -o $@ 

# Exemple de règle pour fcts.o
fcts.o : fcts.cpp fcts.h
	$(CPPC) -c $(CFLAGS) fcts.cpp
# ou mieux avec $<, qui désigne la première dépendance
#	$(CPPC) -c $(CFLAGS) $<

# Ecrire ci-dessous les règles pour les autres fichiers sources

# Exemples de règles pour le ménage
.PHONY: clean super_clean

clean :
	$(RM) $(OBJS)

super_clean :
	$(RM) $(OBJS) a.out
