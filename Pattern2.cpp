#include<iostream>
using namespace std;
int main(){
/*
    ABC
    BCD
    CDE
*/ 
   char c = 'A';
   char d = 'A';
   char e;
   while(c<'E'){
       d = 'A';
       e = c;
       while(d<'E'){
           cout<<e++;
           d++;
       }
    c++;
    cout<<"\n";
   }
/*
    ABC
    BCD
    CDE
*/ 
   c= 'A';
   d= 'A';
   while(c<'E'){
       d = 'A';
       while(d<=c){
           cout<<c;
           d++;
       }
       c++;
       cout<<"\n";
   }
}