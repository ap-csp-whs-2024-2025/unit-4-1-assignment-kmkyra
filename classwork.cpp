#include <iostream>
#include <string>

int main()
{
  //int age = 100;
  //int num = 5;
  //num = 10;
  //std::string stu_name = "John";
  //std:string number = "5";
  //std::cout << "My name is" << stu_name << stu::endl;
//int age = 10;
//  double price = 19.99;
  //bool isRaining = false;
//  std::cout << age << " " << price << " " << isRaining << std::endl;
  //int hello = 190000000;
//  std::cout << hello << std::endl; 
  //int grade_level = 11;
  //std::cout << "I am an " << grade_level << "th grader." << std:: endl;

  //double x = 0.1;
  //double y = 0.2;
  //double sum = x+y;
  //std::cout << sum << std::endl;
  //std::cout << (sum == 0.3) << std::endl;

  //user input
  // std::string x;
  // std::cout << "What is your name?" << std::endl;
  // std::cin >> x;
  // std::cout << "Hello" << x << ". It is nice to meet you!" << std::endl;
  
//problem 1
int x = 25;
int y = 3;
int sum = x+y;
int diff = x-y;
int prod = x*y;
int quo = x/y;
int mod = x%y;
std::cout << sum << " " << diff << " " << prod << " " << quo << " " << mod << std::endl;

int z = 10;
bool greaterThan = x>z;
bool lessThan = y<x;
std::cout << greaterThan << " " << lessThan << std::endl;

//problem 2
bool isSunny = true;
bool hasUmbrella = false;
std::cout << (isSunny && hasUmbrella) << " ";
std::cout << (isSunny || hasUmbrella) << " ";
std::cout << (!isSunny) << " ";
std::cout << (!isSunny && !hasUmbrella) <<std::endl;

//problem 3
int n = 7;
double m = 4.0;
bool hasLicense = false;

bool isGreater = n>m;
bool isEqual = m == 4.0;
bool c = (hasLicense && m<=n);
bool lala = (n>5 && !hasLicense);
std::cout << isGreater << " " << isEqual << " " << c << " " << lala << std::endl;

//problem 4
std::string firstName = "John";
std::string lastName = "Doe";
double score = 85.75;

std::cout << lastName << ", " << firstName << std::endl;
std::cout << "Your score is: " << score << std::endl;

//problem 6
int age = 18;
int year = 2024;
double height = 5.9;
bool isStudent = true;
std::string city = "New York";
bool isAdult = age>=18;
bool overSix = height>6;


std::cout << year-age << " " << isAdult << " " << overSix << " " << (isStudent && city == "New York") << std::endl;

//bonus
int i = 50;
double d = 100.5;
bool flag = false;

std::cout << (i%5 == 0 && d>50) << " " << (d<=100 || flag == true) << " " << (!flag && i>30) << std::endl;

  return 0;
}
