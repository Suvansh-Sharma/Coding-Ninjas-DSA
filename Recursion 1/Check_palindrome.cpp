#include <string.h>
bool ispal(char input[],int start,int end)
{
    if(start>end)
    {
        return true;
    }
    if(input[start]!=input[end])
    {
        return false;
    }
    else{
        ispal(input,start+1,end-1);
    }

}
bool checkPalindrome(char input[]) {
    // Write your code here
    int n=strlen(input);
    if(n==0||n==1)
    {
        return true;
    }
    else{
        return ispal(input,0,n-1);
    }
}



