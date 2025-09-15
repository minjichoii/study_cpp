#include <iostream>
#include <algorithm>

using namespace std;
//140
int main() {
    int arr[9];
    int total=0;
    int temp=0;

    for (int i=0; i<9; i++) {
        cin >> arr[i];
        total+=arr[i];
    }

    int first=0;
    int second=0;
    for (int i=0; i<9; i++){
        for (int j=i+1; j<9; j++){
            if(total-arr[i]-arr[j]==100){
                first=i;
                second=j;
                break;
            }
        } 
        if (first!=0) break;
    }
       
    int result[7], idx=0;
    for (int i=0; i<9; i++){
        if(i!=first && i!=second) result[idx++]=arr[i];
        
    }

    sort(result, result+7);

    for (int i=0; i<7; i++) cout << result[i]<<"\n";


}