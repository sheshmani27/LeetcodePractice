
/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].

Return true if and only if the given array A is monotonic.
*/

#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& A) {
    // [1,2,2,3] ==> Increasing/ monotone.
    // [1,1,1,1] ==> monotone.
    // [1,2,4,3,1] ==> neither increasing nor montone.
    
    bool Inc = A[A.size() - 1] >= A[0] ? true : false;
    for(int i = 1; i < A.size(); i++){
        if(Inc){
            if(A[i] < A[i-1]) return false;
        }
        else
        {
            if(A[i] > A[i-1]) return false;
        }
    }
    return true;
}

int main(){
  vector<int> vec = {1,2,5,3};

  if(isMonotonic(vec)){
      cout << "Vector is monotone" << endl;
  }
  else{
      cout << "Vector is not monotone "<< endl;
  }
  return 0;

}