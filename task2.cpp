#include <iostream>

using namespace std;

char toLower(char);

int main ()
{
    int number = 0;
    bool areLexOrdered = true;

    cout << "Enter number of letters: ";
    cin >> number;

    const int MAX_SIZE = 64;
    char letters[MAX_SIZE];

    for(int i = 0; i < number; i++)
    {
        cin >> letters[i];
        letters[i] = toLower(letters[i]);
    }

    for(int i = 0; i < number - 1; i++)
    {
        if(letters[i] > letters[i + 1])
        {
            areLexOrdered = false;
            break;
        }
    }

    cout << boolalpha << areLexOrdered << endl;

    return 0;
}

char toLower(char letter)
{
    if (letter >= 'A' && letter <= 'Z')
        letter = letter - 'A' + 'a';
    return letter;
}
