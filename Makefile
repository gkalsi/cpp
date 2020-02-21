SRC := src
BIN := bin

CXXFLAGS = -Wall -Werror -O2 -std=c++17 -lm -lpthread

SRCS = $(wildcard $(SRC)/*.cc)
PROGS = $(patsubst $(SRC)/%.cc,$(BIN)/%,$(SRCS))

all: $(PROGS)

$(BIN)/%: $(SRC)/%.cc
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS)  -o $@ $<

.PHONY: clean
clean:
	rm -fr $(BIN)
