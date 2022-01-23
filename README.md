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

#### vi editor의 세가지 모드

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

- < 파일 or 0< 파일 : 명령을 실행할 때 stdin으로 입력받아야 할 때 터미널을 통해 입력받는 대신 파일의 내용을 입력으로 받음
- \> file or 1> file : 명령을 실행할 때 stdout으로 출력될 때 터미널로 출력되는 대신 file로 출력됨
- 2> file : stderr로의 출력을 터미널로 출력하는 대신 file로 출력됨

## Lecture 3

### linux command

- 환경변수 PATH

    - 어느 유저가 명령어를 실행할 때 linux는 해당 명령어를 PATH에 저장된 경로에서 찾아서 실행한다. PATH에는 여러 경로를 저장할 수 있고 각 경로는 ':'로 구분된다. 앞에 저장된 경로가 우선순위가 더 높다.

- which : 명령어의 위치를 출력하는 명령어
- grep : 입력에서 파라미터로 전달된 특정 문자열이 포함된 행을 출력하는 명령어
- clear : 터미널에 출력된 내용을 지울 때 사용하는 명령어
- tee : stdin으로의 입력을 stdout과 파일들에 출력하는 명령어
- date : 현재 날짜와 시간을 출력하는 명령어

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

```bash
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

- <<< $() : 괄호 안의 명령의 출력을 here string의 입력으로 사용함 
    - 예시 : cat <<< $(echo -e "hello\nhere  string")

a.out <<< 300 &> out.txt
out.txt내용
Hello stderr 300
Hello stdout 300
버퍼에서 먼저 뭐가 나올지 모르므로 stderr이 먼저 나올 수 있음
순서를 조종하기 위해선 특정 버퍼가 먼저 flush되도록 프로그래밍 해야 함

#### pipe에서 실행의 순서
**cmd1 | cmd2** 로 실행할 때 cmd1의 출력이 output 버퍼에 저장된 뒤 cmd2의 input으로 사용되는데 두 명령이 실행되는 속도가 달라 버퍼에서 오버플로우가 발생하면 cmd1의 출력이 버려지는 결과가 발생할 수 있으므로 두 명령은 병렬적으로 동시에 실행됨.
cmd1이 cmd2보다 빠르면 파이프로의 write가 잠시 멈춘다.
반대로 cmd2가 cmd1보다 빠르면 파이프에서의 read가 잠시 멈춘다.
cmd1이 먼저 종료되면 파이프가 닫히고 cmd2는 EOF를 읽고 종료된다.
cmd2가 먼저 종료되면 파이프가 닫히고 cmd1에 SIGPIPE신호를 주고 신호를 받은 cmd1도 종료되게 된다.

- mkfifo : named pipe를 생성하는 명령어
    - named pipe : 이름이 있는 pipe. 서로 다른 터미널에서 pipe로 사용할 수 있다는 차이점이 있음
    - ex) 서로 다른 터미널에서 같은 named pipe를 이용해
b.out > pipe
a.out < pipe
를 실행한 상태에서 b.out를 실행한 터미널에서 숫자를 입력하자 a.out에서 b.out에 입력한 숫자가 입력으로 들어옴

### globbing & wildcard
- globbing : wildcard문자를 사용한 glob패턴으로 여러 파일의 이름들을 지정하는 것
- wildcard : 명령어를 사용할 때 여러 파일의 이름을 지정하는데 사용되는 문자
    - * : 모든 가능한 문자열에 대치됨(빈 문자열 포함)
    - ? : 문자 하나와 대치됨
    - [abc] : 괄호 안의 문자 중 하나로 대치됨
    - [a-c] : 괄호 안에 지정된 문자의 범위에 해당하는 문자 중 하나로 대치됨

### linux command
- cc명령 -o 옵션 : 생성되는 실행 파일의 이름을 지정할 수 있는 옵션

### data type

- 자료형은 변수가 어떠한 성질을 갖는 자료인지 지정해주는 것으로 같은 자료형을 사용하더라도 어느 컴퓨터에서 사용하고 어떤 컴파일러를 사용하냐에 따라 구현되는 방식과 크기는 달라질 수 있다. 또한 현실에서의 데이터를 한정적인 크기의 bit를 이용해 구현한 것이기 때문에 현실에서의 데이터와의 성질에서 차이가 생긴다. 
    - /usr/include/limits.h에 자료형들의 최대 크기가 정의되어 있다.

- 정수형 변수의 음수 표현 방법
    - 부호 bit + 값
    - 1의 보수
    - 2의 보수
- 위에서 설명했듯이 어느 방법을 사용하는지는 컴퓨터, 컴파일러에 따라 달라진다.
- 정수형 변수에서 자료형 앞에 수식어가 없으면 기본적으로 singed 자료형으로 취급되며 unsigned 수식어를 붙여서 0 이상의 값만 다루는 것으로 명시할 수 있다.

#### signed, unsigned 차이점

binary.c
```c
#include <stdio.h>

int main()
{
        int in_a;
        fscanf(stdin, "%d", &in_a);
        fprintf(stdout, "%d : ", in_a);
        for (int i = 31; i >= 0; i--){
                fprintf(stdout, "%d", in_a >> i & 1);
                if (i % 4 == 0)
                        fprintf(stdout, " ");
        }
        fprintf(stdout, "\n");
        return 0;
}
```
int형 변수 하나에 %d로 정수를 하나 입력받아 저장된 bit 정보를 출력하는 코드

binary.c 실행 결과
```bash
$ bin <<< 3
3 : 0000 0000 0000 0000 0000 0000 0000 0011
$ bin <<< -3
-3 : 1111 1111 1111 1111 1111 1111 1111 1101
```
- 3을 입력하여 bit로 출력한 결과 3을 2진수로 변환한 11이 출력됐다.
- -3을 입력하여 bit로 출력한 결과 2진수 11을 2의 보수를 취한 bit값이 출력됐다.  

즉, 우리가 실습을 진행하는 환경에서는 c언어의 signed 정수형을 음수를 2의 보수를 취하는 방식으로 구현하고 있다.

- python에선?
```python
>>> bin(3)
'0b11'
>>> bin(-3)
'-0b11'
>>> bin(3&-3)
'0b1'
```
- bin : 입력한 정수의 2진수 값을 출력하는 python 명령어
- python에서 3의 2진수는 11이다.
- -3의 2진수는 -11이다.
    - 이는 마치 부호 bit + 값의 방식을 사용한 것처럼 보인다.
- 3 & -3의 2진수는 1이다.
    - 3 & -3이 1이 나오는 경우는 3에 2의 보수를 취한 방식에서만 가능하다.

즉, 실습 환경에선 python에서 역시 2의 보수를 취하는 방식을 사용한다.

실습을 진행하면서 binary.c에 숫자를 하나 더 입력받고 먼저 입력한 숫자에 오른쪽 shift연산을 두번 수행한 값의 bit 정보도 출력하도록 수정했다.

```bash
$ bin
-456 456
-456 : 1111 1111 1111 1111 1111 1110 0011 1000 
456 : 0000 0000 0000 0000 0000 0001 1100 1000 
-114 : 1111 1111 1111 1111 1111 1111 1000 1110

$ bin
456 -456
456 : 0000 0000 0000 0000 0000 0001 1100 1000 
-456 : 1111 1111 1111 1111 1111 1110 0011 1000 
114 : 0000 0000 0000 0000 0000 0000 0111 0010 
```

- -456을 오른쪽으로 두번 shift연산을 하자 맨 왼쪽 bit가 1이 추가되었다.
- 456을 오른쪽으로 두번 shift연산을 하자 맨 왼쪽 bit가 0이 추가되었다.

변수들의 자료형을 int형에서 unsigned int형으로 변경했다.
```bash
$ bin
-456 456
-456 : 1111 1111 1111 1111 1111 1110 0011 1000 
456 : 0000 0000 0000 0000 0000 0001 1100 1000 
1073741710 : 0011 1111 1111 1111 1111 1111 1000 1110

