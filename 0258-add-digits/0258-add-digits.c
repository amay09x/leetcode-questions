int addDigits(int num) {
    //i synced leetsync here please ignore
    while (num >= 10){
        int sum = 0;
        while(num>0){
            sum = sum + num % 10;
            num = num / 10;
        }
        num = sum;
    }
    return num;
}


