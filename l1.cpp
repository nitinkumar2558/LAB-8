//program to find sum of all elements of array
#include<iostream>
using namespace std;

void foo(int aarray[],int sizeofarray);

int main() {

int array[5]={1,2,3,4,5};

foo(array,5);


}


void foo(int aarray[],int sizeofarray) {
int sum=0;
for (int i=0;i<sizeofarray;i++)
sum=sum+aarray[i];
cout<<"sum"<<sum<<endl;

}
