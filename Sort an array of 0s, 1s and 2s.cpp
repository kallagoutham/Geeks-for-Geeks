class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c0 =0;
        int c1 =0;
        int c2 =0;
        for(int i =0; i<n; i++){
          if(a[i]==0){
              c0++;
          }
           else if(a[i]==1){
              c1++;
          }
          else if(a[i]==2){
              c2++;
          }
        }
        for(int j =0; j<c0; j++){
          a[j]=0;
        }
        for(int k =c0; k<c1+c0; k++){
          a[k]=1;
        }
        for(int l =c1+c0; l<n; l++){
            a[l]=2;
        }
    }
};
