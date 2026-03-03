
// brute force



bool isPalindromeBrute(string s ){



string cleaned = "";

for(char c : s ){


    if(isalnum(c)) {
        cleaned += tolower(c);
    }
}

string reversed = cleaned;
reverse(reversed.begin(), reversed.end());

return cleaned == reversed;


}


// optimal using two pointers

bool isPalindromeOptimal(string s) {



int left =0;

int right = s.length() -1;


while(left < right){


while ( left < right && !isalum(s[left])) left++;

while ( left < right && !isalnum(s[right])) right--;

if(tolower(s[left]) != tolower(s[right])) {
    return false;

}

left++;
right--;


}
return true;

}