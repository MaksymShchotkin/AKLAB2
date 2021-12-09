//Librarian.h

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

//Version 1.2

#include <string>

class Librarian
{
 public:
  Librarian();
  ~Librarian();

  int calculateSalary();

  int getWorkerID();
  void setWorkerID(int newID);

  std::string getName();
  void setName(std::string newName);

  int getAge();
  void setAge(int newAge);

  std::string getGender();
  void setGender(std::string newGender);

  std::string getAdress();
  void setAdress(std::string newAdress);

  std::string getPassportId();
  void setPassportId(std::string newPassportId);

  int getYearsOfService();
  void setYearsOfService(int yearsOfSerice);

  int getBaseSalary();
  void setBaseSalary(int newBaseSalary);

  std::string getJob();
  void setJob(std::string newJob);

  bool getHireStatus();
  void Hire();
  void Fire();

  void display();

 private:
  // Код співробітника
  int id;

  // ПІБ
  std::string name;

  //Вік
  int age;

  // Пол
  std::string gender;

  // Адреса
  std::string adress;

  // Номер паспорту
  std::string passportId;

  // Найманий чи ні
  bool isHired;

  // Стаж
  int yearsOfService;

  //Заробітна плата окремого робітника
  int workerSalary;

  //Базова заробітна плата
  int baseSalary;

  // Посада
  std::string job;

};
