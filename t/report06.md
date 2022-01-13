### Lecture 06

#### Pointer / Address

* &val - 변수 val의 주소
* \*ptr - 변수 ptr에 저장된 주소에 저장된 값

* 포인터 변수의 값은 어느 자료형의 포인터냐에 따라 증가될 때 각 자료형의 address line만큼 증가함
    * ex) int *a; // a++을 할 때 값이 4만큼 증가함
    * ex) long long *b; // b++을 할 때 값이 8만큼 증가함
    * ex) void *c; // c++을 할 때 값이 1만큼 증가함

* automatic 변수 : 변수가 선언된 범위 내에서만 생존하는 변수. 처음 사용될 때 초기화되어 선언된 범위를 벗어나면 사라짐.
* static 변수 : 프로그램이 실행되는 동안 생존하는 변수. 프로그램이 시작할 때 초기화 되며 선언된 범위를 벗어나도 사라지지 않음.

* array와 pointer의 차이
    * array
        * 기본적으로 pointer변수임
        * 그러나 array의 크기만큼 메모리에 공간을 자동으로 할당하고 pointer가 해당 array의 주소를 가리키게 됨
    * pointer
        * pointer 변수이긴 하나 메모리 할당을 따로 하진 않음
    
