#include<iostream>
using namespace std;

int main(){
    int M1[5][5] ,M2[5][5] , R , C , Res[5][5];

cout<<"enter the size of matrix"<<endl;
cin>>R>>C;

cout<<endl<<"enter the elements of first matrix"<<endl;
for(int i=0 ; i<R ; i++){
    for(int j=0 ; j<C ; j++){
        cin>>M1[i][j];
    }
}

cout<<endl<<"enter the elements of second matrix"<<endl;
for(int i=0 ; i<R ; i++){
    for(int j=0 ; j<C ; j++){
        cin>>M2[i][j];
    }
}

cout<<endl<<"The result of two  matrix is";
for(int i=0 ; i<R ; i++){
    for(int j=0 ; j<C ; j++){
        Res[i][j]=M1[i][j]+M2[i][j];
        cout<<Res[i][j]<<" ";
    }
    cout<<endl;
}       


    return 0;
}
