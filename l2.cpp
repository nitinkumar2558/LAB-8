//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;


void foomean(int aarray[],int sizeofarray);
void foomedian(int aarray[],int sizeofarray);
void foolargest(int aarray[],int sizeofarray);
void foosmallest(int aarray[],int sizeofarray);

int main() {
int array[5]={2,55,4,99,44}  ;
	
	foolargest(array,5);
	foosmallest(array,5);
	foomean(array,5);
	foomedian(array,5);


}



/*
void foolargest(int aarray[],int sizeofarray){
if      (aarray[0]>aarray[1,2,3,4]) {cout<<aarray[0]<<"is largest"<<endl;}    aarray[1,2,3,4] is reopresent the [4] value only and these all compare with 44 so 55 is maximum will be executed
else if (aarray[1]>aarray[0,2,3,4]) {cout<<aarray[1]<<"is largest"<<endl;}
else if (aarray[2]>aarray[0,1,3,4]) {cout<<aarray[2]<<"is largest"<<endl;}
else if (aarray[3]>aarray[0,2,1,4]) {cout<<aarray[3]<<"is largest"<<endl;}
else  {cout<<aarray[4]<<"is largest"<<endl;}

}*/
void foolargest(int aarray[],int sizeofarray){

int max=aarray[0];

for (int i=1;i<5;i++)//after initialisation of max we compare max with aarray[1] to aarray[4]
{if (max<aarray[i]) {max=aarray[i];}   }//reassign the value to max and compare new max with next one

cout <<max<< "is maximum"<<endl;}




void foosmallest(int aarray[],int sizeofarray){
int min=aarray[0];

for (int i=1;i<5;i++)//after initialisation of max we compare max with aarray[1] to aarray[4]
{if (min>aarray[i]) {min=aarray[i];}   }//reassign the value to max and compare new max with next one

cout <<min<< "is minimum"<<endl;}




void foomean(int aarray[],int sizeofarray){
int sum=0,m;
for(int i=0;i<sizeofarray;i++){
sum=sum+aarray[i];}
m=sum/sizeofarray;
cout<<"mean in int datatype: "<<m<<endl;

}


void foomedian(int aarray[],int sizeofarray){
if (sizeofarray%2!=0){
int x=sizeofarray/2;
cout<<"meadian is: "<<aarray[x]<<endl;

}
else cout<<"print array of odd elements"<<endl;
}
