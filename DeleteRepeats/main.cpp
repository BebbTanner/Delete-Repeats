/*This program should delete any repeats. test*/
#include <iostream> 
using namespace std;

void delete_repeats(char array[], int size, int& numberUsed);
void output(char array[], int& numberUsed);

int main()
{
    char array[81];
    int numberUsed;

    delete_repeats(array, 81, numberUsed);
    output(array, numberUsed);

    return 0;
}

void delete_repeats(char array[], int size, int& numberUsed)
{
    char letters;
    int index = 0;

    cout << "Enter a line: ";
    cin.get(letters);

    while (letters != '\n' && index < size) {
        array[index] = letters;
        cin.get(letters);
        index++;
    }

    numberUsed = index;
    cout << numberUsed << endl;

    for (int i = 0; i < index; i++)
        cout << array[i];

    cout << endl;

    for (int i = 0; i < index; i++)
        cout << array[i];

    cout << endl;

    for (int i = 0; i < numberUsed; i++) {
        for (int j = i + 1; j < numberUsed; j++) {
            if (array[i] == array[j]) {
                numberUsed = numberUsed - 1;
                for (int k = j; k < numberUsed; k++)
                    array[k] = array[k + 1];
                array[numberUsed] = '\0';
                --j;
            }
        }
    }
}

void output(char array[], int& numberUsed)
{
    for (int i = 0; i < numberUsed; i++)
        cout << array[i];

    cout << endl << numberUsed << endl;
}