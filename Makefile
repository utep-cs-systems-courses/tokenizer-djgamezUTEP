gui: gui.o tokenizer.o #create final executable file (for tokenizer and gui)
	gcc -o gui gui.o tokenizer.o 
gui.o:  gui.c gui.h #compile c files into object file
	gcc -c gui.c 
tokenizer.o: tokenizer.c gui.h #compile c file into object file 
	gcc -c tokenizer.c

clean:
	rm *.o *~ gui
run: gui
	./gui
