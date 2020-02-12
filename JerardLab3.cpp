/*
=========================================================================================================
Jerard Dayanghirang Guevarra
CS280
February 10th, 2020
Lab3
=========================================================================================================
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
/*
Function 'line' that reverses entire string
Function 'word' that reverses each word in a string (feed each word individually to reverse funciton)
Funcion 'lineword' that reverses the order of words
*/
string line(string s){  
   string temp;
   for(int i = s.length()-1; i >=0 ; i --){
       temp += s[i];
   }
   return temp;
}
string word(string s){
    string wordReverse;
    string tempString;
    /*
        Loop thru characters until isSpace()
        append() adds to the end of string btw
        Basically until s[i] isspace() || null append characters to temp string 
        reverse(tempString) & wordReverse.append(tempString);
    */
   for(int i = 0; i < s.length(); i++){
       if(isspace(s[i]) || s[i] == '\0'){
           line(tempString);
           wordReverse += tempString + " ";
           wordReverse = "";
           i++;
       }
       else{
           tempString += s[i];
       }
   }
    return wordReverse;
}
string lineword(string s){
    string temp;
    temp = line(s);
    temp = word(temp);
    //temp = line(temp);
    return temp;
}
int main(int argc, char*argv[]){
    
    string type = string(argv[1]);
    //cout << "type: " << type << endl;
    string s;
    string temp;
    
    if(argc < 2){
        cout << "MISSING FLAG" << endl;
    }else if(argc > 2){
        cout << "TOO MANY FLAGS" << endl;
    }else if(type == "line"){ 
        while(getline(cin,s)){
    		cout << line(s) << endl;
        }
    }else if(type == "word"){
    	while(getline(cin,s)){
            cout << word(s) << endl;
        }
    }else if(type == "lineword"){
        while(getline(cin,s)){
    		cout << lineword(s) << endl;
        }
    }else{
        cout << "UNKNOWN FLAG " << argv[1] << endl;
    }
    return 0;
}