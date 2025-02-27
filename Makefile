CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGETS = calculatrice calculatriceAvecFonction sommePremiersImpairs sommePremiersImpairsAvecFonction tableMultiplication tableMultiplicationAvecProcedure principalTP2

SRC_CALCULATRICE = PB1/calculatrice.c
SRC_CALCULATRICE_AVEC_FONCTION = PB1/calculatriceAvecFonction.c
SRC_SOMMEPREMIERSIMPAIRS = PB2/sommePremiersImpairs.c
SRC_SOMMEPREMIERSIMPAIRS_AVEC_FONCTION = PB2/sommePremiersImpairsAvecFonction.c
SRC_TABLEMULTIPLICATION = PB3/tableMultiplication.c
SRC_TABLEMULTIPLICATION_AVEC_PROCEDURE = PB3/tableMultiplicationAvecProcedure.c
SRC_PRINCIPALTP2 = PB4/principalTP2.c
SRC_AFFICHERTABLEMULTIPLICATION = PB4/afficherTableMultiplication.c
SRC_SOMMEIMPAIRS = PB4/sommeImpairs.c
SRC_EFFECTUERCALCUL = PB4/effectuerCalcul.c

OBJ_CALCULATRICE = $(SRC_CALCULATRICE:.c=.o)
OBJ_CALCULATRICE_AVEC_FONCTION = $(SRC_CALCULATRICE_AVEC_FONCTION:.c=.o)
OBJ_SOMMEPREMIERSIMPAIRS = $(SRC_SOMMEPREMIERSIMPAIRS:.c=.o)
OBJ_SOMMEPREMIERSIMPAIRS_AVEC_FONCTION = $(SRC_SOMMEPREMIERSIMPAIRS_AVEC_FONCTION:.c=.o)
OBJ_TABLEMULTIPLICATION = $(SRC_TABLEMULTIPLICATION:.c=.o)
OBJ_TABLEMULTIPLICATION_AVEC_PROCEDURE = $(SRC_TABLEMULTIPLICATION_AVEC_PROCEDURE:.c=.o)
OBJ_PRINCIPALTP2 = $(SRC_PRINCIPALTP2:.c=.o)
OBJ_AFFICHERTABLEMULTIPLICATION = $(SRC_AFFICHERTABLEMULTIPLICATION:.c=.o)
OBJ_SOMMEIMPAIRS = $(SRC_SOMMEIMPAIRS:.c=.o)
OBJ_EFFECTUERCALCUL = $(SRC_EFFECTUERCALCUL:.c=.o)

all: $(TARGETS)

calculatrice: $(OBJ_CALCULATRICE)
	$(CC) $(CFLAGS) -o $@ $^

calculatriceAvecFonction: $(OBJ_CALCULATRICE_AVEC_FONCTION)
	$(CC) $(CFLAGS) -o $@ $^

sommePremiersImpairs: $(OBJ_SOMMEPREMIERSIMPAIRS)
	$(CC) $(CFLAGS) -o $@ $^

sommePremiersImpairsAvecFonction: $(OBJ_SOMMEPREMIERSIMPAIRS_AVEC_FONCTION)
	$(CC) $(CFLAGS) -o $@ $^

tableMultiplication: $(OBJ_TABLEMULTIPLICATION)
	$(CC) $(CFLAGS) -o $@ $^

tableMultiplicationAvecProcedure: $(OBJ_TABLEMULTIPLICATION_AVEC_PROCEDURE)
	$(CC) $(CFLAGS) -o $@ $^

principalTP2: $(OBJ_PRINCIPALTP2) $(OBJ_AFFICHERTABLEMULTIPLICATION) $(OBJ_SOMMEIMPAIRS) $(OBJ_EFFECTUERCALCUL)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_CALCULATRICE) $(OBJ_CALCULATRICE_AVEC_FONCTION) $(OBJ_SOMMEPREMIERSIMPAIRS) $(OBJ_SOMMEPREMIERSIMPAIRS_AVEC_FONCTION) $(OBJ_TABLEMULTIPLICATION) $(OBJ_TABLEMULTIPLICATION_AVEC_PROCEDURE) $(OBJ_PRINCIPALTP2) $(OBJ_AFFICHERTABLEMULTIPLICATION) $(OBJ_SOMMEIMPAIRS)

fclean: clean
	rm -f $(TARGETS)

re: fclean all

.PHONY: all clean fclean re