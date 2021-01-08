/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
*/

int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        int found=haystack.find(needle);
        if(found!=string::npos)
            return found;
        return -1;
}
