# C-Programming-Lab-2

C programming lab 2 for COMP 2510

4 String functions to implement.

----------------------------------------------------------------------------------------
Function 1: 
            size_t str_find_last(const s[], int c);
            
    Returns the index of the last occurrence of the character (specifiec by) c in the 
    String s, or returns -1 if the string does not contain c
    
----------------------------------------------------------------------------------------
Function 2: 
            size_t str_replace_all(char s[], int oldc, int newc);
            
    Replaces all occurences of the character oldc in the String s by the character newc.
    Returns the number of replacements.
    
----------------------------------------------------------------------------------------
Function 3: 
            size_t str_all_digits(const char s[]);
            
    Returns 1 if the String s consits entirely of digits; otherwise returns 0.
       
----------------------------------------------------------------------------------------
Function 4: 
            int str_equal(const char s[], const char t[]);
            
    Returns 1 if the String 's' and 't' have the same sequence of characters; otherwise
    returns 0.