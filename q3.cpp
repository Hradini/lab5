#include <iostream>
using namespace std;
int klarge(int arr[],int k,int n){
	return arr[n-k];
}
int ksmall(int arr[],int k,int n){
	return arr[k-1];
}
int main() {
	int n,i,j;
	int arr[n];
	cout << "enter the size of the array\n";
	cin >> n;
	for (i=0;i<n;++i){
		cout<<"enter the" << i+1 << " element \n";
		cin >> arr[i];
	}
	for (i=0;i<n;++i){
		for(j=0;j<n-1-i; ++j){
			if(arr[j]>arr[j+1]){
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout << "enter the number";
	int k;
	cin >> k;
	cout << "the " << k << "th largest number is " << klarge(arr,k,n)<<endl;
	cout << "the " << k << "th smallest number is " << ksmall(arr,k,n)<<endl;
	return 0;
}
