class Solution {
  public boolean backspaceCompare(String s, String t) {
    String s2 = "";
    String t2 = "";
    for (int i = 0; i < s.length(); i++) {
      char currentChar = s.charAt(i);
      if (currentChar != '#') {
        s2 += currentChar;
      } else {
        if (s2.length() > 0) { 
          s2 = s2.substring(0, s2.length() - 1);
        }
      }
    }
    for (int i = 0; i < t.length(); i++) {
      char currentChar = t.charAt(i);
      if (currentChar != '#') {
        t2 += currentChar;
      } else {
        if (t2.length() > 0) { 
          t2 = t2.substring(0, t2.length() - 1);
        }
      }
    }
    System.out.println(s2);
    System.out.println(t2);
    return s2.equals(t2);
  }
}
