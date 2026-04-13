#include <iostream>
using namespace std;

bool isPrime (int n){
    if (n<=1) 
        return false;
        for (int i=2; i*i <= n ; i++){
            if (n%i == 0){
                return false;  
            }
        }
    return true;
}
    
int main()
{
    int N;
    int array[6] = {10, 7, 15, 3, 8, 11};
    cin >> N;

    for (int i=0; i<=N; i++){
        if (isPrime(array[i])){
            cout << array[i] << "\t";
        }
    }
    
    return 0;
}
