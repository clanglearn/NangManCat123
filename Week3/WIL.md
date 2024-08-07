# Weekly I Learned

## 2차원 배열
일반적으로 선언 시 배열의 크기를 정해줘야 하는데 2차원 배열 역시 마찬가지이다.
다만 값이 늘어나면 새로운 배열을 계속 추가해주면 되므로 전체 배열 안에 들어가는 배열의 크기만 정해준다면
그 이후에는 세부 배열의 수 자체를 늘려가면 되므로 첫번째 대괄호의 사이즈는 생략해주어도 된다
따라서 2차원 배열처럼 3차원 4차원 배열에서도 첫번째 크기만 생략해 줄 수 있겠다.

## 이중 포인터
포인터 변수도 변수이므로 그 포인터 변수의 주소를 가리키는 포인터 변수를 만들 수 있다.

## 포인터 배열
배열의 각 요소가 포인터를 가리키는 배열이다. 어디에 쓰이는지 알아보았다.
- 문자열 배열

문자열은 문자 배열로 표현되지만, 이를 관리하는 포인터 배열을 사용하면 메모리 사용과 처리 속도 면에서 효율적이다. 각 포인터는 문자열의 시작 주소를 가리키므로 메모리 사용과 처리 속도 면에서 장점을 가진다.
```c
char *fruits[]={"Apple", "Banana", "Cherry", "Date"};
라고 한다면 fruits는 문자열을 가리키는 포인터 배열이다.
for (int i=0;i<4;i++){
    printf("%s\n", fruits[i]);
}```
로 출력할 수 있겠다.

- 다차원 배열의 대안

포인터 배열은 다차원 배열을 처리하는 데 있어 유연성을 제공한다. 특히 행의 크기가 가변적인 경우 유용하다.
```c
int *matrix[3];
for (int i=0;i<3;i++){
    matrix[i]=(int*)malloc(4*sizeof(int));
}```
에서 matrix는 포인터 배열로 각 요소가 다른 배열을 가리킨다.

- 함수 포인터 배열

포인터 배열에 함수 포인터를 저장하여 함수의 집합을 관리하고 동적으로 호출할 수 있다.
```c
void (*funcs[3])(void)={func1,func2,func3};
for (int i=0;i<3;i++){
    funcs[i]();
}```
에서 funcs배열은 함수 포인터를 저장하고, 각 포인터는 함수를 가리킨다.

- 데이터 구조 관리

포인터 배열은 트리 그래프 등의 데이터 구조를 구현하고 관리하는 데 유용하다. 각 포인터는 노드 또는 데이터 구조의 다른 요소를 가리킬 수 있다. 2주차 때 공부했던 트리와 그래프에 포인터가 사용된다는 것에 조금 더 가까워진 것 같다.

## 함수 포인터

함수의 이름은 함수가 저장된 공간을 가리키는 포인터이다.
함수 포인터 변수가 함수의 이름이 의미하는 주소 값을 저장한다.
반환형, 매개변수 선언의 정보를 담고 있다.
```c
void Print(int num1,int num2){
    printf("%d", num1+num2)
}

void (*fptr)(int,int)=Print;
fptr(num1,num2)```
로 호출할 수 있다.

## void 포인터
어떠한 주소값도 저장이 가능하다. 자료형을 몰라 주소값만으로는 어디까지 읽어야 하는지 알 수 없기에 * 연산은 불가능하다.

## 메모리 구조

- 코드 영역

코드가 저장되고 CPU가 코드영역에서 명령을 하나씩 가져다 실행한다.

- 데이터 영역

전역변수, static변수가 저장된다

- 힙 영역

자유 공간이다

- 스택 영역

지역변수, 매개변수 등 함수를 나가면 소멸되는 변수를 저장한다.

## 동적 할당

함수 내에서 선언된 변수는 기본적으로 지역변수이지만, 이 변수가 계속되길 원하는 경우 자유 공간인 힙 영역을 이용해서 저장하고 관리할 수 있다.

- malloc

힙 영역으로 메모리 공간 할당.
인자로 사이즈만 입력받아 메모리의 용도를 몰라 void 포인터를 반환한다.
형변환으로 이용할 수 있다.

- free

힙 영역에 할당된 메모리 공간 해제