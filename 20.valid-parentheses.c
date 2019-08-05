/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */
bool isValid(char * s){
    int length = strlen(s);
    char stack[length+1];
    
    int num = 0;
    char top;
    if(s[0] == '\0')
        return true;
    if(length < 2)
        return false;
    for (int i = 0; i < length; i++){
        if (s[i] =='}' && num != 0) {
            if(stack[num-1] != '\0'){
                top = stack[num-1];
                num--;
                stack[num] = '\0';
            }else{
                top = '#';
            }
            if (top != '{'){
                return false;
            }
            
        }else if (s[i] == ']' && num != 0) {
            if(stack[num-1] != '\0'){
                top = stack[num-1];
                num--;
                stack[num] = '\0';
            }else{
                top = '#';
            }
            if (top != '['){
                return false;
            }
            
        }else if (s[i] == ')' && num != 0){
            if(stack[num-1] != '\0'){
                top = stack[num-1];
                num--;
                stack[num] = '\0';
            }else{
                top = '#';
            }
            if (top != '('){
                return false;
            }
        }else{
            stack[num] = s[i];
            num++;
            stack[num] = '\0';
        }
    }
    if(stack[0] == '\0')
        return true;
    else
        return false;
}


