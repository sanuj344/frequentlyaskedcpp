// string declaration and initialization

string s1; // empty string

string s2 = "Hello";       // initialized with a string literal

string s3("World");        // initialized using constructor

string s4(5,'a'); // initialized with 5 'a' characters "aaaaa"





// input and output


string s;
cin>> s; // reads a single word (up to whitespace)



string line;
cin.ignore();
getline(cin,line); // reads an entire line of input, including spaces



// basic operations

string s = "coding";

cout<<s.length()<<endl; // 6
cout<<s.size()<<endl; // 6
cout<<s[0]<<endl; // 'c'
cout<<s[5]<<endl; // 'g'

s.push_back('s'); // s becomes "codings" add character
s.pop_back(); // s becomes "coding"  removees last charxacter


cout<< s.substr(1,3)  // substring



// string traversal



string s ="abcde";

for (int i = 0; i < s.length(); i++) {
    cout<<s[i]<<" "; // a b c d e
}


//using range based loop 

for(char c : s) {
    cout << c<< " ";
}




// reverse string


string s = "hello";

reverse(s.begin(),s.end());
cout << s;



// sort string

  string s = "dcba";

    sort(s.begin(), s.end());
    cout << s << endl;


    