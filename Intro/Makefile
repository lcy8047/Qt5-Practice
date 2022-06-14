CXX=g++
CXXFLAGS=-I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5 -L/usr/lib/qt5 -lQt5Core -fPIC

SRC_DIR=./src/
BIN_DIR=./bin/

SRCS=$(notdir $(wildcard $(SRC_DIR)/*.cpp))
BINS=$(addprefix $(BIN_DIR), $(SRCS:.cpp=))

all: $(BINS)

$(BIN_DIR)%: $(SRC_DIR)%.cpp
	$(CXX) $< -o $@ $(CXXFLAGS)

.PHONY: clean

clean:
	rm $(BIN_DIR)*

