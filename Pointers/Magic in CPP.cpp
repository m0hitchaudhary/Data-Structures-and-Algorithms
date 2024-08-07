#include <iostream>
using namespace std;

void swap(int*, int*);
void swap(int&, int&);

void swap(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp;
}

void swap(int &A, int &B){
    int temp = A;
    A = B;
    B = temp;
}

int main() {
    
    int testcase;
    cin >> testcase;
    
    while(testcase--){
        int A, B;
        cin >> A >> B;
        
        swap(A, B);
        cout << A << " " << B << endl;
        
        swap(&A, &B);
        
        cout << A << " " << B << endl;
    }
    
    return 0;
}
