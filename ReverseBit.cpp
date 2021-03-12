/*
  Reverse bits of a given 32 bits unsigned integer.
  Note that in some languages such as Java, there is no unsigned integer type. In this case, both input and output will be given as a signed integer type. They should not affect your implementation, as the integer's internal binary representation is the same, whether it is signed or unsigned.
In Java, the compiler represents the signed integers using 2's complement notation. Therefore, in Example 2 above, the input represents the signed integer -3 and the output represents the signed integer -1073741825.
Follow up:
If this function is called many times, how would you optimize it?
Example 1:
Input: n = 00000010100101000001111010011100
Output:    964176192 (00111001011110000010100101000000)
*/

#include<iostream>
#include<math.h>

using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    int i = 31;
    while(n){
        if(n&1){
            ans += pow(2,i);
        }
        i--;
        n = n >> 1;
    }
    return ans;
}

int main(){
  uint32_t tmp = 43261596;
  cout <<"before reverse :" << tmp << endl;
  tmp = reverseBits(tmp);
  cout <<"bit reversed = " << tmp << endl;
  return 0;
}