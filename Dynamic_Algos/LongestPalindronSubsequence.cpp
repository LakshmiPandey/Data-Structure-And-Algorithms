// Longest palindromic subsequence code implmentation in C++


#include <iostream>
#include<cstdio>
using namespace std;

int max(int a, int b){
    if(a>b) return a;
    return b;
}
int longestPalindromicSubseq(char a[], int n){
    int m[n][n];
    for(int i=0; i<n; i++){
        m[i][i]=  0;
        
    }
        int j=0;
    for(int l=1; l<n; l++)
    {
        for(int i=1; i< (n-l); i++ ){
           j = i+l; 
           if(a[i]== a[j]){
               m[i][j]= m[i+1][j+1];
           }
           else{
               m[i][j]= max( m[i][j-1], m[i+1][j]);
               
           }
        }
    }
    
    return m[1][n-1]; 
}
int main() {
    int n=0;
    printf("\n Enter the string length");
    scanf("%d", &n);
    char ch[n];
    for(int i=0; i<n; i++)
    scanf("%c", &ch[i]);
    printf("\n\n\n The longest  palindromic subsequence is %d", longestPalindromicSubseq(ch, n));
	return 0;
}
