/*
 * ball.cpp
 *
 *  Created on: 19 Oct 2022
 *      Author: einholz
 */

#include<iostream>
using namespace std;

float* fall(int hight){
	float *arr= new float[3];
	arr[2]=hight;
	arr[0]=hight;
	for(int i=0;i<4;i++){
		arr[0]+=arr[2];
		arr[2]=arr[2]/2;
		arr[1]=arr[2]/2;
	}
	return arr;
}

int main(){
	int hight;
	cout<<"Please give a hight: "<<endl;
	cin>>hight;
	float* a=fall(hight);
	cout<<a[0]<<endl<<a[1]<<endl;
	return 0;
}