$ bin
456 -456
456 : 0000 0000 0000 0000 0000 0001 1100 1000 
-456 : 1111 1111 1111 1111 1111 1110 0011 1000 
114 : 0000 0000 0000 0000 0000 0000 0111 0010 
```
- -456에선 int형과 달리 shift연산을 했을 때 맨 왼쪽 bit가 0이 추가되었다.
- 456의 shift연산한 결과는 int형과 같았다.

#### 결론

같은 숫자를 입력했을 때 unsigned int, int형에 저장되는 bit정보는 같지만 shift연산을 수행했을 때 int형 변수는 맨 왼쪽의 sign bit의 값이 유지되면서 shift연산이 일어나지만 unsigned int에 저장된 값은 0이상의 정수값으로 취급되므로 오른쪽 shift연산이 발생할 때 맨 왼쪽 bit가 0이 된다.

### vi command

- yy :복사
- p : 붙여넣기
- n명령어 : 명령어를 n번 반복
    - ex) 5yy: 코드 5줄 복사
    - 5p : 복사된 코드를 5번 붙여넣기

## Lecture 5

### cc 명령에서 사용되는 컴파일러는 무엇일까?
```bash
which cc
/usr/bin/cc

ls -al /usr/bin/cc
lrwxrwxrwx 1 root root 20  8월 20  2018 /usr/bin/cc -> /etc/alternatives/cc

ls -al /etc/alternatives/cc
lrwxrwxrwx 1 root root 12  8월 20  2018 /etc/alternatives/cc -> /usr/bin/gcc

ls -al /usr/bin/gcc
lrwxrwxrwx 1 root root 5  5월 21  2019 /usr/bin/gcc -> gcc-7

which gcc-7
/usr/bin/gcc-7

ls -al /usr/bin/gcc-7
lrwxrwxrwx 1 root root 22 12월  4  2019 /usr/bin/gcc-7 -> x86_64-linux-gnu-gcc-7

which x86_64-linux-gnu-gcc-7
/usr/bin/x86_64-linux-gnu-gcc-7

ls -al /usr/bin/x86_64-linux-gnu-gcc-7
-rwxr-xr-x 1 root root 1047488 12월  4  2019 /usr/bin/x86_64-linux-gnu-gcc-7
```
cc명령을 사용했을 때 실제로 실행되는 파일은 /usr/bin/x86_64-linux-gnu-gcc-7

- x86_64-linux-gnu-gcc-7 는?
    - x86 : intel cpu에서 사용하는 아키텍처
    - _64 : 64bit cpu용
    - linux : linux운영체제용
    - gnu-gcc-7 : gnu gcc 7버전 컴파일러

개인적으로 그렇다면 혹시 다른 버전의 gcc가 linux안에 존재할 지가 궁금하여 찾아보았다.

```bash
ls -al /usr/bin | grep gcc | grep rwxr-x
-rwxr-xr-x  1 root   root         428  5월  7  2006 c89-gcc
-rwxr-xr-x  1 root   root         454  4월 11  2011 c99-gcc
-rwxr-xr-x  1 root   root      907648  4월 12  2018 gcc-5
-rwxr-xr-x  1 root   root       31264  4월 12  2018 gcc-ar-5
-rwxr-xr-x  1 root   root        2189 12월  7  2016 gccmakedep
-rwxr-xr-x  1 root   root       31264  4월 12  2018 gcc-nm-5
-rwxr-xr-x  1 root   root       31264  4월 12  2018 gcc-ranlib-5
-rwxr-xr-x  1 root   root     1047488 12월  4  2019 x86_64-linux-gnu-gcc-7
-rwxr-xr-x  1 root   root       31200 12월  4  2019 x86_64-linux-gnu-gcc-ar-7
-rwxr-xr-x  1 root   root       31200 12월  4  2019 x86_64-linux-gnu-gcc-nm-7
-rwxr-xr-x  1 root   root       31200 12월  4  2019 x86_64-linux-gnu-gcc-ranlib-7
```

위와 같이 /usr/bin 디렉토리에서 gcc가 포함된 실제 실행 파일만을 추출 했더니 gcc-5, c89-gcc, c99-gcc등 여러가지 gcc버전이 있는데 기본적인 cc명령은 최신 버전의 gcc-7에서 사용하는 컴퓨터의 아키텍쳐에 맞는 실행 파일에 링크 되게 설정하는 방식을 사용하는 것 같다.

### singed, unsigned 차이점 #2

####변경된 binary.c
```c
#include <stdio.h>

int main()
{
        unsigned int in_a;
        fscanf(stdin, "%u", &in_a);
        fprintf(stdout, "%u \t : ", in_a);
        for (int i = 31; i >= 0; i--){
                fprintf(stdout, "%d", in_a >> i & 1);
                if (i % 4 == 0)
                        fprintf(stdout, " ");
        }
        fprintf(stdout, "\n");
        return 0;
}
```
숫자 하나를 %u로 입력받아 unsigned int 변수에 저장한 뒤 %u로 출력하고 변수에 저장된 bit값을 2진수로 출력하는 코드

위의 코드에 -1을 입력한 결과
```bash
pcc011@git:~/pcc/lec05$ bin
-1
4294967295 	 : 1111 1111 1111 1111 1111 1111 1111 1111 
```
- unsigned int를 입력받는 %u에 음수인 -1을 입력했지만 변수에 저장된 bit는 1의 2의 보수를 취한 bit와 같다.
- %u로 출력한 결과 첫번째 bit가 sign bit로 인식되지 않고 2진수의 32번째 자리로 인식되어 2^32-1 값인 4294967295가 출력됨.

#### hello.c

```c
#include <stdio.h>

