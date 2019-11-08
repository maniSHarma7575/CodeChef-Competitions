#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void merge(int arr[], int arr2[], int l, int m, int r){
    //cout << l <<" " << r << endl;
    int sz1 = m - l + 1;
    int sz2 = r - m;
    int L1[sz1], L2[sz1];
    int R1[sz1], R2[sz1];
    for(int i = 0; i < sz1; i++){
        L1[i] = arr[l+i];
        L2[i] = arr2[l+i];
    }
    for(int i = 0; i < sz2; i++){
        R1[i] = arr[m+i+1];
        R2[i] = arr2[m+i+1];
    }
    int i = 0, j = 0, k = l;
    while((i < sz1) && (j < sz2)){
        if(L1[i] < R1[j]){
            //cout << "a ";
            arr[k] = L1[i];
            arr2[k] = L2[i];
            k++;
            i++;
        }
        else{
            //cout << "b ";
            arr[k] = R1[j];
            arr2[k] = R2[j];
            k++;
            j++;
            //cout << R1[j] << ' ';
        }
    }
    while(i < sz1){
        //cout << "c ";
        arr[k] = L1[i];
        arr2[k] = L2[i];
        k++;
        i++;
        //cout << L1[i] << " ";
    }
    while(j < sz2){
        //cout << "d ";
        arr[k] = R1[j];
        arr2[k] = R2[j];
        k++;
        j++;
        //cout << R1[i] << " ";
    }
    //cout << r << ' ' << arr[r] << endl;
}

void mergeSort(int arr[], int arr2[], int l, int r){
    //cout << "ms " << l << ' ' << r << endl; 
    if(l == r) return;
    int m = l+(r-l)/2;
    mergeSort(arr,arr2,l,m);
    mergeSort(arr,arr2,m+1,r);
    merge(arr,arr2,l,m,r);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int N, M;
    cin >> N >> M;
    int A[N];
    int B[N];
    //int C[M][ceil(N/M)];
    for(int i = 0; i < N; i++){
        cin >> A[i];
        B[i] = i%M;
    }
    mergeSort(A,B,0,N-1);
    int colors[M] = {0};
    int i =0, j = -1;
    int overallmin;
    unordered_map<int,int> colorset;
    while(colorset.size() < M){
        j++;
        colorset[B[j]]++;
    }
    overallmin = A[j] - A[0];
    int current = overallmin;
    bool reached = false;
    while(true){
        colorset[B[i]]--;
        while(!colorset[B[i]]){
            j++;
            if(j == N){
                reached = true; break;
            }
            colorset[B[j]]++;
        }
        if(reached) break;
        i++;
        current = A[j] - A[i];
        overallmin = min(overallmin, current);
    }
    cout << overallmin << endl;
    }
	return 0;
}
