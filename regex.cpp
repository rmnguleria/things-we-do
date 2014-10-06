#include<iostream>
using namespace std;
int match(const char *pattern, const char *string)
{
   register char c;
   static int counter = 0;
   while((c = *pattern++)!='\0'){
      if(c=='*'){
         while(*string){
            if(1==match(pattern,string))
               return 1;
            ++string;
         }
      }
      else{
         if(c != *string++)
            return 0;
      }
   }
   if(!(*string)){
      return 1;
   }
   return 0;
}
int main(){
   char *pattern = "a*c*e*b";
   char *stri = "aaaaaccccccceb";
   int m = match(pattern,stri);
   cout<<m<<endl;
}