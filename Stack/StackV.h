#include <vector>
using namespace std;
template<typename T>
class StackV{
    vector<T>arr;
    public:
        //To push an element
        void push(T data){
            arr.push_back(data);
        }
        //To pop an element
        void pop(){
            arr.pop_back();
        }
        //To see the top element
        T top(){
            return arr.back();
        }
};