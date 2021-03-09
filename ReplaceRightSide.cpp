
/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.
*/


  #include<iostream>
  #include<vector>
  #include<algorithm>

  using namespace std;


vector<int> replaceElements(vector<int>& arr) {
    if(arr.size() == 1){
        arr[0] = -1;
    }
    
    for(int i = 0; i < arr.size() - 1; i++){
        arr[i] = *max_element(arr.begin()+i+1, arr.end());
    }
    arr[arr.size() - 1] = -1;
    
    return arr;
}

int main(){
    vector<int> tmp = {2,4,5,8,4,3,4,5,2}, ans;
    ans = replaceElements(tmp);

    for(auto a : ans){
        cout << a <<"  ";
    }

    return 0;
}
