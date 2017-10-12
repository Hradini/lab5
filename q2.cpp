#include <iostream>
using namespace std;
int smallest(int arr[]){
	cout << arr[0];
}
int largest(int arr[], int n){
	cout << arr[n-1];
}
int mean(int arr[], int n){
	int sum=0;
	int i=0;
	while(i<n){
		sum += arr[i];
	}return sum/n;
}
int median(int arr[], int n){
	if( n%2 == 0){
		return (arr[n/2]+ arr[(n/2) -1])/2;
	}else return arr[n/2];
}

int mode(int arr[], int n){
	int c, max, mode,i;
	max=0;
	for(i=0;i<n-1;++i){
		
		if (arr[i+1] == arr[i]){
			c++;
			if(c>max){
			max = c;
			mode = arr[i];
			}
		}else
		c=0;
		} 

	return mode;
}
int main() {
	int n,i,j;
	cout << "enter the size of the array\n";
	cin >> n;
	int arr[n];
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
	for (i=0; i<n;++i){
		cout << arr[i] <<" ";
	}
	cout << endl;
	smallest(arr);
	largest(arr);
	cout << "mean is" << mean(arr, n);
	cout << "median is" << median(arr,n);
	cout << "mode is" <<mode(arr,n);
	
	return 0;
}
