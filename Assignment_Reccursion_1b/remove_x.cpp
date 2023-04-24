// Change in the given string itself. So no need to return or print anything
#include <string.h>
void removeXhelper(char input[], int start, int end){
    if(input[end] == '\0'){
        input[start] = '\0';
        return;
    }
    if(input[end] != 'x'){
        input[start] = input[end];
        start++;
        end++;
        removeXhelper(input, start, end);
    }else {
        end++;
        removeXhelper(input, start, end);
    }
}

void removeX(char input[]) {
	removeXhelper(input, 0, 0);
}
