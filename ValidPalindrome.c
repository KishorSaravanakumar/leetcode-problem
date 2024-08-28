bool isPalindrome(char* s) 
{
     int i=0,j=strlen(s)-1;
     while(i<=j)
     {
        int k=(int)s[i];
        int l=(int)s[j];
        if(((k>=65 && k<=90)||(k>=97 && k<=122)||(k>=48 && k<=57)) && ((l>=65 && l<=90)||(l>=97 && l<=122)||(l>=48 && l<=57)))
        {
            if(k>=65 && k<=90)
            {
                k=k+32;
            }
            if(l>=65 && l<=90)
            {
                l=l+32;
            }
            if(k!=l)
            return false;
            i++;j--;
        }
        else if(!((k>=65 && k<=90)||(k>=97 && k<=122)||(k>=48 && k<=57)))
        i++;
        else
        j--;
     }
     return true;
     
}