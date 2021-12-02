#include<iostream>
using namespace std;
void maxMin(int n[], int size){
    int max = n[0];
    int min = n[0];
    for(int i = 0; i < size; i++){
        if(n[i] >= max)
            max = n[i];
        if(n[i] <= min)
            min = n[i];
    }
    cout<<"max = "<<max<<endl;
    cout<<"min = "<<min<<endl;
}
int arraySum(int n[], int size){
    int sum = 0;
    for(int i=0; i<size;i++){
        sum += n[i];
    }
    return sum;
}
int main(){
    int num[5] = {1,7,2,0,6}; 
    maxMin(num,5);
    cout<<"Sum = "<<arraySum(num,5);
    return 0;
}