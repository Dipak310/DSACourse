#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {2,1,3,4};
    int arr[10] = {1,10,8,6,7,8,9,6,7,8};
    int n = 10;
    int K = 8;
    int result = 0;
    
    for(int i=0;i<n;++i){
        int key = i;
        int res = 0;
        int flag = false;
        while(key>0){
            if(arr[key]<=K){
                if(arr[key]==K){
                    flag = true;
                }
                res++;
            }
            key--;
        }
        while(key<n){
            if(arr[key]<=K){
                if(arr[key]==K){
                    flag = true;
                }
                res++;
            }
            key++;
        }
        if(flag){
            result = result + (res*(res+1))/2;
            i += res;
        }
    }
    cout<<result;
    
    return 0;
}
