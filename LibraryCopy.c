void copyStr(char *d, char *s) {
    while (*s) {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';
}

void reverseStr(char *str) {
    char *start = str;
    char *end = str;
    char temp;

     int space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            space = 1;
            break;
        }
    }

    if (!space) {
        return;  
    }
    while (*end != '\0') {
        end++;
    }
    end--;  

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

