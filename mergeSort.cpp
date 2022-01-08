#include<iostream>
#include<vector>

using namespace std ; 

const long long Max = 10000000 ; 

void merge(vector <long long>  &arr , int L , int mid , int R){
    vector <long long> ll(arr.begin() + L , arr.begin() + mid + 1);
       vector <long long> rl(arr.begin() + mid + 1 , arr.begin() + R + 1) ;

    ll.insert(ll.end() , Max) ;
    rl.insert(rl.end() , Max) ;

    int il = 0 , ir = 0 ;
    for(int i = L ; i <= R ; i++){
        if(rl[ir] > ll[il]){
            arr[i] = ll[il] ;
            il++ ;
        }
        else{
            arr[i] = rl[ir] ;
            ir++ ; 
        }
    }
}

void merge_sort(vector <long long> &arr , int L , int R){
    if(L == R) return ;

    int mid = (L + R) / 2 ;

    merge_sort(arr , L , mid) ;
    merge_sort(arr , mid + 1 , R) ;
    merge(arr , L , mid , R) ;
}

int main(){
    vector <long long> w , f , e ; 
    long long  n , tmp ; 

    cin >> n ; 
    for(int i = 0 ; i < n ; i++){
        cin >> tmp ; 
        w.push_back(tmp) ; 
    }
    for(int i = 0 ; i < n ; i++){
        cin >> tmp ; 
        f.push_back(tmp) ;
    }
    
    for(int i = 0 ; i < n ; i++){
        e.push_back(f[i] * w[i]) ;
    }

    merge_sort(w , 0 , w.size() - 1) ; 


}