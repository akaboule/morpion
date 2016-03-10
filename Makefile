all :
	cd libft/ && $(MAKE)
	cd ../
	gcc -o morpion *.c libft/libft.a -lmlx -framework OpenGL -framework Appkit
