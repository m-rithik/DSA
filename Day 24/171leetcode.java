//171. Excel Sheet Column Number

class Solution {
  public int titleToNumber(String columnTitle) {
    return columnTitle.chars().reduce(0, (subtotal, c) -> subtotal * 26 + c -'@');
  }
}

/*
Pehle string ke har character ko lo aur uska alphabet position nikaalo using c - '@' (jaise ‘A’ 
= 1, ‘B’ = 2, …, ‘Z’ = 26). Fir subtotal ko har step pe update karo: pehle usse 26 se multiply 
karo (base-26 logic) aur current character ki value add kar do. Yeh process har character ke 
liye repeat hota hai. End mein subtotal hi column number banega. Example: "AB" ke liye, 0 → 1 → 28. 
Output: 28*/

//next after exams: sheets follow and algorithms