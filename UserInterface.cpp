//UserInterface.cpp

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
using namespace Library;

int displayMenu();
void doHire(LibraryStaff& staff);
void doFire(LibraryStaff& staff);
void doUpdateJob(LibraryStaff& staff);
void doUpdateSalary(LibraryStaff& staff);
void doUpdateYOS(LibraryStaff& staff);

int main(int argc, char** argv)
{
 LibraryStaff libraryStaff;
 bool running = true;

 while(running){
  int selection = displayMenu();

  switch (selection) {
  case 1:
   doHire(libraryStaff);
   break;
  case 2:
   doFire(libraryStaff);
   break;
  case 3:
   doUpdateJob(libraryStaff);
   break;
  case 4:
   doUpdateYOS(libraryStaff);
   break;
  case 5:
   libraryStaff.displayAll();
   break;
  case 6:
   libraryStaff.displayCurrent();
   break;
  case 7:
   libraryStaff.displayFormer();
   break;
  case 0:
   running = false;
   break;
  default:
   cerr<<"Невідома команда!"<<endl;
  }
 }
}

int displayMenu()
{
 int selection;

 cout<<endl;
 cout<<"Термінал адміністратора бібліотеки"<<endl;
 cout<<"**********************************"<<endl;
 cout<<"[1] Найняти робітника"<<endl;
 cout<<"[2] Звільнити робітника"<<endl;
 cout<<"[3] Змінити посаду"<<endl;
 cout<<"[4] Змінити стаж роботи"<<endl;
 cout<<"[5] Перелік робітників"<<endl;
 cout<<"[6] Перелік найнятих робітників"<<endl;
 cout<<"[7] Перелік звільнених робітників"<<endl;
 cout<<"[0] Завершення роботи"<<endl;
 cout<<"**********************************"<<endl;
 cout<<endl;
 cin >> selection;
 return selection;
}

void doHire(LibraryStaff& librarianList)
{
 string name;
 string job;
 int salary;
 string gender;
 int age;
 string adress;
 string passport;

 cout<<"Введіть ім'я: "<<endl;
 cin>>name;
 cout<<"Введіть посаду: "<<endl;
 cin>>job;

 cout<<"Введіть заробітну плату: "<<endl;
 cin>>salary;
 cout<<"Введіть стать: "<<endl;
 cin>>gender;
 cout<<"Введіть вік: "<<endl;
 cin>>age;
 cout<<"Введіть адресу: "<<endl;
 cin>>adress;
 cout<<"Введіть номер паспорту: "<<endl;
 cin>>passport;


 try {
  librarianList.addLibrarian(name, job, salary, gender, age, adress, passport);
 }
 catch (std::exception ex){
  cerr<<"Неможливо найняти робітника!"<<endl;
 }
}

void doFire(LibraryStaff& librarianList)
{
 int id;
 cout<<"Введіть номер робітника: "<<endl;
 cin>>id;
 try{
  Librarian& librarian = librarianList.getLibrarian(id);
  librarian.Fire();
 }
 catch(std::exception ex){
  cerr<<"Неможливо звільнити робітника!"<<endl;
 }
}

void doUpdateJob(LibraryStaff& librarianList)
{
 string job;
 int salary;

 int id;
 cout<<"Введіть номер робітника: "<<endl;
 cin>>id;
 Librarian& librarian = librarianList.getLibrarian(id);
 if(!librarian.getHireStatus()){
  cout<<"Робітник не найнятий!"<<endl;
 }
 else{
  cout<<"Введіть нову посаду: "<<endl;
  cin>>job;
  cout<<"Введіть нову базову зарплату: "<<endl;
  cin>>salary;

  librarian.setJob(job);
  librarian.setBaseSalary(salary);
 }
}

void doUpdateYOS(LibraryStaff& librarianList)
{
 int yearsOfService;

 int id;
 cout<<"Введіть номер робітника: "<<endl;
 cin>>id;
 Librarian& librarian = librarianList.getLibrarian(id);
 if(!librarian.getHireStatus()){
 cout<<"Робітник не найнятий!"<<endl;
 }

 cout<<"Введіть стаж роботи: "<<endl;
 cin>>yearsOfService;

 librarian.setYearsOfService(yearsOfService);
}
















