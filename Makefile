# Params
TARGETNAME = main
TARGET = app/bin/$(TARGETNAME).exe
OBJECTS = $(patsubst app/src/%.cpp, app/build/%.o, $(wildcard app/src/*.cpp))
COMPILE_FLAGS = -Iapp/include

app/build/%.o: app/src/%.cpp
	gcc $(COMPILE_FLAGS) -o $@ -c $<

$(TARGET): $(OBJECTS)
	gcc $(OBJECTS) -o $@

.PHONY: run clear
run: $(TARGET)
	$(TARGET)

clear:
	rm -rf app/build app/bin