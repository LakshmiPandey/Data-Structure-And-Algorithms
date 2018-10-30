#include <cstdio>
using namespace std;

int main() {
   int fact[200000], i=0, j=0, l=0, n, temp=0, k=0;
   scanf("%d", &n);
   fact[0]=1;
   l=1;
   for(i=1; i<=n; i++){
       for(j=0; j<i; j++){
          k=temp+ i*fact[j];
          fact[j]= k%10;
          temp= k/10;
       }
       while(temp){
           fact[l++]=temp%10;
           temp=temp/10;
       }
   }
   for(i=l-1; i>=0; i--)
   printf("%d", fact[i]);
   printf("\n");
	return 0;
}
