int large(int*p,int siz){
    int fl=*p,i;
for(i=0;i<siz;i++){
    if(fl<*(p+i)){
        fl=*(p+i);
    }
}
return fl;
}