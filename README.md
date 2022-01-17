# 실전코딩 2 실습

### sshid : pcc011
### name : 나용성
### id : 201720707

## Lecture 1

linux command

- mkdir : 디렉토리를 만드는 명령어  
- cd : 현재 디렉토리를 변경하는 명령어  
- ls : 현재 디렉토리의 파일 리스트를 보여주는 명령어  
    - ls 명령어의 옵션
    - -l : 파일의 정보를 상세히 보여줌
    - -a : 숨겨진 파일까지 보여줌  
- cc : 컴파일 명령어
- pwd : 현재 디렉토리의 경로를 출력하는 명령어
- mv : 파일의 이름을 바꾸는 명령어
- passwd : 사용자의 비밀번호를 바꾸는 명령어
- chmod : 파일의 permission을 변경하는 명령어
- ~ : 유저의 home 디렉토리 경로로 대치됨
- ~username : username의 유저의 home 디렉토리 경로로 대치됨
- .. : 현재 디렉토리의 상위 디렉토리
- . : 현재 디렉토리
- rm : 파일을 삭제하는 명령어
- whoami : 유저의 이름을 출력하는 명령어
- cat : 파일의 내용을 출력하는 명령어
- history : 지금까지 사용했던 명령어를 순서대로 출력하는 명령어

### vi editor command

####vi editor의 세가지 모드

- normal mode : 일반적인 상황에서 적용되는 모드. 파일의 내용을 탐색하거나 복사 붙여넣기 하는 등의 기본적인 조작이 가능한 모드
    - i(insert), a(append) : normal mode에서 insert mode로 넘어가는 키. i, a 모두 insert mode로 넘어가지만 i는 현재 커서의 위치 그대로 insert mode로 넘어가며 a는 다음 위치로 커서가 옮겨지는 차이점이 있다.
    - del, x : 현재 커서 위치의 문자를 하나씩 삭제하는 키
    - u(undo) : 마지막 명령을 실행하기 전 상태로 되돌리는 키
- insert mode : 키보드를 이용해 파일에 내용을 추할 수 있는 모드
    - esc : insert mode에서 normal mode로 되돌아가는 키
- command mode : normal mode에서 콜론을 입력하여 진입하는 모드로 저장, 종료 등의 특정 명령어를 실행하기 위한 모드
    - w : 현재까지 수정된 내용을 파일에 저장하는 명령어
    - q : vi editor를 종료하는 명령어

## Lecture 2

### Computer Hardware System
<div style="text-align : center;">
    <img src=/images/computer_hardware_system.png width="70%"/>
</div>

위의 그림과 같이 CPU는 Storage devices의 데이터를 직접 읽거나 실행하거나 쓸 수 없고 Input device에서 직접 입력받거나 Output device로 바로 출력할 수 없다. CPU는 Memory에만 접근할 수 있기 때문에 Storage devices의 파일을 사용하려면 Storage devices에서 파일을 Memory로 읽어온 다음 사용해야 한다. Input devices의 입력을 받거나 Output devices로 출력을 할 때도 입력받은 데이터가 Memory의 Input Buffer에 저장된 다음 사용할 수 있고 출력할 데이터를 Memory의 Output Buffer에 저장한 다음 출력할 수 있다. 

### Linux Software
<div style="text-align : center;">
    <img src=/images/linux_software.png width="70%"/>
</div>
software는 system software와 application software로 나뉘는데 system software는 hardware의 바로 윗 단계에 위치하며 위의 그림과 같이 여러 껍데기 형태의 구조를 갖고 사용자는 가장 윗단의 shell을 사용해 system software를 이용해 hardware를 제어할 수 있다. Linux역시 system software 중 하나이다.

### Linux Kernel
<div style="text-align : center;">
    <img src=/images/linux_kernel.png width="70%"/>
</div>
Linux kernel은 Computer Hardware System에서 볼 수 있었던 5가지 구성 요소를 관리하도록 설계되어 있다.

- Linux Kernel의 구성요소
    - I/O subsystem : Input, Output device를 관리하는 subsystem으로 character device, network device, block device를 관리한다.
        - character device : 문자 하나 단위로 I/O가 수행되는 I/O device
        - network device : network를 통해 I/O가 수행되는 I/O device
        - block device : 데이터 block 단위로 I/O가 수행되는 I/O device
    - Memory Management subsystem : Memory를 관리하는 subsystem
    - Process management subsystem : CPU에서 수행하는 process를 관리하는 subsystem

### linux command

- ps : 현재 실행중인 프로세스들의 정보를 출력하는 명령어  
- tty : 사용중인 terminal 파일의 경로를 출력하는 명령어  
    - linux는 모든 자원을 파일로 취급하며 관리하는데 character device인 terminal역시 파일로 관리되며 tty는 유저의 terminal에 해당하는 파일의 경로를 출력하는 것이다. 만약 그 파일에 write 권한이 있는 다른 유저가 terminal 파일에 write를 수행하면 그 terminal에 write한 내용이 출력되어 사용중인 유저가 볼 수 있다.
