#include <iostream>
#include "clsString.h" 

using namespace std;

int main()
{

    clsString myStr("hello world, this is a test");

    cout << "Original Value: " << myStr.Value << endl;

    cout << "\n=== Length ===\n";
    cout << "Length: " << myStr.Length() << endl;

    cout << "\n=== Count Words ===\n";
    cout << "Words Count: " << myStr.CountWords() << endl;

    cout << "\n=== Upper First Letter Of Each Word ===\n";
    myStr.UpperFirstLetterOfEachWord();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Lower First Letter Of Each Word ===\n";
    myStr.LowerFirstLetterOfEachWord();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Upper All String ===\n";
    myStr.UpperAllString();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Lower All String ===\n";
    myStr.LowerAllString();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Invert All Letters Case ===\n";
    myStr.InvertAllLettersCase();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Count Capital Letters ===\n";
    cout << "Capital Letters: " << myStr.CountCapitalLetters() << endl;

    cout << "\n=== Count Small Letters ===\n";
    cout << "Small Letters: " << myStr.CountSmallLetters() << endl;

    cout << "\n=== Count Vowels ===\n";
    cout << "Vowels: " << myStr.CountVowels() << endl;

    cout << "\n=== Count Specific Letter 'l' (case-sensitive) ===\n";
    cout << "Count of 'l': " << myStr.CountSpecificLetter('l') << endl;

    cout << "\n=== Count Specific Letter 'L' (case-insensitive) ===\n";
    cout << "Count of 'L' ignoring case: " << myStr.CountSpecificLetter('L', false) << endl;

    cout << "\n=== Split by space ===\n";
    // We also can count tokens.
    short CountTokens = 0;
    vector<string> words = myStr.Split(" ");
    for (string word : words)
    {
        CountTokens++;
        cout << "[" << word << "]" << endl;
    }
    cout << "Tokens: " << CountTokens << endl;

    cout << "\n=== Static Function Demo ===\n";
    cout << "Static CountWords(\"i love pizza\") = " << clsString::CountWords("i love pizza") << endl;
    cout << "Static UpperAllString(\"pizza\") = " << clsString::UpperAllString("pizza") << endl;

    cout << "\n=== IsVowel Demo ===\n";
    cout << "Is 'a' a vowel? " << (clsString::IsVowel('a') ? "Yes" : "No") << endl;
    cout << "Is 'z' a vowel? " << (clsString::IsVowel('z') ? "Yes" : "No") << endl;

    cout << "\n=== Reverse Words In String ===\n";
    myStr.Value = "hello world from mars";
    cout << "Before: " << myStr.Value << endl;
    myStr.ReverseWordsInString();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Replace Word ===\n";
    myStr.Value = "I love pizza and pizza loves me";
    cout << "Before: " << myStr.Value << endl;
    myStr.Value = myStr.ReplaceWord("pizza", "burger");
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Remove Punctuations ===\n";
    myStr.Value = "Hello, world! This is -- amazing.";
    cout << "Before: " << myStr.Value << endl;
    myStr.RemovePunctuations();
    cout << "After: " << myStr.GetValue() << endl;

    cout << "\n=== Trim Left ===\n";
    myStr.Value = "    lots of spaces at start";
    cout << "Before: [" << myStr.Value << "]" << endl;
    cout << "After: [" << myStr.TrimLeft() << "]" << endl;

    cout << "\n=== Trim Right ===\n";
    myStr.Value = "lots of spaces at end     ";
    cout << "Before: [" << myStr.Value << "]" << endl;
    cout << "After: [" << myStr.TrimRight() << "]" << endl;

    cout << "\n=== Trim Both ===\n";
    myStr.Value = "    messy both sides    ";
    cout << "Before: [" << myStr.Value << "]" << endl;
    cout << "After: [" << myStr.Trim() << "]" << endl;

    cout << "\n=== Static JoinString from Vector ===\n";
    vector<string> testVector = { "I", "love", "C++" };
    cout << "Joined: " << clsString::JoinString(testVector, "-") << endl;

    cout << "\n=== Static JoinString from Array ===\n";
    string testArray[3] = { "Hello", "Mars", "Friends" };
    cout << "Joined: " << clsString::JoinString(testArray, 3, "~") << endl;

    system("pause>0");

    return 0;
}
