#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int n, int m){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col]==key){
                cout<<"Row is "<<row<<" Column is "<<col<<" ";
                return 1;
            }
        }        
    }  
    return 0;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // for printing output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }        
        cout<<endl;
    }    

    int key;
    cout<<"Enter the element you wanna search in 2d array : ";
    cin>>key;
    cout<<endl;

    if (isPresent(arr, key, 3, 4))
        cout<<"Element is found";
    else 
        cout<<"Element not found";
    


    return 0;
}