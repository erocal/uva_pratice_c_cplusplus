#include<stdio.h>
#include<string.h>
#include<math.h>

int is_prime(int n){
    if((n == 1) || (n % 2 == 0)){
        return 0;
    }else if(n == 2){
        return 1;
    }
    int k = sqrt(n);
    for(int i = 3; i <= k ;i += 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int inverse(int n){
    int n_i = 0;
    while(n > 0){
        n_i = n_i * 10 + n % 10;
        n /= 10;
    }
    return n_i;
}

int main(){
    int n, type;
    char result[3][10] = {"not prime", "prime", "emirp"};
    while(scanf("%d", &n) != EOF){
        type = is_prime(n);
        if((type == 1) && (n != inverse(n))){
            type += is_prime(inverse(n));
        }
        printf("%d is %s.\n", n, result[type]);
    }
    return 0;
}
