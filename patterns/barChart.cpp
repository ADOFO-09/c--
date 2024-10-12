#include <iostream>
using namespace std;


//Write a function in c++ that accepts an array of integers and
//its size and displays a bar chart for each value in the array
//Eg: If the array contains 1, 5, 3. It will display the bar chart
//as follows

void showBarChart(int b[], int n){
    for(int i = 0; i < n; i++){
        cout <<b[i]<<"|";
        for(int j = 1; j <=b[i]; j++){
            cout << char(219)<< char(219);
        }
        cout<<endl<<" |\n";
    }
    
}

int getMax(int arr[], int size){
    int maxVal = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
}


void showColumnChart(int x[], int n){
    int mx = getMax(x, n);
    for(int r = mx + 1; r >= 0; r--){
        for(int c= 0; c < n; c++){
            if(x[c] + 1 == r) cout <<"  "<<x[c]; else cout<<" ";
            if(x[c] >= r) cout <<char(219)<<char(219)<<char(219); else cout<<"   ";
        }
        cout<<endl;
    }
};

int main(){
    int data[] = {1, 5, 3, 4, 8};
    // showBarChart(data, 5);
    showColumnChart(data, 5);
    // for(int r=1; r<=5; r++){
    //     cout<<r<<"|";
    //     for(int c=1; c<=2*r; c++){
    //         cout<< char(219);
    //     }
    //     cout<<endl<<" |\n";
    // }
    
};