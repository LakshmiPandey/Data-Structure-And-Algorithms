// to find total no 1 to2^n not having consequetive 1's
// simple example of fibonacci implmentation


#include <iostream>
#include<cstdio>
using namespace std;

int main() {
    int n=0;
	printf("\n  enter the no n\n");
	scanf("%d", &n);
	int first =0, second =1, third =0, sum=0;
	for(int i=0; i<n; i++){
	    third = first+second;
	    sum+= third;
	    first = second;
	    second = third;
	}
	
	printf("\n No of  elements with non adjacent 1's are %d", sum);
	return 0;
}
