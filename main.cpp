#include <iostream>

using namespace std;

void MaxOccurDigit(int arr[], int arrSize){
        int tempOccur, digit, digit2;
        int maxOccur = 1;

        for(int i = 0; i < arrSize; i++){
            tempOccur = 1;
            for(int j = i + 1; j < arrSize; j++){
               if(arr[i] == arr[j]){
                  tempOccur++;
               }
            }
            if(tempOccur > maxOccur){
                digit = arr[i];
                digit2 = NULL;
                maxOccur = tempOccur;
            }
            else if(tempOccur == maxOccur && maxOccur > 1){
                digit2 = arr[i];
            }

        }
        if(maxOccur == 1){
           cout << "All item occur only 1 time." << endl;
        }
        else if(digit2 == NULL){
           cout << digit << " max occur: " << maxOccur << endl;
        }
        else{
            cout << digit << " and "<< digit2 << " max occur: " << maxOccur << endl;
        }


}

int main()
{
    int arrSize;
    cout << "Enter array size:";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter the array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    MaxOccurDigit(arr, arrSize);
    return 0;
}
