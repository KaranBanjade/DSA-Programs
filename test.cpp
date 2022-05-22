#include<iostream>
using namespace std;

class Hero{
public:
char line[100], character;
int number;
};

int main(){
Hero h;
cout<<sizeof(Hero);
cout<<endl<<sizeof(h);
cout<<endl<<sizeof(h.line);
cout<<endl<<sizeof(h.character);
cout<<endl<<sizeof(h.number);
return 0;
}