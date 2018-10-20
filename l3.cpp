//. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
#include<iostream>
using namespace std;
void klargest(int aarray[], int sizeofarray,int k);
void ksmallest(int aarray[], int sizeofarray,int k);


int main() {

int array[10]={5,88,44,66,22,99,67,45,78,89};

int x,y;
			cout<<"there is ten element in array enter 'n',get nth largest element"<<endl;
			cin>>x;
			klargest(array,10,x);

			cout<<"there is ten element in array enter 'n',get nth smallest element"<<endl;
			cin>>y;
			ksmallest(array,10,y);
}


void klargest(int aarray[], int sizeofarray,int k){
				for(int i=0;i<10;i++){
				for(int j=0;j<10-1;j++){
				if (aarray[j]>aarray[j+1])
			{int temp=aarray[j];
			aarray[j]=aarray[j+1];
				aarray[j+1]=temp;

}}}
		cout<<"assending order is this"<<endl;

		for(int index=0;index<10;index++){
		cout<<aarray[index]<<endl;}

		cout<<"number you wanted is"<<endl;
		cout<<aarray[k-1]<<endl;
}


void ksmallest(int aarray[], int sizeofarray,int k) {
				for(int i=0;i<10;i++){
				for(int j=0;j<10-1;j++){
				if (aarray[j]>aarray[j+1])
			{int temp=aarray[j];
			aarray[j]=aarray[j+1];
			aarray[j+1]=temp;

}}}
			cout<<"dessending order is this"<<endl;
		for(int index=9;index>=0;index--){
		cout<<aarray[index]<<endl;}

		cout<<"number you wanted is"<<endl;
		cout<<aarray[10-k]<<endl;
}





//for printing exactly same array
/*for(int i=0;i<10;i++){
if( k<aarray[i]){ k=aarray[i];
	cout<<k<<endl;}
else cout<<aarray[i]<<endl;

}*/
