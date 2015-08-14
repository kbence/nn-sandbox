.PHONY: all

RNN_CPP_FILES=$(shell find . -name *.cpp)
RNN_OBJ=$(RNN_CPP_FILES:.cpp=.o)

all: rnn

clean:
	rm -f rnn $(RNN_OBJ)

run: all
	./rnn

rnn: $(RNN_OBJ)
	g++ -o $@ $^

%.o: %.cpp
	g++ -c -o $@ $<

