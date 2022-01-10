# 실전코딩 2 실습

### sshid : pcc011
### name : 나용성
### id : 201720707

## Lecture 1

linux command

mkdir : 디렉토리를 만드는 명령어
cd : 현재 디렉토리를 변경하는 명령어
ls : 현재 디렉토리의 파일 리스트를 보여주는 명령어
-l : 파일의 정보를 상세히 보여줌
-a : 숨겨진 파일까지 보여줌
cc
pwd
mv
passwd
chmod
~
~username
..
.
rm
whoami
cat
history

vi editor command

normal, insert, command

i(insert), a(append)
del, x
u
esc
:
w
q



## Lecture 2

![Computer Hardware System](/images/computer_hardware_system.png)
위의 그림과 같이 CPU는 Storage devices의 데이터를 직접 읽거나 실행하거나 쓸 수 없고 Input device에서 직접 입력받거나 Output device로 바로 출력할 수 없다. CPU는 Memory에만 접근할 수 있기 때문에 Storage devices의 파일을 사용하려면 Storage devices에서 파일을 Memory로 읽어온 다음 사용해야 한다. Input devices의 입력을 받거나 Output devices로 출력을 할 때도 입력받은 데이터가 Memory의 Input Buffer에 저장된 다음 사용할 수 있고 출력할 데이터를 Memory의 Output Buffer에 저장한 다음 출력할 수 있다. 

![Linux Software](/images/linux_software.png)
software는 system software와 application software로 나뉘는데 system software는 hardware의 바로 윗 단계에 위치하며 위의 그림과 같이 여러 껍데기 형태의 구조를 갖고 사용자는 가장 윗단의 shell을 사용해 system software를 이용해 hardware를 제어할 수 있다. Linux역시 system software 중 하나이다.

terminals

linux command

ps
tty
-> linux는 모든 자원을 파일로 관리
wall
write
Ctrl + d eof
Ctrl + c kill
Ctrl + z suspend
cp
fg

cat

vi editor command
:set number
/(찾고자 하는 것)
o

### redirection



## Lecture 3

### linux command

- 교수님의 코드를 카피함
- Good Job
- Hi

1. 일번
1. 이번
1. 삼번

```
cp ~hwan/.profile  ~hwan/.bashrc  ~hwan/.bash_logout .
source .profile
```
이렇게 하니까 프롬프트가 초록색이 됨

## Lecture 4

redirection

here document
0<< or <<
임시 파일을 만들어 stdin으로 연결

here string
<<< bash만 가능

pipe에서 실행의 순서
cmd1 | cmd2
병렬로 동시에 실행된다.
why? buffer size의 문제

named pipe
이름 붙인 pipe

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

```bash
pipe |
pipe sync
here document
here string

vi command

yy 복사
p 붙여넣기
n명령어 명령어를 n번 반복