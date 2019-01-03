int Solution::trailingZeroes(int A) {
    if(A<5) return 0;
    int count =0;
    for(int k=5; A/k; k= k*5){
        int m = 0;
        if(A%k==0)
           m = A/k;
         else 
           m =  (A - A%k)/k;
        count = count + m;   
    }
    return (count);
}
