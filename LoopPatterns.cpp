#include<iostream>
using namespace std;

int main(){
    cout << "----------------------------------------" << endl;
    cout << "Pattern 1" << endl;
    for(int i=0; i<10; i++){
        cout << "*"<< endl;
    }

    

    cout << "----------------------------------------" << endl;
    cout << "Pattern 2" << endl;
    for (int i=0; i<10; i++){
        cout <<"* ";
    } 
    cout << endl;

    cout << "----------------------------------------" << endl;
    cout << "Pattern 3" << endl;
    for (int i=0; i<10; i++){
        for (int i=0; i<10; i++){
        cout <<"* ";
    } 
    cout << endl;

    }
    cout << "----------------------------------------" << endl;
    cout << "Pattern 4" << endl;
    for (int i=0; i<10; i++){
      for (int a=0; a<=i; a++){
        cout << "*";
      }
      cout << endl;
    }


    cout << "----------------------------------------" << endl;
    cout << "Pattern 5" << endl;
     for (int i=10; i>=1; i--){
      for (int a=1; a<=i; a++){
        cout << "*";
      }
      cout << endl;
    }


    cout << "----------------------------------------" << endl;
    cout << "Pattern 6" << endl;
    for (int i=0; i<4; i++){
      for (int a=0; a<2*(i+1); a++){
        cout << "* ";
      }
      cout << endl;
      cout << " "<< endl;
    }


    cout << "----------------------------------------" << endl;
    cout << "Pattern 7" << endl;
    for (int i=0; i<=9; i++){
        if(i%2==0){
            for ( int a =0; a<=i;a++){
            cout << "* ";
            }
        }else{
                cout <<"*";
            }
            cout << endl;
        }



    cout << "----------------------------------------" << endl;
    cout << "Pattern 8" << endl;
    for (int i=0; i<10; i++){
        if(i%2==0){
            for (int a=0; a<10; a++){
            cout << "X ";
            }
            cout << endl;
        }
        if(i%2==1){
            for (int b=0; b<10; b++){
            cout << "O ";
            }
            cout << endl;
        }
    }    

    cout << "----------------------------------------" << endl;
    cout << "Pattern 9" << endl;
     for (int i=0; i<10; i++){
        for (int a=0; a<10; a++){
            if(a%2==0){
            cout << "X ";
            }else {
                cout <<"0 ";
            }
        
        }
        cout << endl;
     }
    cout << "----------------------------------------" << endl;
    cout << "Pattern 10" << endl;
    for (int i =0; i< 9; i++){
        for (int a =0; a< 10; a++){
            if (i==a || i+a==9){
                cout << "X ";
            }
            else{
                cout << "O ";
            }
        }
        cout << endl;
    }


    return 0;
}