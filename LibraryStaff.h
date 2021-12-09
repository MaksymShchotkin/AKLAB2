//LibraryStaff.h

//Made by Boyko Michael & Schotkin Maksim

//          @@@@ SHOBO @@@@
//     ****POWERED BY FRIENDSHIP****
//          @@@@*******@@@@

//   _____ _    _  ____  ____   ____
//  / ____| |  | |/ __ \|  _ \ / __ \
// | (___ | |__| | |  | | |_) | |  | |
//  \___ \|  __  | |  | |  _ <| |  | |
//  ____) | |  | | |__| | |_) | |__| |
// |_____/|_|  |_|\____/|____/ \____/

//Version 1.0

#include <iostream>
#include "Librarian.h"

namespace Library {
 const int MaxLibrarians = 20;
 const int FirstLibrarianID = 9001;
  class LibraryStaff
   {
  public:
      LibraryStaff();
      ~LibraryStaff();

      Librarian& addLibrarian(std::string librarianName, std::string job, int salary, std::string gender,
                              int age, std::string adress, std::string passport);
      Librarian& getLibrarian(int librarianID);
      Librarian& getLibrarian(std::string librarianName);

      void displayAll();
      void displayCurrent();
      void displayFormer();
  protected:
      Librarian librarianList[MaxLibrarians];
      int nextSlot;
      int nextLibrarianID;

  };
}
