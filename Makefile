LibraryConsole: UserInterface.o libLibrary.a
	g++ -o LibraryConsole UserInterface.o -L. -lLibrary

UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp

libLibrary.a: Librarian.o LibraryStaff.o
	ar cr libLibrary.a Librarian.o LibraryStaff.o

Librarian.o: Librarian.cpp
	g++ -c Librarian.cpp

LibraryStaff.o: LibraryStaff.cpp
	g++ -c LibraryStaff.cpp

clean:
	rm -f *.o *.a binary
