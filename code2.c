#include <stdio.h>
#include <stdlib.h>

int a, b;

int carry;
int carry_count;

int n1[15];
int n2[15];

int main(void) {
	//readin + solve
	while(1) {
		scanf("%d%d", &a, &b);
		if(!(a == 0 && b == 0)) {
			//convert to arr
			int d = 0;	//max digit of two num
			while(a > 0 || b > 0) {
				if(a > 0) {
					n1[d] = a % 10;
					a /= 10;
				} else
					n1[d] = 0;
				if(b > 0) {
					n2[d] = b % 10;
					b /= 10;
				} else
					n2[d] = 0;
				d++;
			}
			
			//calc
			carry = 0;
			carry_count = 0;
			for(int i = 0; i < d; i++) {
				n2[i] += n1[i] + carry;
				carry = (n2[i] >= 10);
				carry_count += carry;
			}
			
			//print
			if(carry_count == 0 || carry_count == 1)
				printf("%s carry operation.\n", (carry_count)? "1" : "No");
			else
				printf("%d carry operations.\n", carry_count);
			
		} else
			break;
	}
	
	return 0;
}