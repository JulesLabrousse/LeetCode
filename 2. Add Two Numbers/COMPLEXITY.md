Time Complexity  
Worst Case : O(max(len(l1), len(l2))).  
We traverse both lists once, digit by digit.  
All operations per node are O(1) (addition, modulo, division).  
  
Space Complexify  
Output list : O(max(len(l1), len(l2)) + 1) nodes (the +1 for a possible final carry).
