#include <iostream>

using namespace std;

int main()
{
    const int q=8;
    int i,j,k,n,W[q][q],P[q][q],N;
    cin>>N;
    for(i =0;i<N;i++)
         for(j =0;j<N;j++)
             cin>>W[i][j];

   // cout<<m<<n;
    for ( k = 0; k < N; k++ )
      for ( i = 0; i < N; i++ )
        for ( j = 0; j < N; j++ )
          if ( W[i][k]+W[k][j] < W[i][j] )
             W[i][j] = W[i][k] + W[k][j];
    for ( i = 0; i < N; i++ ) {
      for ( j = 0; j < N; j++ )
        P[i][j] = i;
      P[i][i] = -1;
      }
    for ( k = 0; k < N; k++ )
      for ( i = 0; i < N; i++ )
        for ( j = 0; j < N; j++ )
          if ( W[i][k] + W[k][j] < W[i][j] ) {
            W[i][j] = W[i][k] + W[k][j];
            P[i][j] = P[k][j];
            }

    for(i =0;i<N;i++)
    {
        for(j =0;j<N;j++)
             cout<<P[i][j]<<" ";
        cout<<endl;
    }
}
