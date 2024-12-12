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
  
//problem 1
int x = 25;
int y = 3;
int sum = x+y;
int diff = x-y;
int prod = x*y;
int quo = x/y;
int mod = x%y;
std::cout << sum << " " << diff << " " << prod << " " << quo << " " << mod << std::endl;

//problem 2
bool isSunny = true;
bool hasUmbrella = false;
std::cout << (isSunny && hasUmbrella) << std::endl;
std::cout << (isSunny || hasUmbrella) << std::endl;
std::cout << (!isSunny) << std::endl;
std::cout << (!isSunny && !hasUmbrella) <<std::endl;

//problem 3
int n = 7;
double m = 4.0;
bool hasLicense = false;

bool isGreater = n>m;
bool isEqual = m == 4.0;
bool c = (hasLicense && m<=n);
  return 0;
}
