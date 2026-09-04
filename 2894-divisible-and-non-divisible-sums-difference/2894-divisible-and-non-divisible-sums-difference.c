int differenceOfSums(int n, int m) {
    int num1 = 0;
    for(int i = 1; i<n+1; i++){
        if(i % m == 0){
            continue;
        }
        else{
            num1 = num1 + i;
        }
    }
    int num2 = 0;
    for(int i = 1; i<n+1; i++){
        if(i % m == 0){
            num2 = num2 + i;
        }
    }
    return num1-num2;
}