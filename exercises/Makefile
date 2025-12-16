CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRC_DIR = code
BIN_DIR = executables

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
BINS = $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%,$(SRCS))

all: $(BINS)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(BINS)
