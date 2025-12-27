CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
BINS = $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%,$(SRCS))

all: $(BINS)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(BINS)
