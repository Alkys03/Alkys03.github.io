#include <stdio.h>
int main() {
    long long low, high, i, mirror, temp, ypol,sum;
    int k,j,prime,prime2,y,k2;
    scanf ("%lld", &low);
    scanf ("%lld", &high);
    sum=0;
    if (low>=0 && high<=1000000000000000LL) {
        if (low<10){
            low=10;
        }
        for (i=low; i<=high; i++) {
            k=1;
            while (k*k<i) {
                k++;
            }
            if (k*k==i) {
                prime=0;
                for (j=1; j<=k; j++) {
                    if(k%j==0) {
                        prime++;
                    }
                }
                if (prime==2) {
                    temp=i;
                    mirror=0;
                    while (temp!=0) {
                        ypol=temp%10;
                        mirror=mirror*10 + ypol;
                        temp/=10;
                    }
                    if (mirror!=i) {
                        k2=1;
                        while (k2 * k2 < mirror) {
                            k2++;
                        }
                        if (k2 * k2 == mirror) {
                            prime2=0;
                            for (y=1; y<=k2; y++) {
                                if (k2%y==0) {
                                    prime2++;
                                }
                            }
                            if (prime2==2){
                                sum=sum+i;
                            }
                        }
                    }
                }
            }
        }
        printf("%lld\n", sum);
    } else {
        printf("1\n");
    }
    return 0;
}