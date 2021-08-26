
int maxProfit(int* prices, int sz){
    int ret=0, min = prices[0];

    int i=0;
    for (i=1; i<sz; i++){

        if (prices[i] - min > ret)
            ret = prices[i] - min;

        if (prices[i] < min)
            min = prices[i];
    }

    return ret;
}
