/*
Bracket Matcher
Have the function BracketMatcher(str) take the str parameter being passed and return 1 if the brackets are correctly matched and each one is accounted for. Otherwise return 0. For example: if str is "(hello (world))", then the output should be 1, but if str is "((hello (world))" the the output should be 0 because the brackets do not correctly match up. Only "(" and ")" will be used as brackets. If str contains no brackets return 1.


*/
#include <iostream>
#include <string>
using namespace std;

int BracketMatcher(string str) {  
  // code goes here  
  int left_count=0; 
  int right_count=0; 
  for (auto elm: str)
  {
      if(elm=='(') left_count++; 
      if(elm==')') right_count++;
  }
  if(left_count==right_count)
  {
      int left_order=0; 
      int right_order=0; 
      for (auto elm:str)
      {
          if(elm=='(') left_order++; 
          if(elm==')') right_order++;
          if (right_order>left_order) return 0;
      }
      return 1; 
  }   
  else return 0;     
}

int main(void) { 
   
  // keep this function call here
  //string str="(coder)(byte))"; //test example1
  //string str="(c(oder)) b(yte)"; //test example2
  string str="the color re(d))()(()"; //test example3
  cout << BracketMatcher(str);
  return 0;
    
}
