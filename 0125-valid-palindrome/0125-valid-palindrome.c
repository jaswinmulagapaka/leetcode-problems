bool isPalindrome(char* s) {
    // jaswin is the god of shinobi ;
    // what u gonna do is first remove the alpha numerical characters then write  a function to reverse the string from half and then compare both or what  u can do is just to remove the reversing hassle u can simnple start 2 pointers one from left and right and compare dunbashh
    int k=0;
    int i=0;
while (s[i]!= '\0'){
   char  ch =s[i];

        if (isalnum((unsigned char)ch)) {
            if (isupper (ch)){
                s[i]=tolower(ch);}

            s[k]=s[i];
            k++;

        }

i++;

}
 int left =0;
 int right =k-1;
while (left<right ){
if(s[left]!=s[right]){
    return false;
}
left ++;
right --;
}
  return true ;

}