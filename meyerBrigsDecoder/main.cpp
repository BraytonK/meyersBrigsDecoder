// type in your meyers briggs type in all caps and see it be broken down into peices...

#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;

int main() {
    string type = "";
    string typeArr;
    string answerLowercase;
    string answerOppLowercase;
    string answerUppercase;
    string answerOppUppercase;
    string combination;
    stringstream ss;
    int typeArrNum = 0;
    string firstLetterDecode[8];
    int search = 0;
    int search2 = 0;
    char possibleLetterUppercase[] = { '0', 'E', 'S', 'T', 'J', 'I', 'N', 'F', 'P', '\0' };
    char possibleLetterLowercase[] = { '0', 'e', 's', 't', 'j', 'i', 'n', 'f', 'p', '\0' };
    char possibleLetterOppositesUppercase[] = { '0', 'I', 'N', 'F', 'P', 'E', 'S', 'T', 'J', '\0' };
    char possibleLetterOppositesLowercase[] = { '0', 'i', 'n', 'f', 'p', 'e', 's', 't', 'j', '\0' };
    char givenLetter[4];
    char oppEquivalentString;
    char answerOne[10];
    char answerTwo[1];
    char answerThree[1];
    char answerFour[1];
    
	cout<<"welcome to the meyer's briggs test decoder"<<endl;
	cout << "----------------------" << endl; 
	cout<<"you entered this as your meyer briggs type: ";
	getline(cin,typeArr);
	cout<<typeArr<<endl;
	cout << "----------------------" << endl;
    strcpy(givenLetter, typeArr.c_str());

    while(search<=7){
        if(givenLetter[0]==possibleLetterUppercase[search]){
            break;
        }
        search++;
    }
    
    answerLowercase.push_back(possibleLetterLowercase[search]);
    answerOppLowercase.push_back(possibleLetterOppositesLowercase[search]);
    answerUppercase.push_back(possibleLetterUppercase[search]);
    answerOppUppercase.push_back(possibleLetterOppositesUppercase[search]);
    
    combination = '~' + answerLowercase + answerOppLowercase + answerLowercase + answerOppLowercase + '0' + '0' + '0' + '0';
    
      /* using memcpy to copy string: */
    strcpy(answerOne, combination.c_str());
    
    search = 0;
    while(search<=8){
         cout<<answerOne[search];
         search++;
    }
    
    cout <<""<<endl;
 
    search = 0;
    while(search<=4){
        if(answerOne[search] == 'e')
        {
            if((answerOne[search + 4] == '0') && (answerOne[search + 4] != '\0')){
            answerOne[search + 4] = givenLetter[2]; 
            break;
            }
        }
        search++;
    }
    
    cout << "here is the added character:";
    cout << answerOne[search + 4] << endl;

    search = 0;
    while(search<=8){
         cout<<answerOne[search];
         search++;
    }
    
    search = 0;
    while(search<=4){
        if(answerOne[search] == 'i')
        {
            if((answerOne[search + 4] == '0') && (answerOne[search + 4] != '\0')){
            answerOne[search + 4] = givenLetter[1]; 
            break;
            }
        }
        search++;
    }
    
    cout << "" << endl;
    cout << "here is the added character:";
    cout << answerOne[search + 4] << endl;
    
    search = 0;
    while(search<=8){
         cout<<answerOne[search];
         search++;
    }
   
   // cout << "searching" << endl;
    while(search2<=8){
       // cout << givenLetter[2];
        //cout << possibleLetterUppercase[search2];
        if(givenLetter[2]==possibleLetterUppercase[search2]){
            break;
        }
        search2++; 
    }
    //cout << search2 <<endl;
    //cout << "" << endl;
    //cout << possibleLetterOppositesUppercase[search2] << endl;
    //cout << answerOne[8] << endl;
    search = 0;
    while(search<=4){
        if(answerOne[search] == 'i')
        {
           // cout << "you found me!" << endl;
            //cout << answerOne[search + 4] << endl;
            //cout << search << endl;
            if((answerOne[search + 4] == '0') && (answerOne[search + 4] != '\0')){
               // cout << "vicotry!" << endl;
                answerOne[search + 4] = possibleLetterOppositesUppercase[search2]; 
                break;
            }
        }
        search++;
    }
    
    //cout << search << endl;
    cout << "" << endl;
    cout << "here is the added character:";
    cout << answerOne[search + 4] << endl;
    
    search = 0;
    while(search<=9){
         cout<<answerOne[search];
         search++;
    }
    // cout << "searching" << endl;
    search2 = 0;
    while(search2<=8){
       // cout << givenLetter[2];
        //cout << possibleLetterUppercase[search2];
        if(givenLetter[1]==possibleLetterUppercase[search2]){
            break;
        }
        search2++; 
    }
    //cout << search2 <<endl;
    //cout << "" << endl;
    //cout << possibleLetterOppositesUppercase[search2] << endl;
    //cout << answerOne[8] << endl;
    search = 0;
    while(search<=4){
        if(answerOne[search] == 'e')
        {
           // cout << "you found me!" << endl;
            //cout << answerOne[search + 4] << endl;
            //cout << search << endl;
            if((answerOne[search + 4] == '0') && (answerOne[search + 4] != '\0')){
               // cout << "vicotry!" << endl;
                answerOne[search + 4] = possibleLetterOppositesUppercase[search2]; 
                break;
            }
        }
        search++;
    }
    
    //cout << search << endl;
    cout << "" << endl;
    cout << "here is the added character:";
    cout << answerOne[search + 4] << endl;
    
    search = 0;
    while(search<=9){
         cout<<answerOne[search];
         search++;
    }
    cout << "" << endl;
    cout << "----------------------" << endl;
    cout << "Here are your re-organized decoded letters:" << endl;
    if(givenLetter[3] == 'J'){
    cout << answerOne[0];
    cout << answerOne[5];
    cout << answerOne[1];
    cout << " ";
    cout << answerOne[6];
    cout << answerOne[4];
    cout << " ";
    cout << answerOne[7];
    cout << answerOne[3];
    cout <<  "";
    cout << answerOne[9];
    cout <<  " ";
    cout << answerOne[8];
    cout << answerOne[2];
    cout << "" << endl;
    }
    if(givenLetter[3] == 'P'){
    cout << answerOne[0];
    cout << answerOne[6];
    cout << answerOne[1];
    cout <<  " ";
    cout << answerOne[5];
    cout << answerOne[4];
    cout <<  " ";
    cout << answerOne[8];
    cout << answerOne[9];
    cout << answerOne[3];
    cout <<  " ";
    cout << answerOne[7];
    cout << answerOne[2];
    cout << "" << endl;
    }
    cout << "----------------------" << endl;

}