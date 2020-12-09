int Q,B,S;
int D=1;
int VAR[10][2]={0,1,{2,3}};
const int ARR[3][4]={1,2,{2,3,4},5,6};
const int V=ARR[1][2];

int func(int a,int b,int c){
    c=a+b;
    b=a+c;
    return b;
}

int main(){
    int q=func(1,1,1);
    while(q>0){
        q=q-1;
    }
	return 0;
}
