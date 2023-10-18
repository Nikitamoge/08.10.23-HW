#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Task 2 func
void elements(int*& arr, int& size, int add) {
    srand(time(0));

    int* new_arr = new int[size + add];

    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }

    for (int i = size; i < size + add; i++) {
        new_arr[i] = rand() % 100;
    }

    delete[] arr;

    arr = new_arr;
    size += add;
}


int main() {

    //Task 1
    srand(time(0));

    int n;
    cout << "Amount of elements: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Generated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;


    //Task 2
    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    elements(arr, size, 3);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    delete[] arr;


    //Task 3
    int M, N;

    cout << "Enter size of A array: ";
    cin >> M;
    cout << "Enter size of B array: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Enter the elements of A array: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Enter the elements of B array: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    cout << "General elements of the array: ";
    for (int i = 0; i < M; i++) {
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            for (int j = 0; j < N; j++) {
                if (A[i] == B[j]) {
                    cout << A[i] << ' ';
                    break;
                }
            }
        }
    }

    delete[] A;
    delete[] B;

    return 0;
}

