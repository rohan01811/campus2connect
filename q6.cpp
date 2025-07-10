#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseFirstK(queue<int> &q, int k) {
    if (q.empty() || k > q.size() || k <= 0)
        return;

    stack<int> st;

    for (int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    int t = q.size() - k;
    for (int i = 0; i < t; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);

    int k = 4;
    reverseFirstK(q, k);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
