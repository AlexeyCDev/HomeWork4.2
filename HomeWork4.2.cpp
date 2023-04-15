#include<iostream>
using namespace std;

int main()
{
 int A[45]={2,6,7,8,9,10,23,45,12,67,34,13,14,15,16,23,24,25,26,27,38,32,33,34,41,42,43,1,3,4,5,11,55,28,29,20,51,52,19,65,60,87,77,44,7};
 int n=45;
 for(int i=1;i<n-1;i++)
 {
   if(A[i]>A[i-1]&&A[i]>A[i+1])
   {
     cout<<"Local maximum: "<<A[i]<<" Is in position "<<i<<endl;
   }
 }
return 0;
}
