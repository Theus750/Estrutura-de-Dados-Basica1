CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++17 -Iheader -Ilib -g

# Diretórios
SRC_DIR = src
TEST_DIR = test
BIN_DIR = bin

# Fontes
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS_ALL = $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.o, $(SOURCES))
OBJECTS_NO_MAIN = $(filter-out $(BIN_DIR)/main.o, $(OBJECTS_ALL))

# Executável principal
EXECUTABLE = $(BIN_DIR)/main

# Testes separados
TEST_INSERIR_SRC = $(TEST_DIR)/teste-inserir.cpp
TEST_REMOVER_SRC = $(TEST_DIR)/teste-remover.cpp

TEST_INSERIR_OBJ = $(BIN_DIR)/teste-inserir.o
TEST_REMOVER_OBJ = $(BIN_DIR)/teste-remover.o

TEST_INSERIR_EXEC = $(BIN_DIR)/test-inserir
TEST_REMOVER_EXEC = $(BIN_DIR)/test-remover

# Regra padrão
all: $(EXECUTABLE) $(TEST_INSERIR_EXEC) $(TEST_REMOVER_EXEC)

# Compilar o executável principal
$(EXECUTABLE): $(OBJECTS_ALL)
	$(CC) $(CFLAGS) $^ -o $@

# Compilar testes
$(TEST_INSERIR_EXEC): $(TEST_INSERIR_OBJ) $(OBJECTS_NO_MAIN)
	$(CC) $(CFLAGS) $^ -o $@

$(TEST_REMOVER_EXEC): $(TEST_REMOVER_OBJ) $(OBJECTS_NO_MAIN)
	$(CC) $(CFLAGS) $^ -o $@

# Compilar .cpp → bin/*.o
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR)/%.o: $(TEST_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Alvos utilitários
.PHONY: run run-test clean test run-test-inserir run-test-remover

run: $(EXECUTABLE)
	./$(EXECUTABLE)

run-test: $(TEST_INSERIR_EXEC) $(TEST_REMOVER_EXEC)
	./$(TEST_INSERIR_EXEC)
	./$(TEST_REMOVER_EXEC)

run-test-inserir: $(TEST_INSERIR_EXEC)
	./$(TEST_INSERIR_EXEC)

run-test-remover: $(TEST_REMOVER_EXEC)
	./$(TEST_REMOVER_EXEC)

clean:
	rm -f $(BIN_DIR)/*.o $(EXECUTABLE) $(TEST_INSERIR_EXEC) $(TEST_REMOVER_EXEC)
