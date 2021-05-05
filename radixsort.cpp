#include<bits/stdc++.h>
using namespace std;
int i=1;
bool comp(int a,int b)
{
    return (a/i)%10>(b/i)%10;

}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int max=INT_MIN;
    while(n--)
    {
        int x;
        cin>>x;
        max=max>x?max:x;
        v.push_back(x);
    }
int count=0;
while(max>0)
{
    count++;
    max=max/10;
}
while(count--){
    stable_sort(v.begin(),v.end(),comp);
    i=i*10;
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
}
}
// #include <bits/stdc++.h>
// using namespace std;
// int k = 1;
// bool comp(int a, int b)
// {
//     return (a / k) % 10 > (b / k) % 10;
// }

// vector<int> function1(vector<int> v)
// {

//     int max = INT_MIN;
//     int n = v.size();
//     max = *max_element(v.begin(), v.end());

//     int count = 0;
//     while (max > 0)
//     {
//         count++;
//         max = max / 10;
//     }

//     while (count--)
//     {
//         sort(v.begin(), v.end(), comp);
//         k = k * 10;
//         // cout << "test" << endl;
//         // for (auto x : v)
//         //     cout << x << " ";
//         // cout << endl;
//         // cout << "test ends" << endl;
//     }
//     return v;
// }

// int getMax(int arr[], int n)
// {
//     int mx = arr[0];
//     for (int i = 1; i < n; i++)
//         if (arr[i] > mx)
//             mx = arr[i];
//     return mx;
// }

// // A function to do counting sort of arr[] according to
// // the digit represented by exp.
// void countSort(int arr[], int n, int exp)
// {
//     int output[n]; // output array
//     int i, count[10] = {0};

//     // Store count of occurrences in count[]
//     for (i = 0; i < n; i++)
//         count[(arr[i] / exp) % 10]++;

//     // Change count[i] so that count[i] now contains actual
//     //  position of this digit in output[]
//     for (i = 1; i < 10; i++)
//         count[i] += count[i - 1];

//     // Build the output array
//     for (i = n - 1; i >= 0; i--)
//     {
//         output[count[(arr[i] / exp) % 10] - 1] = arr[i];
//         count[(arr[i] / exp) % 10]--;
//     }

//     // Copy the output array to arr[], so that arr[] now
//     // contains sorted numbers according to current digit
//     for (i = 0; i < n; i++)
//         arr[i] = output[i];
// }

// // The main function to that sorts arr[] of size n using
// // Radix Sort
// int *radixsort(int arr[], int n)
// {
//     // Find the maximum number to know number of digits
//     int m = getMax(arr, n);

//     // Do counting sort for every digit. Note that instead
//     // of passing digit number, exp is passed. exp is 10^i
//     // where i is current digit number
//     for (int exp = 1; m / exp > 0; exp *= 10)
//         countSort(arr, n, exp);
//     return arr;
// }

// int main()
// {
//     while (true)
//     { //infinite while loop
//         k = 1;
//         int n = rand() % 15 + 3; //randomly generating array size n
//         cout << n << "\n";
//         vector<int> a;
//         for (int i = 0; i < n; i++)
//         {
//             a.push_back(rand() % 1000); //randomly generating array of size n
//         }
//         for (int i = 0; i < n; ++i)
//         {
//             cout << a[i] << ' ';
//         }
//         cout << "\n";
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             arr[i] = a[i];
//         }

//         vector<int> answer1 = function1(a); //putting array in function 1
//         int *answer2 = radixsort(arr, n);   //putting array in function 2

//         bool flag = false;
//         for (int i = 0; i < n; i++)
//         {
//             if (answer1[i] != answer2[n - i - 1])
//             {
//                 flag = true;
//                 break;
//             }
//             else
//             {
//                 flag = false;
//             }
//         }
//         if (flag) //comparing results
//         {
//             cout << "Wrong Answer1 :"
//                  << " ";
//             for (int i = 0; i < n; i++)
//             {
//                 cout << answer1[i] << " ";
//             }
//             cout << endl;
//             cout << "Wrong Answer2 :"
//                  << " ";
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 cout << answer2[i] << " ";
//             }
//             cout << endl;
//             break;
//         }
//         else
//         {
//             cout << "OK\n";
//         }
//     }
// }