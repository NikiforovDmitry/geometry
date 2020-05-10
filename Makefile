.PHONY: clean all run_geometry
FLAGS := -std=c++98
FLAG := -std=c++11
SRC_DIR := ./src
BIN_DIR := ./bin
OBJ_DIR := ./build
all: $(BIN_DIR)/geometry

$(BIN_DIR)/geometry:  $(OBJ_DIR)/main.o  $(OBJ_DIR)/input_handle.o
	g++ -Wall -Wextra $(OBJ_DIR)/main.o  $(OBJ_DIR)/input_handle.o -o $(BIN_DIR)/geometry -lm $(FLAGS)

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	g++ -Wall -Wextra $(SRC_DIR)/main.cpp -o  $(OBJ_DIR)/main.o $(FLAGS)

$(OBJ_DIR)/input_handle.o: $(SRC_DIR)/input_handle.cpp
		g++ -Wall -Wextra  $(SRC_DIR)/input_handle.cpp -o  $(OBJ_DIR)/input_handle.o -lm $(FLAGS)


clean:
	rm $(OBJ_DIR)/*.o	
	rm $(BIN_DIR)/geometry

run_geometry:
	$(BIN_DIR)/geometry
