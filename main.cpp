#include <iostream>

int minMovesToMakePalindrome(std::string s) {


    int result = 0;
    int start = 0;
    int end = s.size() - 1;

    while(end>start){
        if(s[start]!=s[end]){
            int i=end;
            while(i>start&&s[start]!=s[i]){
                i--;
            }
            if(i==start){
                std::swap(s[start],s[start+1]);
                result++;

            }
            else{
                while(i<end){
                    std::swap(s[i],s[i+1]);
                    result++;
                    i++;
                }
                start++;
                end--;
            }
        }
        else{
            start++;
            end--;
        }
    }
    return result;
}

int main() {
    std::string s = "";
    std::cout << "Enter your string"<<std::endl;
    std::cin >> s;
    std::cout << minMovesToMakePalindrome(s);
    return 0;
}