- wall : 모든 유저에게 write를 수행하는 명령어  
- write : 특정 유저의 terminal에 메시지를 write하는 명령어  
- Ctrl + d : EOF
- Ctrl + c : kill 신호를 보내 현재 실행중인 fore ground 프로세스를 강제로 종료시킴  
- Ctrl + z : suspend 신호를 보내 현재 실행중인 프로세스를 일지중지 시킴  
- cp : 파일을 복사하는 명령어
- fg : back ground에서 실행중인 명령어를 fore ground에서 실행하도록 하는 명령어
- cat : 파라미터에 따라 작동이 달라지는 명령어
    - 파라미터가 없을 때 : 터미널을 통해 한 줄씩 입력을 받고 입력된 내용을 다시 터미널에 출력함
    - 파일의 이름들이 파라미터로 주어졌을 때 : 입력된 파일 순서대로 내용을 연결하여 터미널에 출력함

### vi editor command

- set number : command mode에서 사용하는 명령어로 파일의 텍스트들의 행 번호를 표시해주는 명령어
- /(찾고자 하는 것) : 파일 내에서 (찾고자 하는 것)의 위치를 찾아주는 명령어
- o : normal mode에서 현재 커서가 위치한 줄 밑에 한 줄을 추가하고 커서의 위치를 추가된 줄로 이동시키고 insert mode로 진입하는 명령

### redirection



## Lecture 3

### linux command

- 환경변수 PATH

    - 어느 유저가 명령어를 실행할 때 linux는 해당 명령어를 PATH에 저장된 경로에서 찾아서 실행한다. PATH에는 여러 경로를 저장할 수 있고 각 경로는 ':'로 구분된다. 앞에 저장된 경로가 우선순위가 더 높다.

- which : 명령어의 위치를 출력하는 명령어
- grep : 입력에서 파라미터로 전달된 특정 문자열이 포함된 행을 출력하는 명령어
- clear : 터미널에 출력된 내용을 지울 때 사용하는 명령어
- tee : stdin으로의 입력을 stdout과 파일들에 출력하는 명령어

### markdown

- \# : 제목
- \## : 부제목
- \### : 부부제목
- 빈 줄을 통해 문단을 구분할 수 있음
- \* 또는 \- 등의 특수문자를 줄 앞에 입력하여 글머리 기호가 출력되게 할 수 있다.
- 1. 과 같이 숫자를 줄 앞에 입력하여 줄 번호가 출력되게 할 수 있다. 줄 번호는 자동으로 계산되어 출력되기 때문에 모두 1. 로 입력해도 상관없다.
- 글머리 기호와 줄 번호는 탭으로 구분하여 하위 문단으로 출력되도록 할 수 있다.

밑은 수업에서 사용한 markdown의 예시

- 교수님의 코드를 카피함
- Good Job
- Hi

주의  
word에서 사용하는 따옴표와 bash에서 명령어에 사용되는 따옴표는 다르게 인식됨.

1. 일번
1. 이번
1. 삼번

```
cp ~hwan/.profile  ~hwan/.bashrc  ~hwan/.bash_logout .
source .profile
```
이렇게 하니까 프롬프트가 초록색이 됨

### git

- .gitignore : git으로 관리되지 않을 파일들을 저장하는 파일
- git clone 주소 : 주소의 저장소를 로컬 저장소로 복사하는 명령어. origin을 유지함
- git pull : origin의 새 commit의 변경사항을 가져오는 명령어
- git add : 파일을 staged 상태로 변경하는 명령어
- git commit : 현재까지의 staged된 파일의 변경사항을 commit으로 기록하는 명령어. commit 메시지를 지정해야 함
- git push : origin 저장소에 로컬 저장소의 새 commit들을 반영하는 명령어.

## Lecture 4

### redirection

#### here document 

0<< end message or << end message : 임시 파일을 만들어 stdin으로 연결. 파일의 내용을 모두 입력한 뒤 명령을 실행할 때 입력한 end message를 입력하면 파일 입력을 끝내고 생성된 임시 파일을 stdin의 입력으로 redirection 함.

#### here string
<<< (string) : bash만 가능 입력된 string을 stdin으로 redirection함

#### pipe에서 실행의 순서
**cmd1 | cmd2** 로 실행할 때 cmd1의 출력이 output 버퍼에 저장된 뒤 cmd2의 input으로 사용되는데 두 명령이 실행되는 속도가 달라 버퍼에서 오버플로우가 발생하면 cmd1의 출력이 버려지는 결과가 발생할 수 있으므로 두 명령은 병렬적으로 동시에 실행됨

- mkfifo : named pipe를 생성하는 명령어
    - named pipe : 이름이 있는 pipe. 서로 다른 터미널에서 pipe로 사용할 수 있다는 차이점이 있음
    사용 예시

글로빙
*
?
[abc]
[a-c]
cat <<< $(echo -e "hello\nhere  string")

a.out <<< 300 &> out.txt
out.txt내용
Hello stderr 300
Hello stdout 300
버퍼에서 먼저 뭐가 나올지 모르므로 stderr이 먼저 나올 수 있음
순서를 조종하기 위해선 특정 버퍼가 먼저 flush되도록 프로그래밍 해야 함

cc -o 옵션
mkfifo 파이프 이름

서로 다른 터미널에서
같은 named pipe를 이용해
b.out > pipe
a.out < pipe
를 실행한 상태에서
b.out를 실행한 터미널에서 숫자를 입력하자
a.out에서 b.out에 입력한 숫자가 입력으로 들어옴

data type
PM 2:56

automatic
static
manual
const



#### 배운것


pipe |
pipe sync
here document
here string

vi command

yy 복사
p 붙여넣기
n명령어 명령어를 n번 반복

## Lecture 5

vi command

ch

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
    
### Lecture 07
