int romanToInt(char* s) 
{
    int answer = 0;
    for(int i = 0;i<strlen(s);i++)
    {
        if(s[i] == 'I' && s[i+1] == 'V'){
            answer+=4;
            i++;
        }
        else if(s[i] == 'I' && s[i+1] == 'X'){
            answer+=9;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] == 'L'){
            answer+=40;
            i++;
        }
        else if(s[i] == 'X' && s[i+1] == 'C'){
            answer+=90;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] == 'D'){
            answer+=400;
            i++;
        }
        else if(s[i] == 'C' && s[i+1] == 'M'){
            answer+=900;
            i++;
        }
        else if(s[i] == 'I'){
            answer+=1;
        }
        else if(s[i] == 'V'){
            answer+=5;
        }
        else if(s[i] == 'X'){
            answer+=10;
        }
        else if(s[i] == 'L'){
            answer+=50;
        }
        else if(s[i] == 'C'){
            answer+=100;
        }
        else if(s[i] == 'D'){
            answer+=500;
        }
        else if(s[i] == 'M'){
            answer+=1000;
        }
    }
    return answer;
}