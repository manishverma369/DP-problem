// two int given ave to calculate ncr
int fact(int n){
    if(n<=1) return 1;
    int sum=0;
    return sum+=n*fact(n-1);
}
int main(){
    int n,m;
    int count=0;
    for(int i=1;i<=m;i++){
        count+=fact(n)/(fact(n-i)*fact(m));
    }
    cout<<count;
    return 0;
}