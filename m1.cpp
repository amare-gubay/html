#include<iostream>
using namespace std;
void merge_element(int array[],int var1,int var2,int var3,int var4);
void mergr_sort(int array[],int var1,int var2,int var3);
int main(){
	int array[20];
	int size;
	cout<<"enter the size your array:"<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"enter the "<<i+1<<" th number"<<endl;
		cin>>array[i];
	}
	mergr_sort(array,0,size-1,size);
	cout<<" after merge sort:"<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
void merge_element(int array[],int var1,int var2,int var3,int var4){
	int temp[var4];
	int i=var1;
	int j=var2+1;
	int n=0;
	
	while(i<=var2&&j<=var3){
		if(array[i]<array[j]){
			temp[n]=array[i];
			i++;
			n++;
		}else{
			temp[n]=array[j];
			n++;
			j++;
		}
	}
	while(i<=var2){
		temp[n]=array[i];
		n++;
		i++;
	}
	while(j<=var3){
		temp[n]=array[j];
		n++;
		j++;
	}
	for(int j=0;j<n;j++){
		array[var1+j]=temp[j];
	}
}
void mergr_sort(int array[],int var1,int var2,int var3){
	if(var1==var2)
	return;
	int mid=(var1+var2)/2;
	mergr_sort(array,var1,mid,var3);
	mergr_sort(array,mid+1,var2,var3);
	merge_element(array,var1,mid,var2,var3);
	
}

