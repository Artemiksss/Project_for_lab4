#include <iostream>
#include <vector>
using namespace std;
typedef int Date_t;

void heap_sort(int *A, int num);

int main() {
    Date_t num;
    cin >> num;
    Date_t mas[num];
    for (Date_t i = 0; i < num; i++){
        cin >> mas[i];
    }
    heap_sort(mas, num);
    for (Date_t i = 0; i < num; i++){
        cout << mas[i] << " ";
    }
    cout << "\n";
    return 0;
}

void heap_sort(Date_t *A, Date_t num){
    for (size_t k = 1; k < num; k++){
        size_t i = k;
        size_t parent_index = (i - 1) / 2;
        while(i != 0 and A[i] > A[parent_index]){
            swap(A[i], A[parent_index]);
            i = parent_index;
            parent_index = (i - 1) / 2;
        }
    }
    for (size_t top = num - 1; top > 0; top--){
        swap(A[0], A[top]);
        size_t i = 0;
        size_t left = 2 * i + 1;
        size_t right = 2 * i + 2;
        while (((left < top) && (A[left] > A[i])) || ((right < top) && (A[right] > A[i]))) {
            if (right >= top || (A[left] >= A[right])){
                swap(A[left], A[i]);
                i = left;
            }else{
                swap(A[right], A[i]);
                i = right;
            }
            left = 2 * i + 1;
            right = 2 * i + 2;
        }
    }
}

// #include <iostream>

// using namespace std;

// void heap(int arr[], int len, int i) {
//     int larget = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(right < len && arr[right] > arr[larget]){
//         larget = right;
//     }

//     if(left < len && arr[left] > arr[larget]){
//         larget = left;
//     }

//     if(larget != i){
//         swap(arr[larget], arr[i]);
//         heap(arr, len, larget);
//     }

// }

// void buildHeap(int arr[], int len){
//     for(int i = len/2; i >=0; i--){
//         heap(arr, len, i);
//     }
// }

// void heapSort(int arr[], int len){
//     buildHeap(arr, len);

//     while(len > 0){
//         swap(arr[0], arr[len-1]);
//         len--;
//         heap(arr, len, 0);
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     heapSort(arr, n);

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
