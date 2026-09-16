bool isSubsequence(char* s, char* t) {
// jaswin is the god of shinobi ;
int k=0;
int count =0;


for (int i=0;i<strlen(t);i++){
if (s[k]==t[i]){
    count ++;
    k++;

}
}
if (count ==strlen(s)){
    return true ;
}
else {
    return false ;

}
}