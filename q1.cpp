#include <iostream>
using namespace std;

int inputarr(int arr1[5]){
	int i=0;
	while(i < 5){
	cout << "enter the " <<	i+1 << " th element";
	cin >> arr1[i];
	i++;
	}
}
int findsum(int arr1[5]){
	int sum =0;
	int k=0;
	while (k<5){
		sum += arr1[k];
		k++;
	}
	
	return sum;
}
int main(){
int arr1[5];
	inputarr(arr1);
	int j=0;
	cout << "the elements of the array are ";
	while(j<5){
		cout << arr1[j] << " ";
		j++;
	}
	int sum;
	sum = findsum(arr1);
	cout << sum;
	
	return 0;
}
