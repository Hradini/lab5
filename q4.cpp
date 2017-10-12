#include <iostream>
using namespace std;
int merge(int arr1[],int arr2[],int n,int m){
	int arr3[n+m],i;
	for (i=0;i<n;++i){
		arr3[i]=arr1[i];
	}
	for (i=0;i<m; ++i){
		arr3[n+i]= arr2[i];
	}
	cout << " the merged array is";
	for (i=0;i<n+m;++i){
		cout << arr3[i]<< " ";
	}
}
int max2(int arr1[], int arr2[], int n, int m){
	int arr3[n+m],i;
	for (i=0;i<n;++i){
		arr3[i]=arr1[i];
	}
	for (i=0;i<m; ++i){
		arr3[n+i]= arr2[i];
	}
	int max;
	for (i=0;i<n+m ; ++i){
		if(arr3[i]>arr3[i+1]){
		max=arr3[i];
		}
	}return max;
}
int min2(int arr1[], int arr2[], int n, int m){
	int arr3[n+m],i;
	for (i=0;i<n;++i){
		arr3[i]=arr1[i];
	}
	for (i=0;i<m; ++i){
		arr3[n+i]= arr2[i];
	}
	int min;
	min = arr3[0];
	for (i=0;i<n+m ; ++i){
		if(arr3[i]< min){
		min=arr3[i];
		}
	}return min;
}
int main() {
	int n,m,i;
	cout << "enter the size of both the array\n";
	cin >> n >> m;
	int arr1[n],arr2[m];
	for (i=0;i<n;++i){
		cout<<"enter the" << i+1 << " element \n";
		cin >> arr1[i];
	}
	for (i=0;i<m;++i){
		cout<<"enter the" << i+1 << " element \n";
		cin >> arr2[i];
	}
	merge(arr1,arr2,n,m);
	cout << endl;
	cout<<max2(arr1,arr2,n,m);
	cout<<min2(arr1,arr2,n,m);
	return 0;
}
