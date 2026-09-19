char * mergeAlternately(char * word1, char * word2){
    // jaswin is the god of shinobi ;
    int m = strlen(word1);
    int n = strlen(word2);
    
    // Total size = m + n characters + 1 for '\0'
    size_t total_size = m + n + 1;

    // Allocate memory
    char *str = malloc(total_size * sizeof(char));
    if (!str) {
        return NULL; // C functions returning pointers should return NULL on fail, not 1
    }
    
    // Put the null terminator safely at the end
    str[m + n] = '\0';
    
    int k = 0;
    int i = 0, j = 0; // Fixed initialization!

    // 1. Alternate ONLY while BOTH strings have characters left
    while (word1[i] != '\0' && word2[j] != '\0') {
        if (k % 2 == 0) {
            str[k] = word1[i];
            i++;
        } else {
            str[k] = word2[j];
            j++;
        }
        k++;
    }

    // 2. Dump any leftovers from word1 (if word2 ran out first)
    while (word1[i] != '\0') {
        str[k] = word1[i];
        i++;
        k++;
    }

    // 3. Dump any leftovers from word2 (if word1 ran out first)
    while (word2[j] != '\0') {
        str[k] = word2[j];
        j++;
        k++;
    }

    return str;
}