int main()
{
        signed int siA;
        unsigned int unA;
        signed int siSum;
        unsigned int unSum;

        signed short shortSum;
        unsigned short unshortSum;
        fscanf(stdin, "%d", &siA);
        fprintf(stdout, "Signed Integer :  %d\n", siA);
        unA = siA;
        fprintf(stdout, "Unsigned Integer :  %u\n", unA);
        fprintf(stdout, "Unsigned Integer %%d:  %d\n", unA);
        fprintf(stdout, "Signed Integer %%u:  %u\n", siA);

        siSum = siA + (signed int)unA;
        unSum = (unsigned int) siA + unA;
        fprintf(stdout, "siSum %%d %d\n", siSum);
        fprintf(stdout, "siSum %%u %u\n", siSum);
        fprintf(stdout, "unSum %%d %d\n", unSum);
        fprintf(stdout, "unSum %%u %u\n", unSum);

        shortSum = siA + unA;
        unshortSum = siA + unA;
        fprintf(stdout, "shortSum %%h %hd\n", shortSum);
        fprintf(stdout, "shortSum %%uh %hu\n", shortSum);
        fprintf(stdout, "unshortSum %%h %hd\n", unshortSum);
        fprintf(stdout, "unshortSum %%uh %hu\n", unshortSum);

        shortSum = siA + unA;
        unshortSum = siA + unA;
        fprintf(stdout, "shortSum %%h %hd\n", shortSum);
        fprintf(stdout, "shortSum %%uh %hu\n", shortSum);
        fprintf(stdout, "unshortSum %%h %hd\n", unshortSum);
        fprintf(stdout, "unshortSum %%uh %hu\n", unshortSum);
        return 0;
}
```

%d로 int형 변수 siA에 입력을 저장한 뒤 같은 값을 unsigned int형 변수 unA에 저장하고 두 변수의 값의 합을 int, unsigned int, short, unsigned short형 변수에 저장한 뒤 각각의 변수를 변수의 길이에 맞는 signed, unsigned형 출력 서식(%d, %u, %hd, %hu)을 이용해 출력하는 코드

실행결과
```bash
$ a.out
-1
Signed Integer :  -1
Unsigned Integer :  4294967295
Unsigned Integer %d:  -1
Signed Integer %u:  4294967295
siSum %d -2
siSum %u 4294967294
unSum %d -2
unSum %u 4294967294
siSum %h -2
siSum %uh 65534
unSum %h -2
unSum %uh 65534
```

- int형 변수에 -1을 입력받아 %d로 출력하자 -1이 출력됐다.
- int형 변수를 %u로 출력했더니 4294967295이 출력됐다.
- unsigned int 변수에 int 변수의 값을 대입한 뒤 출력한 결과가 int 변수의 출력 결과와 같았다.
- int, unsigned int 변수의 합의 출력 역시 int 변수에 저장해서 출력한 것과 unsigned int 변수에 저장해서 출력한 것 모두 %d로 출력할 때 -2가 출력됐다.
- int, unsigned int 변수의 합의 출력 역시 int 변수에 저장해서 출력한 것과 unsigned int 변수에 저장해서 출력한 것 모두 %u로 출력할 때 4294967294가 출력됐다.
- 두 변수의 합을 short, unsigned short형 변수에 저장해서 출력했을 때 %h로 출력한 결과는 -2였다.
- 두 변수의 합을 short, unsigned short형 변수에 저장해서 출력했을 때 %uh로 출력한 결과는 65534였다.

#### 해석

- signed 변수이든 unsigned 변수이든 저장되는 데이터는 같다.
- 어느 자료형의 변수임에 관계없이 signed 정수의 출력서식(%d, %h)을 이용해 출력하면 변수의 데이터가 signed 정수로 변환되어 unsigned 정수의 출력서식(%u, %uh)을 이용해 출력하면 변수의 데이터가 unsigned 정수로 변환되어 출력된다.
- int와 unsigned int 변수의 합을 수행했을 때 변수가 signed인지 unsigned인지 관계없이 변수에 저장된 데이터 간의 더하기 bit연산이 수행된 결과가 반환된다.
    - 1111 1111 1111 1111 1111 1111 1111 1111 데이터 두 개의 합 비트연산을 한 결과는 1111 1111 1111 1111 1111 1111 1111 1110 인데 이 데이터를 signed 정수로 해석하면 -2, unsigned 정수로 해석하면 4294967294인데 두 변수의 합을 저장한 변수를 %d, %u로 출력했을 때의 결과가 앞에서 설명한 각각의 수와 같다.
- 자료형의 크기가 다른 변수에 값을 저장할 때 자동으로 type casting이 일어난다.
    - 때문에 두 변수의 합을 short형 변수에 저장해 %h로 출력했을 때 int형 변수에 저장해 %d로 출력했을 때와 같은 -2가 출력됐다.
    - 또한 int형 변수에서 합을 %u로 출력했을 때 2^32-2가 출력된 것 처럼 short형 변수에서 합을 %uh로 출력한 결과가 2^16-2가 출력됐다.

#### 컴파일러 경고 출력 옵션
cc -W 옵션 : 컴파일에서 발생하는 모든 warning을 출력하는 옵션

### three basic memory in C

* automatic : 변수가 선언된 범위 내에서만 생존하는 변수. 처음 사용될 때 초기화되어 선언된 범위를 벗어나면 사라짐.
* static : 프로그램이 실행되는 동안 생존하는 변수. 프로그램이 시작할 때 초기화 되며 선언된 범위를 벗어나도 사라지지 않음.
* manual : malloc과 free가 포함된 변수? array의 크기가 선언된 이후 변할 수 있는 유일한 변수라고 함.

### define
```c
#define macro_name value
```
코드에서 반복적으로 사용되는 값을 define을 이용해 매크로로 정의하면 macro_name 을 코드에서 사용했을 때 preprocessor를 처리할 때 컴파일러가 변환시 지정된 값으로 변환된다.

- cc -E 옵션 : 소스코드의 전처리 결과를 출력하는 옵션

count1.c의 코드

```c
#include <stdio.h>
#define VALUE_ONE 1

// Count number of 1 (binary)
int count_one(unsigned int a)
{
        int static numCalls = 0;
        int count = 0;
        while (a)
        {
                count += a & VALUE_ONE;
                a >>= VALUE_ONE;
        }
        numCalls++;
        fprintf(stderr, "Call : %d\n", numCalls);
        return count;
}


int main()
{
        int i;
        int in_a;
        fscanf(stdin, "%u", &in_a);
        fprintf(stdout, "%u \t : ", in_a);
        for (i = 31; i >= 0; i--)
        {
                fprintf(stdout, "%d", in_a >> i & 1);
                if (i % 4 == 0)
                        fprintf(stdout, " ");
        }
        count_one(in_a);
        count_one(in_a);
        count_one(in_a);
        count_one(in_a);
        fprintf(stdout, "\n");
        fprintf(stdout, "count : %d\n", count_one(in_a));
        return 0;
}
```

```bash
$ cc -E count1.c 
.
.
.
# 5 "count1.c"
int count_one(unsigned int a)
{
 int static numCalls = 0;
 int count = 0;
 while (a)
 {
  count += a & 1;
  a >>= 1;
 }
 numCalls++;
 fprintf(
# 15 "count1.c" 3 4
        stderr
# 15 "count1.c"
              , "Call : %d\n", numCalls);
 return count;
}
.
.
.
```
count1.c 파일에서 #define으로 정의된 VALUE_ONE을 11, 12번째 줄에서 사용했는데 cc -E 옵션으로 count1.c의 전처리 결과를 확인해본 결과 소스코드에서 11, 12번째 줄에서 VALUE_ONE이 사용된 부분에 VALUE_ONE이 사라지고 VALUE_ONE의 값으로 정의된 1이 들어간 모습이다.

### const
```c
int const con = 100;
```
- 값을 변경할 수 없는 상수처럼 사용되는 변수.
- 선언할 때 값이 초기화 되어야 함.

## Lecture 06

### linux command
- alias : 자주 사용하는 명령어의 단축 명령어를 만드는 명령어
- !$ : 가장 마지막에 사용한 파라미터가 반환됨
- kill : 프로세스를 종료시킬 때 사용하는 명령어

### Pointer / Address

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
    
## Lecture 07

### int const * vs int * const
#### fnpointer.c #1

```c
#include <stdio.h>

void add(int *a, int *b, int *c)
{
        *c = *a + *b;
}

int main()
{
        int const a = 100;
        int b = 200;
        int c = 9999;
        int *p = &a;
        fprintf(stdout, "a, b, c : %d %d %d\n", a, b, c);
        *p = 200;
        fprintf(stdout, "a, b, c : %d %d %d\n", a, b, c);        
}
```
이 프로그램을 실행하면 int const 변수에 저장된 값을 int 포인터로 주소르 이용해 접근해 변경하고자 시도한다.

실행결과
```bash
$ a.out
a, b, c : 100 200 9999
a, b, c : 200 200 9999
```
a가 int const 변수임에도 int 포인터 변수로 접근했더니 값이 변경됐다.

- 그러면 const로 선언하는 의미는?
    - 컴파일 단계에서 warning이 떠서 const 변수에 포인터로 접근하는 코드가 있음을 알 수 있음

```c
int const *p = &a;
*p = 200;
```
위와 같이 포인터 변수를 선언하면 int const형 변수에 대한 포인터 이기 때문에 두번째 줄이 불가능 하여 컴파일 단계에서 에러가 나게 된다.

#### 결론

- int const * p : int const형 변수를 가리키는 pointer 변수 p
    - p에 저장된 주소값은 바꿀 수 있다.
    - p에 저장된 주소의 위치에 저장된 값은 바꿀 수 없다.
- int * const p : int형 변수를 가리키는 pointer const 변수 p
    - p에 저장된 주소의 위치에 저장된 값은 바꿀 수 있다.
    - p에 저장된 주소값은 바꿀 수 없다.

### function pointer

#### fnpointer.c #2
```c
#include <stdio.h>

