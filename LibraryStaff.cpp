//LibraryStaff.cpp

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
#include <stdexcept>
#include <string>

#include "LibraryStaff.h"
using namespace std;

namespace Library {

// Конструктор
LibraryStaff::LibraryStaff()
{
 nextSlot = 0;
 nextLibrarianID = FirstLibrarianID;
}

// Деструктор
LibraryStaff::~LibraryStaff()
{
 // Тут нічого немає
}

Librarian& LibraryStaff::addLibrarian(string librarianName, string librarianJob,
                                      int salary, string gender, int age, string adress,
                                      string passport)
{
 if(nextSlot >= MaxLibrarians){
  cerr<<"Перевищена максимальна кількість працівників!"<<endl;
  throw exception();
 }

 Librarian& newLibrarian = librarianList[nextSlot++];
 newLibrarian.setName(librarianName);
 newLibrarian.Hire();
 newLibrarian.setWorkerID(nextLibrarianID++);
 newLibrarian.setJob(librarianJob);
 newLibrarian.setBaseSalary(salary);
 newLibrarian.setGender(gender);
 newLibrarian.setAge(age);
 newLibrarian.setAdress(adress);
 newLibrarian.setPassportId(passport);


 return newLibrarian;
}


// Пошук біблітекаря за номером
Librarian& LibraryStaff::getLibrarian(int librarianID)
{
 for(int i=0;i<nextSlot;i++){
  if(librarianList[i].getWorkerID()==librarianID){
      return librarianList[i];
  }
 }

 cerr<<"Бібліотекар за номером "<<librarianID<<" не знайден!"<<endl;
 throw exception();
}


// Пошук бібліотекаря за ім'ям
Librarian& LibraryStaff::getLibrarian(string librarianName)
{
 for(int i=0;i<nextSlot;i++){
  if(librarianList[i].getName()==librarianName){
      return librarianList[i];
  }
 }

 cerr<<"Бібліотекар за ім'ям "<<librarianName<<" не знайден!"<<endl;
 throw exception();
}

// Показати всіх бібліотекарів
void LibraryStaff::displayAll()
{
 for(int i=0;i<nextSlot;i++){
  librarianList[i].display();
 }
}

// Показати найнятих бібліотекарів
void LibraryStaff::displayCurrent()
{
 for(int i=0;i<nextSlot;i++){
  if(librarianList[i].getHireStatus()){
   librarianList[i].display();
  }
 }
}

// Показати звільнених бібліотекарів
void LibraryStaff::displayFormer()
{
 for(int i=0;i<nextSlot;i++){
  if(!librarianList[i].getHireStatus()){
   librarianList[i].display();
  }
 }
}


}

