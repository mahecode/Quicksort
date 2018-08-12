#include<iostream>
#include<cstdlib>
using namespace std;

int partition(int a[],int p, int r){
	int P = a[r];
	int i = p - 1;
	for(int j = p;j<r;j++){
		if(a[j]<P){
			i++;
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	int x = a[i+1];
	a[i+1] = a[r];
	a[r] = x;
	return (i+1);
}

void quickSort(int a[],int p,int r){
	if(p<r){
		int q = partition(a,p,r);
		quickSort(a,p, q-1);
		quickSort(a,q+1,r);
	}
}

int main(){
	int a[] = {4,1,2,7,8,3};
	quickSort(a,0,5);
	for(int i=0;i<6;i++){
		cout << " " << a[i];
	}
	return 0;
}
