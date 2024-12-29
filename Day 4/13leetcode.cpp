//13. Roman to Integer

int romanToInt(char* s) {
   int i,ans=0;
   int r[4000]={0};
    r['I']=1;
    r['V']=5;
    r['X']=10;
    r['L']=50;
    r['C']=100;
    r['D']=500;
    r['M']=1000;
    for ( i = 0; s[i + 1] != '\0'; ++i) {
        if (r[s[i]] < r[s[i + 1]])
            ans -= r[s[i]];
        else
            ans += r[s[i]];
    }return ans + r[s[i]]; 
}

/*
the r array helps in taking it one by one and less than as greater that i+1 is not allowed in roman num it is acculumulated in r and added to ans at the very end
*/