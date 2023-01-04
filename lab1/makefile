EXCES=labo1e1.c++ labo1e2.c++ labo1e3.c++
all: $(EXCES)
	g++ labo1e1.c++ -o ese1
	g++ labo1e2.c++ -o ese2
	g++ labo1e3.c++ -o ese3
ese1:
	./ese1
ese2:
	./ese2
ese3:
	./ese3
clean:
	rm ese*
tgz:
	cd ..; tar cvzf lab1.tgz lab1

.PHONY: ese1 ese2 ese3 clean tgz
