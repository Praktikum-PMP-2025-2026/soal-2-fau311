#include <stdio.h>
int banyak_langkah(int n){
    // Jika n merupakan angka 1, maka keluar dari fungsi 
    if (n == 1){
        return 0;
    }
    // Jika n bilangan genap
    if (n % 2 == 0){
        return 1 + banyak_langkah(n/2);
    }
    // Jika n selain bilangan genap dan lebih besar dari 1
    else if(n % 2 != 0 && n > 1){
        return 1 + banyak_langkah(3*n + 1);
    }
}

int main(){
    int jumlah, langkah, hasil, n;
    scanf("%d", &jumlah);
    for(int i = 0; i < jumlah; i++){
        scanf("%d", &n);
        hasil = banyak_langkah(n);
        printf("LANGKAH %d\n", hasil);
    }
    return 0;
}

// source code : https://www.w3schools.com/c/c_functions_recursion.php
