main:main.cpp
	g++ -Wall -Werror check.cpp findr.cpp findx1.cpp findx2.cpp number_of_strings.cpp main.cpp -o main
	./main
	rm main
