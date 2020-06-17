all: clean init
	clear
	javac -sourcepath src -d build/classes src/*.java
	echo "Main-Class: test" > Manifest
	jar cfm bin/test.jar Manifest -C build/classes .
	tree
run:
	java -jar bin/test.jar

init:
	mkdir -p build/classes
	mkdir bin

clean:
	rm -rf build
	rm -rf bin
	rm -rf Mainfest
