bool isValid(char* s) 
{
    int n=strlen(s);
    if(n==0 || n%2!=0) return false;

    char* stack=(char*)malloc(n*sizeof(char));
    int t=-1;
    for(int i=0;s[i];i++)
    {
        char c=s[i];
        if(c=='(' ||c=='{' ||c=='[')
        stack[++t]=c;
        else
        {
            if(t==-1) return false;
            char open=stack[t--];
            if((c==')' && open!='(') || (c=='}' && open!='{') || (c==']' && open!='['))
            return false;
        }
    }
    return t==-1;  
}