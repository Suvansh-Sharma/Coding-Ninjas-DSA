int count(int n){
    //write your code here
    if(n<10)
    {
        return 1;
    }
    int small_ans=count(n/10);
    return 1+small_ans;
}
