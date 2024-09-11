int lengthOfLastWord(char* s) 
{
    int l=strlen(s);int count=0;
    for(int i=l-1;i>=0;i--)
    {
        int x=(int)s[i];
        if((x>=65 && x<=90)||(x>=97&&x<=122))
        {
            count++;
        }
        if(!((x>=65 && x<=90)||(x>=97&&x<=122)) && count!=0) return count;
    }
    return count;  
}