void add(int *a, int *b, int *c)
{
        *c = *a + *b;
}
void sub(int *a, int *b, int *c)
{
        *c =  *a - *b;
}
void mul(int *a, int *b, int *c)
{
        *c =  *a * *b;
}
void div(int *a, int *b, int *c)
{
        *c =  *a / *b;
}

int main()
{
        int a = 100;
        int b = 200;
        int c = 9999;
        char ch;
        int op = 0;
        fscanf(stdin, "%d %c %d", &a, &ch, &b);

        void (*fp[4])(int *, int *, int *) = {add, sub, mul, div};
        //int const * p = &a;
        //int * const q = &a;
        switch(ch){
                case '+':
                        op = 0;
                        break;
                case '-':
                        op = 1;
                        break;
                case '*':
                        op = 2;
                        break;
                case '/':
                        op = 3;
                        break;
                default:
                        break;
        }
        fprintf(stdout, "a, b, c : %d %d %d\n", a, b, c);
        fp[op](&a, &b, &c);
        fprintf(stdout, "a, b, c : %d %d %d\n", a, b, c);
        fprintf(stdout, "fp %lld %lld %lld %lld\n", add, sub, mul, div);
}
```

함수 포인터의 선언
```c
void (*fp)();
```
함수 포인터 fp : return값이 없는 void 함수의 주소를 저장하는 함수 포인터  
fp의 파라미터는 컴파일에 직접적인 영향을 미치진 않지만 형식에 맞는 함수만 사용하도록 안전장치의 역할을 하여 컴파일 단계에 warning이 뜨도록 할 수 있다.
```c
void (*fp)(int *, int *, int *); /* add, sub, mul, div 함수는
                                    int의 주소값 세개를 파라미터로 받으므로 
                                    이렇게 선언하여 안전장치를 달 수 있다 */ 
```
함수 포인터 fp에 mul함수의 주소를 저장
```c
fp = mul; //변수의 주소와 달리 함수는 앞에 &를 붙일 필요가 없다.
```
> 주의 : 이 때 fp = mul();로 작성하면 mul함수를 실행하는 형태가 되니 이렇게 작성하면 안된다.

mul함수의 주소가 저장된 함수 포인터 fp로 mul함수 실행하기
```c
fp(&a, &b, &c);  /* 정상적인 실행 방법 */
*fp(&a, &b, &c); /* 함수 포인터에선 포인터로 주소에 접근한다고 
                    해서 앞에 *를 붙일 필요가 없다. */
```

함수 포인터의 배열 fp 선언
```c
void (*fp[4])(int *, int *, int *) = {add, sub, mul, div};
```
함수 포인터 배열 fp에 저장된 함수의 주소를 이용한 함수 호출
```c
fp[0](&a, &b, &c); // add(&a, &b, &c); 와 동일
fp[1](&a, &b, &c); // sub(&a, &b, &c); 와 동일
fp[2](&a, &b, &c); // mul(&a, &b, &c); 와 동일
fp[3](&a, &b, &c); // div(&a, &b, &c); 와 동일
```
즉 fnpointer.c #2는 두 정수와 사칙연산 부호 하나를 입력받아 switch case문을 이용해 입력받은 부호에 따라 함수 포인터 배열 fp에서 실행할 함수의 index를 op에 저장해 함수 포인터 배열 fp를 이용해 add, sub, mul, div 중 하나의 함수를 실행해 c에 사칙연산을 수행한 값을 저장하고 결과를 출력하는 코드이다.

fnpointer.c 실행결과
```bash
$ a.out
100 + 200
a, b, c : 100 200 9999
a, b, c : 100 200 300
fp 94277047683002 94277047683041 94277047683080 94277047683120

$ a.out
50 - 34
a, b, c : 50 34 9999
a, b, c : 50 34 16
fp 94068517676986 94068517677025 94068517677064 94068517677104

$ a.out
12 * 9
a, b, c : 12 9 9999
a, b, c : 12 9 108
fp 94536957278138 94536957278177 94536957278216 94536957278256

$ a.out
200 / 25
a, b, c : 200 25 9999
a, b, c : 200 25 8
fp 94596585293754 94596585293793 94596585293832 94596585293872
```

### C Compile and Execution

<div style="text-align : center;">
    <img src=/images/c_compile_and_execution.png width="70%"/>
</div>

1. compile 명령
    - preprocessor directive : #이 붙은것들(#define, #include 등)를 처리
1. compile user source code : preprocessor가 끝난 source code로 assembly code를 만듬
    - assembly : machine language에 가장 가까운 언어
1. link assembler : printf, scanf등 외부 코드를 link시켜서 executable code를 생성
    1. static link : 실행 파일을 생성할 때 미리 다 link시킴
    1. dynamic link : 실행 도중에 필요할 때 link시킴
1. loader : memory로 executable code를 load시킴

- compile 프로그램
    - interpreter : 한번에 한 줄씩 기계어로 변환
        - python은 interpreter를 사용하는 언어
    - compiler : compile 단계에서 코드 전체를 기계어로 변환
        - c언어는 compiler를 사용하는 언어

#### gcc option
- -g : debugging을 위한 옵션. 디버깅을 위한 체크코드가 포함되어 실행속도가 느려지기 때문에 debugging하지 않을 땐 사용하지 않음.
- -c : .o파일(assembly code)를 생성하는 옵션
- -E : preprocessing만 수행하는 옵션
- -O : optimization 옵션
- -m32 : 32비트 프로그램으로 컴파일 하는 옵션
    - 64비트 컴퓨터에서도 --32 옵션으로 컴파일 한 실행파일을 지원함
- -m64 : 64비트 프로그램으로 컴파일 하는 옵션
    - 32비트 컴퓨터에서는 --64 옵션으로 컴파일 한 실행파일을 지원 못함

### gcc compile - for multiple file

<div style="text-align : center;">
    <img src=/images/gcc_compile-for_muliple_file.png width="100%"/>
</div>

gcc main.c func.c
1. main.c func.c의 preprocessing이 일어남
    1. main.c의 #include <stdio.h>, #include "func.h"가 처리됨
    1. func.c의 #include "func.h"가 처리됨
1. preprocessing된 main.c, func.c를 compile하여 assembly code main.o, func.o가 생성됨
1. linking : main.o에서 사용하는 printf, func1에 대한 linking을 처리하여 실행파일 a.out이 생성됨
    1. printf : 실행할 때 dynamic linking 됨
    1. func1 : func.o에서 static linking 됨


- cc -c main.c : assembly code파일 main.o 파일 생성  
- cc -c func.c : assembly code파일 func.o 파일 생성  
- cc main.o func.o : linking이 수행되어 executable code a.out파일 생성  

만약 func.o가 생성된 상태에서 main.c의 코드만 수정됐을 땐
```bash
cc main.c func.o
```
로 실행하는 것이 좋다.
> func.c에 포함된 코드가 길어서 컴파일이 오래 걸리는 코드라면 코드가 변한것이 없는데  
cc main.c func.c  
로 실행하게 되면 같은 func.o를 생성하기 위한 시간이 다시 소모되기 때문  
그러므로 func.o파일을 생성해 두었다면 이를 다시 사용하는 것이 좋다.

### C Preprocessor (CPP)

preprocessing과정에선

- include header files
- define macro
- conditional compilation
- line control

이 처리된다고 한다.

## Lecture 08

\c언어에서 include file을 할 때 "" <>의 차이
\#if, #ifdef, #ifndef, #elif, #else, #endif

### macro definition

```c
#define <identifier> <replacement token list>  //macro 정의
#undef <identifier> //macro 정의 해제
```
macro는 preprocessing 단계에서 text로 replace됨
> ⚠️주의 : 괼호를 잘 쳐야 함  
> #define sqr(a) a * a // X. sqr(1+5) -> 1+5 * 1+5가 됨  
> #define sqr(a) (a) * (a) // O. sqr(1+5) -> (1+5) * (1+5)가 됨 

### Order Expansion of Function Macro

1. Stringification(#) operations
1. Parameters
1. Concatenation operations
1. Tokens expand

expansion order를 확인 해볼 수 있는예시
```c
#define HE HI
#define LLO _THERE
#define HELLO "HI THERE"
#define CAT(a,b) a##b
#define XCAT(a,b) CAT(a,b)
#define CALL(fn) fn(HE,LLO)
CAT(HE,LLO) // "HI THERE", because concatenation occurs before normal expansion
XCAT(HE,LLO) // HI_THERE, because the tokens originating from parameters ("HE" and "LLO") are expanded first
CALL(CAT) // "HI THERE", because parameters are expanded first
```

### Special Macro

- \_\_FILE__ : string 형태의 파일 이름으로 변환됨
- \_\_LINE__ : int 형태의 현재 line 번호로 변환됨

사용 예시
```c
//test.c

