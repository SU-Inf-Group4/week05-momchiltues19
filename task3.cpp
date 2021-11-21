#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 64;

    int size = 0;
    double array[MAX_SIZE];
    double num = 0;

    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "Enter number: ";
    cin >> num;
    
    double minElement = array[0];
    double maxElement = array[0];
    
    for(int i = 1; i < size; i++)
    {
        if(array[i] > maxElement)
        {
            maxElement = array[i];
        }
        if(array[i] < minElement)
        {
            minElement = array[i];
        }
    }

    int indexCount = 0;
    int indexArray[MAX_SIZE] = {};
    
    for(int i = 0; i < size; i++)
    {
        if(array[i] == num)
        {
            indexArray[indexCount] = i;
            indexCount++;
            if(i % 2 == 0)
            {
                num = minElement;
            }
            else
            {
                num = maxElement;
            }
        }
    }

    if(minElement >= 0 && minElement < size && minElement == int(minElement))
    {
        for(int i = 0; i <= indexCount; i++)
        {
            array[int(minElement)] += indexArray[i];
        }
    }

    if(maxElement >= 0 && maxElement < size && maxElement == int(maxElement))
	{
		array[int(maxElement)] = num * indexArray[indexCount];
	}

    cout << "New array: ";
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "New number: ";
    cout << num;

    return 0;
}
