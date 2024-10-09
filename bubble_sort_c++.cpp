#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int i,j,temp;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printList(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int size;

    cout<<"Enter size of array:";
    cin>>size;

    int arr[size];

    cout<<"Input in array:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Before sorting:\n";
    printList(arr, size);

    bubbleSort(arr,size);

    cout<<"After sorting:\n";
    printList(arr, size);

    return 0;

}