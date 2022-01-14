# Stack

**LIFO**(Last In First Out) : 제일 마직막에 삽입된 원소가 가장 먼저 삭제

한 끝(top)에서 삽입과 삭제가 모두 일어남



함수 호출이 스택 구조로 이루어짐

호출 => push

리턴=>pop



#### C++ 

STL stack

```c++
#include <stack>

int main(){
    
    stack<int> s;
    
    s.push(element); // top에 원소추가
	s.pop(); // top에 있는 원소 삭제

	s.top(); // top에 있는 원소 반환

	s.empty(); // 비어있으면 true, 아니면 false 반환
	s.size(); // 스택 사이즈 반환
}

```


