int strStr(char* haystack, char* needle) 
{
    if(strlen(haystack)<strlen(needle)) return -1;
    for(int i=0;i<strlen(haystack)-strlen(needle)+1;i++)
    {
        int j=0;
        if(haystack[i]==needle[j])
        {
            for(int k=i;k<strlen(needle)+i;k++)
            {
                if(haystack[k]==needle[j]) j++;
            }
            if(j==strlen(needle)) return i;
        }
    }
    return -1;
}