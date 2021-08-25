void reverseword(char *s, int i, int j){
    while(i<j){
        char t=s[i];
        s[i++]=s[j];
        s[j--]=t;
    } 
}

char* reverseWords(char* s){
    int i=0, j=0;
    int l=0;
    int len = strlen(s);
    int wordcount=0;

    while(1){
        while(i<len && s[i] == ' ') i++;  // skip spaces in front of the word
        if(i==len) break;
        if(wordcount) s[j++]=' ';
        l=j;
        while(i<len && s[i] != ' ') {s[j]=s[i]; j++; i++;} 
        reverseword(s,l,j-1);                // reverse word in place
        wordcount++;            
    }

    s[j] = '\0';                           // resize result string
    reverseword(s,0,j-1);                  // reverse whole string
    return s;
}
