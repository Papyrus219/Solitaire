
SOURCES=$(wildcard src/*.cpp src/*/*.cpp)
OBJECTS := $(foreach file, $(SOURCES), $(patsubst src/%, build/%, $(file:.cpp=.o)))

Pasjans:	$(OBJECTS)
	g++ $^ -o $@

build/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	g++ -c $< -o $@

clean:
	rm -rf build main
