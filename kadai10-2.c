#include <stdio.h>

double f(double x){
    double y;
    y=4.0/(1.0+x*x);
    return y;
}
int main(){
    int n,m;
    n=2;
    m=1;
    double h,s,sum;
    while (n<=4194304) {
        h=1.0/n;
        sum=0;
        for(m=1;m<n;m++){
            sum=sum+f(m*h);
        }
        s=(((f(0)+f(1))/2.0)+sum)*h;
        printf("%7d %.11f\n",n,s);
        n=n*2;
    }
}

