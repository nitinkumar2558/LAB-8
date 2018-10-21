//. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)

#include<iostream>
using namespace std;

//declre array univarsaly because it is same for all function
int merge(int aarray1[],int aarray2[]);
int array3[100];
void foolargest(int aarray3[],int sizeofthird);
void foominimum(int aarray3[],int sizeofthird);



int main(){

//define two arrays
int array1[5]={34,579,56,65,767};
int array2[5]={434,45,55,5446,67};

		cout<<"after merging both we get a third array that is "<<endl;
		//call function
		merge(array1,array2);
		cout<<endl;

		cout<<"maximum of both array is "<<endl;
		foolargest(array3,10);

		cout<<"minimum of both array is "<<endl;
		foominimum(array3,10);
}


//first function for merging two array
	int merge(int aarray1[],int aarray2[]){

		for(int i=0;i<5;i++){//i is less than 5
	 	array3[i]=aarray1[i];
		array3[i+5]=aarray2[i];  } //i+5 to get next 5 elements of array2
//printing merged array

		for(int i=0;i<10;i++){//complete call of array3 i upto 9
		cout<<array3[i]<<' ';   }
}



//second function for maximum
	void foolargest(int aarray3[],int sizeofthird){

			int k=aarray3[0];
		for(int i=0;i<10;i++){

		if (k<aarray3[i]) {k=aarray3[i];}}
		cout<<k<<endl;
}


//second function for minimum
	void foominimum(int aarray3[],int sizeofthird){

			int k=aarray3[0];
		for(int i=0;i<10;i++){

		if (k>aarray3[i]) {k=aarray3[i];}}
		cout<<k<<endl;
}














