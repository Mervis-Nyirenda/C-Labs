#include<iostream>
using namespace std;

int main () {
 //declare pointer and intialize it
 //so that it doesn't store a random adderess
 int*pPointer =nullptr;

 int integerVar=5;

 //assign pointer to address of object 
 pPointer = &integerVar;

 //output the value of intergerVar
 cout<<"integerVar:"<< integerVar << endl;

 //output the addres of intergerVar
 cout<<" Address integerVar:"<< &integerVar << endl;

 //output the addres  assigned to a pPointer
  cout<<"pPointer:"<< pPointer << endl;

 //output the addres  assigned to a pPointer
 cout<<" Address of pPointer:"<< &pPointer << endl; 

 return 0;

}