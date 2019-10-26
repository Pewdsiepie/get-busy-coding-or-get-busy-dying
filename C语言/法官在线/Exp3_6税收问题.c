int main()
{
    int money;
    scanf("%d",&money);
    double outmoney=0.0;
    if(money>1000&&money<=5000) 
    {
        outmoney=(money-1000)*0.05;
    }
    else if(money>5000&&money<=10000)
    {
        outmoney=(money-5000)*0.1+200;
    }
    else if(money>10000)
    {
        outmoney=(money-10000)*0.2+700;
    }

    printf("%.2lf",outmoney);

    return 0;
}
