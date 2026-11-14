#include<iostream>
#include<fstream>  //
#include<string>

using namespace std ;
// fuction to open and read the content of a text file 
string checktext()
{
    ifstream file("text.txt");
        string fileData;

            getline(file, fileData);
                file.close();

            return fileData;
}
//fuction to calculate and printing the number of vowels in the txt file
int numOfVowels(string txt)
{ 
    int vowels = 0;
        for(int i =0;i <txt.length();i++)
        {
            char letter = tolower(txt[i]);
                if(letter == 'a'|| letter =='e' || letter =='i' || letter =='o' || letter =='u')
                {
                    vowels++;
                }
        }
        return vowels;
}
// fuction to count the num of word inthe txt file
int numofWords(string txt)
{
    int words = 0;
    bool insideword = false;

        for(int i = 0 ;i < txt.length();i++)
        {
            if(txt[i] != ' ' && !insideword)
            {
                words++;
                insideword = true;
            }
            else if(txt[i] == ' ')
            {
                insideword = false;
            }
        }
        return words;

}
//fuction to reverse the txt file word 
string Reverse(string txt)
{
    string reverced = "";
    for(int i = txt.length()-1;i>=0;i--)
    {
        reverced +=txt[i];
    }
    return reverced;
}

//function to capitalise the second letter and print the message with each second letter capitalised 
string capitalise(string txt)
{
    string capitalised =txt;
        for(int i =0 ;i < capitalised.length();i++)
        {
            if(capitalised[i]==' ')
            {
                continue;
            }
            if(i>0 && capitalised[i-1]!=' ')
            {
                if(i==1 || capitalised[i-2] ==' ')
                {
                    capitalised[i] = toupper(capitalised[i]);
                }

            
            }
        }
        
        cout<<capitalised<<endl;

}

int main()
{
    string txt ;
        cout<<"third change\n";
    txt = checktext();
        cout<<txt<<endl;
    int vowels = numOfVowels(txt);
        cout<<"Number of vowels "<<vowels<<endl;
    int words = numofWords(txt);
        cout<<"num of words "<<words<<endl;
    string reverse = Reverse(txt);
        cout<<reverse<<endl;
        capitalise(txt);
    
    return 0;
}