#include <stdio.h>

int main()
{
        printf("file : %s, line : %d\n", __FILE__, __LINE__);
}
````
```bash
$ cc test.c
$ a.out
file : test.c, line : 5
```
#### Token stringication \#

```c
#define str(s) #s // 이 매크로를 선언하면
str(p = "foo\n";) // outputs "p = \"foo\\n\";"
str(\n)           // outputs "\n
//위와 같이 자동으로 파라미터에 입력된 문자열을 그대로 출력할 수 있는 형태로 변환해줌

#define xstr(s) str(s) //expansion order를 이용한 응용
#define foo 4
str (foo)  // outputs "foo"
xstr (foo) // outputs "4"
```

### Token Concatenation

```c
#define DECLARE_STRUCT_TYPE(name) typedef struct name##_s name##_t

DECLARE_STRUCT_TYPE(g_object);
    // Outputs: typedef struct g_object_s g_object_t;
```
- Token Concatenation을 사용하지 않은 것과 차이점?
    - Token을 연속으로 사용할 때 Concatenation을 사용하면 붙여서 쓸 수 있다.
```c
#define sq(a) aaa
sq(b) //output : aaa
#define sq(a) a a a
sq(b) //output : b b b
#define sq(a) a##a##a
sq(b) //output : bbb
```

### gcc optimization
#### 최적화에 대한 기본적인 이해
예시 코드  
```c
int fn(int a)
{
    int b;
    return a * a;
}

int main()
{
    int a = 100;
    b = fn(a);
}
```

- 함수가 호출되면 함수의 메모리 stack이 생성됨
    - int a를 받기 위한 메모리
    - int b의 메모리
    - return될 값을 저장할 메모리

- 위의 code의 fn함수에서 b는 사용되지 않은 파라미터임
    - 그러므로 optimize될 때 int b; 는 지워진다.

그렇다면
```c
b = fn(a); //함수 호출하기
b = a * a; //직접 계산하기
```
두 코드의 차이점은?

- 성능?
    - 직접 계산 > 함수 호출
- 코드 길이?
    - 함수 호출 > 직접 계산
    - 10줄 짜리 코드를 함수로 사용하면 함수를 사용할 때 코드 한줄만 차지한다.
    - 해당 계산이 필요할 때 코드를 직접 작성하면 사용할 때 마다 10줄 씩 작성해야 한다.

\#define으로 macro를 정의해 사용하면?
- 함수를 사용하듯이 코드의 길이를 줄이면서 성능도 직접 코드를 작성하는것과 같은 성능을 얻을 수 있다.
- c++ 에서는 함수를 정의할 때 inline 키워드를 사용하면 함수를 사용하는 부분에서 함수가 코드로 삽입되어 성능 면에서 좋다.
> ⚠️ 주의 : #define을 사용할 땐 괄호 등을 적절히 주의하여 잘 사용하여 컴파일 해야 함

### linux tip
명령어를 잘못 입력했을 때
- ^(수정 할 부분)^(대신 삽입 될 부분)
예시
```bash
$ cay test.c
$ ^y^t
cat test.c
int fn(int a)
{
    int b;
    return a * a;
}

int main()
{
    int a = 100;
    b = fn(a);
}
```
- gcc options
    - -E : preprocessing이 완료된 cpp 파일 생성 옵션
    - -S : compile이 완료된 assembly code 파일 생성 옵션
    - -c : assemble이 완료된 object 파일 생성 옵션
    - -o : linking까지 완료된 excutable 파일을 원하는 경로와 이름으로 생성하는 옵션

### CPP processing

- Character set
    - utf-8 (유니코드)

- Initial processing
    1. LF, CR, LF 문자(줄바꿈 코드들)를 CR로 바꿈
    1. if -trigraphs
    1. long line with "\\" -> merge
    ```c
    a = "abc
    de"; //error
    a = "abc\
    de"; // output : a = "abcde";
    ```
    1. 모든 comment를 "" 로 변환하여 지움

- Tokenization with space
    ```c
    #define foo() bar  
    foo()bar -> bar bar // barbar가 아님
    // barbar가 되려면 concatenate 사용
    ```
- processing language
    - inclusion of header / Macro Expansion / Conditional Compile / Line Control Diagnostics

### Macro Definition tips

- #define을 여러줄에 걸쳐 쓰기
    - 위에서 설명한 back slash("\\")사용
- 정의해야 하는 위치?
    - 어디에든 가능
    - 마지막으로 정의한 macro가 작동함
- 함수 형태의 macro
    - if문을 사용하는 함수가 필요한 부분에서 ? 조건문을 사용한 macro를 사용하면 성능이 매우 좋아짐
    - 괄호에 주의
    - omit parameter
        ```c
        #define min(X, Y) ((X) < (Y) ? (X) : (Y))
        min(, b) // output : (( ) < (b) ? ( ) : (b))
        ```
        - macro를 사용할 때 파라미터가 없어도 잘 작동함
        > ⚠️주의 : 그러나 파라미터의 개수는 잘 맞춰야 함
- 위에서 설명한 stringization, concatenation을 잘 사용하면 좋음
- variadic
    - 파라미터의 갯수에 따라 다르게 작동할 수 있도록 macro를 작성 가능
    - printf가 이를 활용한 코드의 예시
    ```c
    #define eprintf(...) fprintf (stderr, __VA_ARGS__)
    eprintf ("%s:%d: ", input_file, lineno)  // output : fprintf (stderr, "%s:%d: ", input_file, lineno)
    #define eprintf(format, ...) fprintf (stderr, format __VA_OPT__(,) __VA_ARGS__)
    ```
- Misnesting
    ```c
    #define twice(x) (2*(x))
    #define call_with_1(x) x(1)
    call_with_1 (twice)  // - >twice(1) -> (2*(1))
    #define strange(file) fprintf (file, "%s %d",
    strange(stderr) p, 35); //  fprintf (stderr, "%s %d", p, 35);
    ```
    - 어려운 기법임

