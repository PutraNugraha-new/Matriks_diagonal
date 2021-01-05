#include <iostream>
using namespace std;
void BacaMatriks(int M[20][20],int,int);
void TampilkanMatriks(int M [20][20], int, int);
int main (){
        int p,q;
        int M[20][20];
        cout<<"------------Matriks Diagonal------------"<<endl;
        cout<<"Masukkan jumlah baris dan kolom matriks : ";cin>>p;
        q=p;
        BacaMatriks(M,p,q);
        cout<<"Hasil Matriks diagonal \n";
        TampilkanMatriks(M,p,q);
    }

void BacaMatriks(int M[20][20], int Nbar, int Nkol){
    for (int i=1; i<=Nbar; i++){
        for (int j=1; j<=Nkol; j++){
            cout<<"Ketikkan elemen ke-["<<i<<"]["<<j<<"]";cin>>M[i][j];
        }
    }
}
void TampilkanMatriks(int M[20][20], int Nbar, int Nkol){
    for (int i=1; i<=Nbar; i++){
        for (int j=1; j<=Nkol; j++){
            if (i != j){
                cout<<0 <<" ";
            }else{
                cout<<M[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
