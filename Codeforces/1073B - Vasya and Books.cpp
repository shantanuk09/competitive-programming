// Codeforces 1073B - Vasya and Books
#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e5 + 5;

int main(){
    int n, a, b[SIZE], arr[SIZE], books;
    deque<int> d;

    memset(arr, 0, sizeof(arr));

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        d.push_back(a);
    }

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n; i++){
        books = 0;

        if(!arr[b[i]]){
            while(!d.empty() && d.front() != b[i]){
                books++;
                arr[d.front()] = 1;
                d.pop_front();
            }

            d.pop_front();
            books++;
            arr[b[i]] = 1;
        }

        printf("%d ", books);
    }

    return 0;
}