- predefined macros
    - All Standards
        - \_\_FILE__ - Filename with full path string
        - \_\_LINE__ - Decimal number of current line
    - C99
        - \_\_DATE__ - run date string
        - \_\_TIME__ - run time string
        - \_\_STDC__ - 1 or 0 if standards // 0 is with -traditional-cpp
        - \_\_STD_VERSION__ , \_\_STDC_HOSTED__, \_\_cplusplus \_\_OBJC__, \_\_ASSEMBLER__
    - GNU C Extension
        - \_\_COUNTER (generate uniq id), \_\_GFORTRAN, \_\_GNUC__, __GNU_MINOR, \_\_FILE_NAME\__,  

## Lecture09

### 프로젝트

- 임베디드 시스템을 위한 고정소수점 수학 라이브러리 개발

#### 개발 의의
- floating point연산은 int 연산에 비해 비용이 많이 요구되는 연산임
- 또한 IoT등에 사용되는 저렴한 cpu에는 floting point 연산을 한 사이클 내에 시켜줄 수 있는 math unit이 없는 경우도 많음
- 그렇기에 int 연산을 이용하여 고정 소수점 연산을 개발하면 임베디드 시스템 등에서의 실수 연산에서 유용하게 사용될 수 있음

#### 개발 목표

- cpu 마다 한번에 처리하는 데이터의 크기가 다름
    - 8bit cpu, 16bit cpu, 32bit cpu, 64bit cpu 등
- 그러므로 각각의 학생한테 서로 다른 정수부, 소수부의 길이의 조합이 과제로 주어질 것
    - ex) #define FX_S_15_16 11516 // sign형 정수부 15, 소수부 16 길이를 갖는 고정소수점 자료형을 구현해야 함

#### 개발 실습

정수부 15, 소수부 16길이 signed 고정 소수점 개발을 같이 실습하며 연습해 보았다.

##### 부동 소수점, 고정 소수점 간의 변환
- 부동 소수점 -> 고정 소수점
```c
typedef int fixed32;

#define FX_2_PLUS_16 (1<<16)

fixed32 fromFloat(float fa)
{
        return (fixed32)(fa * FX_2_PLUS_16);
}
// fromFloat(0.99) return 64880
```

- 고정 소수점 -> 부동 소수점
```c
#define FX_2_MINUS_16 1.52587890625e-05F

float toFloat(fixed32 xa)
{
        return (float)(xa) * FX_2_MINUS_16;
}
// toFloat(64880) return 0.98990
```

- floating point로 0.99를 입력받아 fixed point로 변환하여 %d로 출력했을 때 64880이 출력됨
- fixed point로 64880을 입력받아 floating point로 변환하여 %f로 출력했을 때 0.98990이 출력됨

 0.0001 의 오차가 발생했다. 이는 기존의 수에서 0.01% 정도의 비율로 fixed point를 이용하여 얻는 이득에 비해 매우 적은 오차이다. 

##### 고정 소수점의 합

1. 부동 소수점으로 변환하여 합한 후 고정 소수점으로 변환
    ```c
    fixed32 fxAdd(fixed32 a, fixed32 b)
    {
            return fromFloat((toFloat(a) + toFloat(b)));
    }
    ```
1. 부동 소수점끼리 바로 합산
    ```c
    fixed32 fxAdd2(fixed32 a, fixed32 b)
    {
        return a + b;  
    }
    ```

- fixed point가 표현할 수 있는 모든 범위의 값을 for문을 이용해 어느정도 건너 뛰면서 합을 한 결과
    - 기본적으로 1번, 2번 방법의 계산 결과에 차이가 없음
    - 2번 연산을 통해 overflow가 발생하면 계산 결과에 차이가 생길 수 있음
        - 그러나 이는 데이터의 길이의 문제 이므로 계산 방법이 잘못된 것이 아님
- 연산량에 있어서 뛰어난 것은 2번 방식임
    - 그러므로 2번 방식을 이용해 구현해야 한다.

##### 고정 소수점에서의 최소 단위

최소 단위를 계산하고 그것이 왜 최소 단위인지에 대해 고찰하여 보고서에 작성해야 함

- FX_S_15_16의 경우에선 최소단위가 2 ^ (-16) 임

### Debugging

Debugging : 코드의 버그를 잡는 것

- cc -g 옵션 : debug info가 포함된 실행파일을 컴파일 하는 옵션

#### gdb

gdb : GNU Debugger의 약자

- debug info가 포함된 a.out을 gdb로 debugging하기 위해 실행
    - gdb a.out로 실행

##### gdb command
- run : 프로그램 실행
- where : Call stack 출력
- list : 원하는 위치의 code를 출력하는 명령어 
    - parameter 없음 : 현재 위치에서 부터 코드 10줄 출력
    - parameter 함수 이름 : 함수의 코드 출력
    - parameter num1, num2 : 'num1'줄에서 'num2'줄까지 코드 출력
- help : 명령어에 대한 도움말을 출력
- pwd : 현재 디렉토리를 출력
- print : 현재 스코프 안의 변수의 값을 출력
- step : 코드를 한줄 씩 실행하는 명령
- next : 현재 소스코드의 다음 줄을 실행하는 명령
    - step은 fprintf를 만났을 때 fprintf 함수로 넘어간다.
    - next는 fprintf를 만났을 때 함수의 처리를 끝낸 다음 현재 소스코드의 다음 줄로 넘어간다.
- break : break point를 지정하는 명령
- quit : gdb 종료 명령어
- continue : 현재 위치에서 계속 실행하는 명령
- alias : 단축 명령어를 지정하는 명령
- delete : breakpoint를 삭제하는 명령
    - delete num : num번째 break point를 삭제하는 명령
    - delete breakpoints : 모든 break point를 삭제하는 명령
- ni : next 명령의 alias
- bt : back trace의 약자. Call stack을 출력하는 다른 명령어
- watch : 변수에 감시점을 설정하는 명령. 감시점이 설정된 변수는 값이 바뀔 때 break가 걸림

## Lecture10

### core dumped

core dumped : 프로그램이 실행되는 중의 메모리 상태인 core를 기록하는 것

- core dumped 발생 예시 코드
```c
int main()
{       
        int a = 10/0; // 0으로 나누는 exception으로 인해 core dumped가 발생
}
```

#### core 가 생성되도록 설정 변경

- apport : 에러보고 서비스  
    - /var/lib/apport/coredump : apport service가 작동중일 때 dumped된 core가 저장되는 경로

먼저 apport service를 종료한 다음 core file size의 limit를 변경한다. 

- ulimit -a 명령을 통해 core file size 제한을 확인할 수 있음
```bash
$ sudo service apport stop
$ ulimit -a
core file size          (blocks, -c) 0
data seg size           (kbytes, -d) unlimited
scheduling priority             (-e) 0
file size               (blocks, -f) unlimited
pending signals                 (-i) 256271
max locked memory       (kbytes, -l) 65536
max memory size         (kbytes, -m) unlimited
open files                      (-n) 1024
pipe size            (512 bytes, -p) 8
POSIX message queues     (bytes, -q) 819200
real-time priority              (-r) 0
stack size              (kbytes, -s) 8192
cpu time               (seconds, -t) unlimited
max user processes              (-u) 256271
virtual memory          (kbytes, -v) unlimited
file locks                      (-x) unlimited
```
- ulimit -c unlimited 로 core file size의 크기를 unlimited로 변경

```bash
$ ulimit -c unlimited
$ ulimit -a
core file size          (blocks, -c) unlimited
data seg size           (kbytes, -d) unlimited
scheduling priority             (-e) 0
file size               (blocks, -f) unlimited
pending signals                 (-i) 256271
max locked memory       (kbytes, -l) 65536
max memory size         (kbytes, -m) unlimited
open files                      (-n) 1024
pipe size            (512 bytes, -p) 8
POSIX message queues     (bytes, -q) 819200
real-time priority              (-r) 0
stack size              (kbytes, -s) 8192
cpu time               (seconds, -t) unlimited
max user processes              (-u) 256271
virtual memory          (kbytes, -v) unlimited
file locks                      (-x) unlimited
```

