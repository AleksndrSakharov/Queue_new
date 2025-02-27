#include "QueueTemplate.h"

int main(){
    QueueTemplate<int> queue(100);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    
    for(int i = 0; i < 4; i++){
        cout << queue.front() << "\n";
        queue.pop();
    }

    try { 
        queue.pop();
    }
    catch (const char* e) {
        cout << e << "\n";
    }

    return 0;
}