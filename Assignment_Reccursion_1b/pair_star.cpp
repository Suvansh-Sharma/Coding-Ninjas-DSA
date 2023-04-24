// Change in the given string itself. So no need to return or print the changed string.
#include <string.h>
void pairStarHelper(char str[], int start) {
	if (str[start] == '\0' || str[start + 1] == '\0') {
        return;
    }
    
    pairStarHelper(str, start + 1);
 
    if (str[start] == str[start + 1]) {
        int length = 0;
            while(str[length] != '\0'){
                length++;
            }
        for (int i = length; i >= start + 1; i--) {
            str[i + 1] = str[i];
        }
 
        str[start + 1] = '*';
    }
}

void pairStar(char input[]) {
	pairStarHelper(input, 0);
}
