all: clean init
	clear
	javac -sourcepath src -d build/classes src/Example.java
	echo "Main-Class: Example" > Manifest
	jar cfm bin/Example.jar Manifest -C build/classes .
	tree
run:
	java -jar bin/Example.jar

init:
	mkdir -p build/classes
	mkdir bin

clean:
	rm -rf build
	rm -rf bin
	rm -rf Mainfest
