all: build
	cmake --build build

build:
	cmake -B build .

test: all
	cd build && ctest
