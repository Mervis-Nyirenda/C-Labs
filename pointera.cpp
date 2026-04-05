#include<iostream>
using namespace std;

int main () {
 
    int firstValue;
    int secondValue;

 int*pPointer =nullptr;

 int integerVar=5;
      
      

 //assign pointer with the address of firstvalue  
 pPointer = &firstValue;
*pPointer =10;//Indirection

 //assign pointer with the address of Secondvalue 
  pPointer = & secondValue;
   *pPointer =10;//Indirection
 cout<<"firstvalue:"<< firstValue << '\n';

 cout<<" secondValue:"<< secondValue <<'\n' ;
 

 return 0;

}