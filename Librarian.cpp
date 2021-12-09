//Librarian.cpp

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

#include<iostream>
#include "Librarian.h"

using namespace std;

// Конструктор
Librarian::Librarian()
{
    id = 0;
    name = "Невідомо";
    age = 0;
    gender = "Невідомо";

    adress = "Невідомо";

    passportId = "Невідомо";

    yearsOfService = 0;
    workerSalary = 0;
    baseSalary = 12000;
    isHired = false;
    job = "Немає";
}

// Деструктор
Librarian::~Librarian()
{
    //Доки що не потрібен
}


int Librarian::calculateSalary()
{
    if(!getHireStatus()){
        //Заробітню плату отримують тількі працівники
        return 0;
    }

    //Робітники отримують щорічне підвищення зарплати
    return static_cast<int>(getBaseSalary() + (0.05 * getBaseSalary() * getYearsOfService()));
}

int Librarian::getWorkerID(){
    return id;
}
void Librarian::setWorkerID(int newID){
    if(getHireStatus()){
        id = newID;
    }
}

string Librarian::getName(){
    return name;
}

void Librarian::setName(string newName){
    name = newName;
}


int Librarian::getAge(){
    return age;
}

void Librarian::setAge(int newAge){
    age = newAge;
}

string Librarian::getGender(){
    return gender;
}

void Librarian::setGender(string newGender){
    gender = newGender;
}

string Librarian::getAdress(){
    return adress;
}

void Librarian::setAdress(string newAdress){
    adress = newAdress;
}

string Librarian::getPassportId(){
return passportId;
}

void Librarian::setPassportId(string newPassportId){
    passportId = newPassportId;
}

int Librarian::getYearsOfService(){
    return yearsOfService;
}

void Librarian::setYearsOfService(int newYearsOfService){
    yearsOfService = newYearsOfService;
}

int Librarian::getBaseSalary(){
    return baseSalary;
}

void Librarian::setBaseSalary(int newBaseSalary){
    baseSalary = newBaseSalary;
}

string Librarian::getJob(){
    if(getHireStatus()){
        return job;
    }
    return "Немає";
}

void Librarian::setJob(string newJob){
    if(getHireStatus()){
        job = newJob;
    }
}

bool Librarian::getHireStatus(){
    return isHired;
}

void Librarian::Hire(){
    if (!getHireStatus()){
        isHired = true;
        job = "В резерві";
    }
}

void Librarian::Fire(){
    if (getHireStatus()){
        isHired = false;
        job = "Немає";
        id = 0;
    }
}

void Librarian::display(){
    cout<<"Библіотекар "<<getName()<<endl;
    cout<<"**********************"<<endl;
    cout<<"Статус: "<<(getHireStatus()?"Найнятий":"Звільнений")<<endl;
    if(getHireStatus()){
        cout<<"Посада: "<<getJob()<<endl;
        cout<<"ID: "<<getWorkerID()<<endl;
        cout<<"Заробітна плата: "<<calculateSalary()<<endl;
        cout<<"Стаж: "<<getYearsOfService()<<" років"<<endl;
    }
    cout<<"Стать: "<<getGender()<<endl;
    cout<<"Вік: "<<getAge()<<endl;
    cout<<"Адреса: "<<getAdress()<<endl;
    cout<<"Номер паспорту: "<<getPassportId()<<endl;
    cout<<"**********************"<<endl;
    cout<<endl;
}














































