import java.io.*;
import java.lang.*;

public String longestCommonPrefix(String[] strs) {
    if(strs == null || strs.length == 0)
        return "";
 
    int minLen=Integer.MAX_VALUE;
    for(String str: strs){
        if(minLen > str.length())
            minLen = str.length();
    }
    if(minLen == 0) return "";
 
    for(int j=0; j<minLen; j++){
        char prev1='0';
        for(int i=0; i<strs.length ;i++){
            if(i==0) {
                prev1 = strs[i].charAt(j);
                continue;
            }
 
            if(strs[i].charAt(j) != prev1){
                return strs[i].substring(0, j);
            }
        }
    }
 
    return strs[0].substring(0,minLen);
}

    Status API Training Shop Blog About 

    © 2016 GitHub, Inc. 
