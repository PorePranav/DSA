// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int ans;
//     int app;
//     int temp=0;
//     int finalApp=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]==arr[j]){
//                 app++;
//             }
//             if(finalApp==0){
//                 finalApp=app;
//             }
//             if(app>finalApp){
//                 finalApp=app;
//                 ans=i;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }
//has bugs, need to debug
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    const int N = 1e6+2;
    int idx[N];

    for(int i=0; i<N; i++){
        idx[i]=1;
    }

    int minIndex = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=1){
            minIndex = min(minIndex, idx[arr[i]]);
        }else{
            idx[arr[i]];
        }
    }
    if(minIndex == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<< minIndex+1 <<endl;
    }

    return 0;
}