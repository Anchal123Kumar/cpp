#include<iostream>
using namespace std;

int sortarray(int a[],int b[],int n, int m){
	 int k=m+n-1;
    int i=n-1;
    int j=m-1;

    while(i>=0 && j>=0){
        if(a[i]>b[j]){
        	a[k]=a[i];
        	i--;
        	k--;
        }
        else{
        	a[k]=b[j];
        	k--;
        	j--;
        }
    }

    while(j>=0){
    	a[k]=b[j];
    	k--;
    	j--;
    }

    while(i>=0){
    	a[k]=a[i];
    	k--;
    	i--;
    }


    
    // for(int i=0;i<m+n;i++){
    // 	cout<<a[i]<<" ";
    // }

}
int main(){
	int a[100];
	int b[100];
	cout<<"Enter the size of arrays"<<endl;
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++){
        cin>>a[i];
	}

	for(int i=0;i<m;i++){
		cin>>b[i];
	}

	sortarray(a,b,n,m);
     
    // int k=m+n-1;
    // int i=n-1;
    // int j=m-1;

    // while(i>=0 && j>=0){
    //     if(a[i]>b[j]){
    //     	a[k]=a[i];
    //     	i--;
    //     	k--;
    //     }
    //     else{
    //     	a[k]=b[j];
    //     	k--;
    //     	j--;
    //     }
    // }

    // while(j>=0){
    // 	a[k]=b[j];
    // 	k--;
    // 	j--;
    // }

    // while(i>=0){
    // 	a[k]=a[i];
    // 	k--;
    // 	i--;
    // }


    
    for(int i=0;i<m+n;i++){
    	cout<<a[i]<<" ";
    }

 return 0;

}