gdb (debug_info가 포함된 실행파일) (core경로) : core가 dump된 원인을 출력해줌

```bash
$ gdb a.out core 
GNU gdb (Ubuntu 8.1-0ubuntu3) 8.1.0.20180409-git
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
[New LWP 4438]
Core was generated by `a.out'.
Program terminated with signal SIGFPE, Arithmetic exception.
#0  0x000055c1cde22609 in main () at coredump.c:3
3		int a = 10/0;
(gdb)
```

### Visual Studio 의 디버깅
Visual Studio에선 project를 생성하고 source file을 만든 다음 source file에 코드를 작성한 다음 컴파일 하여 실행함

- F5 : 컴파일 명령
    - 컴파일 옵션
        - release : 일반 실행파일 생성 옵션
        - debug : debug info가 포함된 실행파일 생성 옵션 ( cc -g 옵션과 동일한 기능)
        - x86 : intel 32bit 컴퓨터용 옵션
        - x64 : intel 64bit 컴퓨터용 옵션
    - 컴파일 옵션 창
<div style="text-align : center;">
    <img src=/images/compile_options.png width="70%"/>
</div>

- line number 왼쪽 공간을 클릭하여 break point를 설정할 수 있고 해당 line에 빨간 점이 생김
<div style="text-align : center;">
    <img src=/images/breakpointSet.png width="50%"/>
</div>

- 그 외에도 gdb 에서 사용했던 여러 기능들이 GUI로 구현되어 있어 편하게 사용할 수 있음
<div style="text-align : center;">
    <img src=/images/debugOp.png width="50%"/>
</div>

- 또한 Call stack, 변수들의 값, error info 등도 편하게 확인할 수 있게 표시됨
<div style="text-align : center;">
    <img src=/images/other_debug_info.png width="100%"/>
</div>

### 프로젝트 부가 설명

#### float point
float 는 c언어에서 실수의 근사치를 표현하기 위한 기본자료형으로 일반적으로 4바이트를 사용함.

4바이트 float 자료형은 하나의 sign bit와 8 bit의 exponent, 23bit의 mantissa 값을 가짐

<div style="text-align : center;">
    <img src=/images/float.png width="100%"/>
</div>

float에 저장된 값은 sign, exponent와 mantissa에 따라 다음과 같다.

Val = (-2S + 1) * 1.mantissa * e ^ (exponent - 127)

floating point는 한글로 부동 소수점인데 부동의 '부'는 한자로 뜰 부 이다. 즉 소수점의 위치가 자료형 안에서 고정되어있지 않은 소수를 표현하는 자료형어 floating point이다.

#### fixed point

반대로 fixed point는 소수점의 위치가 고정된 자료형이다.

fixed FX_S03_04에서의 소수점의 위치를 표현한 예시
<div style="text-align : center;">
    <img src=/images/fixed_point_expression.png width="70%"/>
</div>

- fixed FX_S03_04 는 그림과 같이 하나의 sign bit와 3bit의 정수부, 4bit의 소수부로 나뉜다.
- 그러므로 exponent에 따라 mantissa bit가 갖는 값이 달라지는 floating point와 달리 b4 bit는 항상 2의 0승 크기를, b2 bit는 항상 2의 -2승 크기를 갖는 것이다. 

그러므로 fixed FX_S03_04 에 저장된 값은 다음과 같이 계산된다.

- b7이 1인 경우  
    - val = – (~b6 * 2 ^ 2 + ~b5 * 2 ^ 1 + ~b4 * 2 ^ 0 + ~b3 * 2 ^ (-1) + ~b2 * 2 ^ (-2) + ~b1 * 2 ^ (-3) + ~b0 * 2 ^ (-4) + 2 ^ (-4))
- b7이 0인 경우 
    - val = b6 * 2 ^ 2 + b5 * 2 ^ 1 + b4 * 2 ^ 0  + b3 * 2 ^ (-1) + b2 * 2 ^ (-2) + b1 * 2 ^ (-3) + b0 * 2 ^ (-4)

int 자료형도 고정소수점의 일종 이라고 할 수 있으며 int 자료형에서 소수점은 b0 bit 뒤에 위치한다.
- 이를 이해하면 fixed FX_S03_04에 저장된 값은 정수로 표현한 값에 2 ^ (-(소수점의 위치))만큼을 곱한 값과 같다는 사실도 이해할 수 있다.
    - fixed FX_S03_04는 소수점의 위치가 b4뒤에 있으므로 val은 아래와 같다.
        - val = 정수로 표현한 값 * 2 ^ (-4)

floating point는 exponent의 크기가 허락하는 범위 내에선 소수의 유효 숫자 갯수가 mantissa가 표현할 수 있는 갯수 안에 들어오면 모두 표현할 수 있지만 fixed point는 일정 자리 이하의 값은 표현할 수 없다.
> fixed FX_S15_16은 2 ^ (-17)과 2 ^ 16을 표현할 수 없지만 floating point는 가능하다.

#### fixed point의 사칙연산

v_a : fixed point가 저장한 값  
iv_a : v_a에 저장된 bit를 정수로 표현한 값 (= v_a * 2 ^ (-q))  
v_b : fixed point가 저장한 값  
iv_b : v_b에 저장된 bit를 정수로 표현한 값 (= v_b * 2 ^ (-q))

- 덧셈
    - v = v_a + v_b = (iv_a * 2 ^ (-q)) + (iv_b * 2 ^ (-q)) = (iv_a + iv_b) * 2 ^ (-q)  
    => iv = iv_a + iv_b 
- 뺄셈
    - v = v_a - v_b = (iv_a * 2 ^ (-q)) - (iv_b * 2 ^ (-q)) = (iv_a - iv_b) * 2 ^ (-q)  
    => iv = iv_a - iv_b 
- 곱셈
    - v = v_a * v_b = (iv_a * 2 ^ (-q)) * (iv_b * 2 ^ (-q)) = (iv_a * iv_b) * 2 ^ (-2q)  
    => iv = iv_a * iv_b * 2 ^ (-q)
- 나눗셈
    - v = v_a / v_b = (iv_a * 2 ^ (-q)) / (iv_b * 2 ^ (-q)) = (iv_a * iv_b)
    => iv = iv_a / (iv_b * 2 ^ q)

### Optimization

프로그램의 성능을 향상시키는 작업을 Optimization이라 한다.

#### 성능에 영향을 미치는 요소

- Golden rule
    - Speed(작업 속도) - CPU > Memory > Storage > IO > Human
        - Register > Cache(1st, 2nd) > Memory > ...
        - 속도가 느린 Hardware를 최대한 덜 사용하도록 해야 성능이 좋아짐
        - ex) printf는 IO를 수행하는 명령이므로 프로그램 진척도를 printf를 여러번 이용해 출력하는 방식을 사용하면 Optimization에 방해가 많이된다.
    - Locality : 메모리는 하위 계층의 메모리에서 데이터를 load할 때 사용하고자 하는 데이터 주변의 데이터를 같이 load하는 특징이 있는데 이를 locality라 부른다.
        - 메모리를 사용할 때 locality에 의해 load된 데이터를 최대한 활용하면 속도가 느린 하위 메모리를 덜 사용할 수 있으므로 성능이 좋아짐
    - Pipeline
    - Error : 프로그램에서 Error가 발생하면 Error를 처리하는데 많은 비용이 사용되므로 Error가 최대한 발생하지 않도록 해야함

##### Pipeline

CPU 에서 instruction 하나를 처리할 땐 최대 아래와 같은 5단계를 거친다. Instruction의 종류에 따라 필요하지 않은 단계가 있을 수 있다.

1. Fetch : 실행할 명령을 메모리에서 읽어서
1. Decode : 명령어를 해독해 할 일을 파악하고 명령에 필요한 인자를 읽은 뒤
1. Execute : 명령을 수행하고
1. Memory : 메모리에 접근하여
1. Write : 결과를 저장한디.

Pipeline은 기존에 한 instruction에서 모든 단계가 끝난 다음에 다음 instruction의 fetch가 시작된 것과 달리 한 Instruction의 fetch가 끝나고 decode 단계가 진행되는 동안 다음 instruction의 fetch가 동시에 진행되도록 하는 방식을 말한다.

그러나 if문에 의해 branch가 발생하면 어느 instruction이 다음에 실행해야 할 instruction인지 알 수 없으므로 pipeline이 깨지게 되고 이는 성능 하락으로 이어짐.

#### profiling

프로그램의 성능을 측정하는 것을 profiling이라고 함

- gprof : GNU profiling 도구의 이름

##### how to use gprof
- compile with -pg option
    - $ cc -pg -Wall test.c -o test
- Excute program and generate gmon.out file
    - $ test
- Excute gprof
    - $ gprof test gmon.out

#### Additional Optimization tips

- 함수 호출은 안할 수 있으면 안하는게 좋다
    - 단순화 시키는 것이 목적이라면 #define macro를 사용하는 것이 효과적이다.
- profiling으로 나오는 수치는 절대적으로 정확한 것이 아니다.
    - 성능에 영향을 미칠 수 있는 요소(백그라운드 프로세스 등)를 최대한 줄이고 profiling을 해야 정확도가 높아진다.
- ? 조건문은 if문과 달리 성능이 좋다.

Q. optimization을 했을 때 debugging이 가능할까?
> A. optimization을 하면 기존의 코드에서 달라지는 부분이 생기기 때문에 debugging이 불가능하다.

## lecture 11

### gprof options
- -b // --brief -q -p : call graph or runtime
- -z // add unused functions(사용하지 않은 함수도 나타내줌)  

Q. 함수 포인터로 호출된 함수는 counting이 증가할까?
> A. 증가한다.

- -A // Annotation on source, must be compiled with -pg -g
- --graph

### 실습

red, green, blue, alpha값을 각각 8bit씩 사용하여 저장하는 32bit 자료형 만들기

자료형 이름 : t_rgba  
[rrrrrrrr][gggggggg][bbbbbbbb][aaaaaaaaa]  
위와 같은 형태로 값을 저장하게 만들고자 함

- 사용하는 자료형
    - unsigned int (int의 첫 번째 bit는 sign bit이므로 unsigned int를 사용해야 함)
    ```c
    typedef unsigned int t_rgba;
    ```
- r, g, b, a로 입력받을 수 있는 값의 범위 : 0 ~ 2^8-1 (=255)

#### r, g, b, a값을 t_rgba로 저장하는 방법
0~255 사이의 값을 unsigned int에 입력받으면 다음과 같이 맨 오른쪽 8bit안에 값이 모두 저장 될 것이다.  
[00000000][00000000][00000000][????????]  

이 때 [????????]에는 0~255사이의 입력받은 값이 저장되어 있는데 red의 경우 이를 다음과 같이 맨 왼쪽 8bit가 되도록 24번 왼쪽으로 shift하고  
[00000000][00000000][00000000][rrrrrrrr]  
=>  
[rrrrrrrr][00000000][00000000][00000000] - (1)  

green의 경우 왼쪽에서 9~16번째 bit가 되도록 16번 왼쪽으로 shift하고  
[00000000][00000000][00000000][gggggggg]  
=>  
[00000000][gggggggg][00000000][00000000] - (2)  

blue의 경우 왼쪽에서 17~24번째 bit가 되도록 8번 왼쪽으로 shift하고  
[00000000][00000000][00000000][bbbbbbbb]  
=>  
[00000000][00000000][bbbbbbbb][00000000] - (3)  

alpha의 경우 그대로 냅둔 다음  
[00000000][00000000][00000000][aaaaaaaa] - (4)

(1), (2), (3), (4) 네 데이터끼리 bitwise or 연산을 하면

[rrrrrrrr][gggggggg][bbbbbbbb][aaaaaaaa]  
위와 같은 형태로 t_rgba변수에 값이 저장되게 된다.

위의 과정을 하나의 매크로로 처리할 수 있는데 아래의 fromRGBA가 그 매크로에 해당한다.
```c
#define fromRGBA(r,g,b,a) (((r)&0xff)<<24)|(((g)&0xff)<<16)|(((b)&0xff)<<8)|((a)&0xff)
t_rgba rgba_1 = fromRGBA(red, green, blue, alpha);
```
실습 과정 중 처음엔 fromRGBA를 함수로 정의했으나 #define으로 macro로 정의했을 때 함수 호출 없이 코드에 직접 작성한 효과를 얻어 성능이 좋아지므로 위와 같이 수정되었다.  

r, g, b, a를 각각 0xff와 bitwise and 연산을 먼저 수행 한것은 0~255 범위의 값이 아닌 다른 값이 입력됐을 때 다른 색의 bit에 영향을 끼치지 않도록 필터링 한 안전장치이다.

#### 과제 : t_rgba 변수 간의 곱셈

t_rgba 변수 두 개를 입력받아 각각의 컬러끼리 곱한 결과를 t_rgba로 return하는 t_rgba간의 곱셈을 두 방법으로 구현 해보았다.

컬러 값을 float로 변환하여 float 연산으로 계산하는 방법
```c
#define F_NUM_1_255 (1.0f/255.0f)
t_rgba mul_float(t_rgba c1, t_rgba c2)
{
        float r1, g1, b1, a1;
        float r2, g2, b2, a2;
        int   ir, ig, ib, ia;
        r1 = (float) ((c1 >> 24)        ) * F_NUM_1_255;
        g1 = (float) ((c1 >> 16) & 0xff ) * F_NUM_1_255;
        b1 = (float) ((c1 >>  8) & 0xff ) * F_NUM_1_255;

        r2 = (float) ((c2 >> 24)        ) * F_NUM_1_255;
        g2 = (float) ((c2 >> 16) & 0xff ) * F_NUM_1_255;
        b2 = (float) ((c2 >>  8) & 0xff ) * F_NUM_1_255;
        a2 = (float) ((c2      ) & 0xff ) * F_NUM_1_255;

        ir = (int)((r1 * r2) * 255.0f);
        ig = (int)((g1 * g2) * 255.0f);
        ib = (int)((b1 * b2) * 255.0f);
        ia = (int)((a1 * a2) * 255.0f);

        return fromRGBA(ir, ig, ib, ia);
}
```
컬러끼리 int 연산으로 계산하는 방법
```c
t_rgba mul_int(t_rgba c1, t_rgba c2)
{
        unsigned int r1, g1, b1, a1;
        unsigned int r2, g2, b2, a2;
        unsigned int r, g, b, a;
        r1 = (c1 >> 24)       ; r2 = (c2 >> 24);
        g1 = (c1 >> 16) & 0xff; g2 = (c2 >> 16) & 0xff;
        b1 = (c1 >>  8) & 0xff; b2 = (c2 >>  8) & 0xff;
        a1 = (c1      ) & 0xff; a2 = (c2      ) & 0xff;
        r = (r1 * r2) / 255;
        g = (r1 * r2) / 255;
        b = (r1 * r2) / 255;
        a = (r1 * r2) / 255;
        return fromRGBA(r,g,b,a);
}
```
