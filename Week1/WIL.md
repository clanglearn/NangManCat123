# Weekly I Learned


# scanf()에서 '&'가 하는 역할

### C언어에서 'scanf'함수를 사용할 때 변수에 값을 대입하기 위해 '&'연산자를 사용하는 이유는 'scanf'함수가 입력된 값을 해당 변수의 메모리 위치에 저장하기 때문이다. '&'연산자는 변수의 주소를 나타내며, 'scanf'는 그 주소를 통해 해당 변수에 접근하여 값을 저장한다

### 'int i = 1;'과 'scanf'를 사용하여 변수에 값을 할당하는 경우는 둘 다 변수에 값을 대입하는 작업이지만, 내부적으로 어떻게 동작하는지에 차이가 있다.

## int i = 1;
### 이 코드는 변수 i를 선언하고, 그 변수에 직접 1이라는 값을 할당하는 것이다. 이때, 1이라는 값은 컴파일 타임에 결정되고, 변수 i의 메모리 공간에 바로 저장된다. 이 과정에서 & 연산자는 필요하지 않다.

## scanf("%d", &i);
### 이 코드는 변수 'i'를 선언하고, 사용자가 입력한 값을 변수 'i'에 저장하는 것이다. 'scanf' 함수는 사용자가 입력한 값을 해당 변수의 메모리 위치에 저장해야 한다. 이때 '&'연산자를 사용하여 변수 'i'의 메모리 주소를 'scanf'함수에 전달해야 한다. 이는 'scanf'함수가 그 주소를 통해 변수에 접근하여 값을 저장할 수 있게 하기 위함이다.

## 'int i = 1;'
### 컴파일러가 변수의 메모리 위치를 알고 있으므로, 직접 값을 대입할 수 있다. 이 과정에서는 '&'연산자가 필요하지 않다.
## 'scanf'를 통한 입력
### 'scanf' 함수는 입력 값을 저장할 변수의 메모리 주소가 필요하다. 따라서 변수의 주소를 전달하기 위해 '&'연산자가 필요하다.