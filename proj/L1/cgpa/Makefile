CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

TARGET = cgpa
SRC = cgpa.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
