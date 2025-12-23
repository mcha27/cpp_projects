CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2 -Iheaders
LDFLAGS  = -lsqlite3

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
TARGET = $(BIN_DIR)/main

all: $(TARGET)

$(TARGET): $(SRCS)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

clean:
	rm -f $(TARGET)
