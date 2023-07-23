#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n){
	cout << "Nhap mang: \n";
    for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
    	cout << a[i] << "\n";
	}
}

void sapxep(int a[],int n){
    int tg;
    
	for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if( a[i]<a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
        	}
    	}
  	}
}

int main(){
	int n;
	cout<<"So phan tu cua mang: ";
	cin>>n;
	
	int a[n+7];
	
	nhap(a,n);
	cout<<"\nIn mang: \n";
	xuat(a,n);
	sapxep(a,n);
	cout << "\nMang sau sap xep: \n";
	xuat(a,n);

}
