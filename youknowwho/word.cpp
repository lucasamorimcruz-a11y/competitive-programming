#include <bits/stdc++.h>

int main(){
    std::string word;
    std::getline(std::cin, word);
    int uc {0};
    int lc {0};
    for(int i = 0; i < word.size(); i++){
        if(isupper(word[i])){
            uc++;
        }
        else{
            lc++;
        }
    }
    std::string newWord;
    if(uc > lc){
        for(int i =0;i<word.size();i++){
            newWord.push_back(toupper(word[i]));
        }
    }
    else{
        for(int i= 0;i<word.size();i++){
            newWord.push_back(tolower(word[i]));
        }
    }
    std::cout << newWord << '\n';

}