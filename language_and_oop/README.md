## 이론 정리중...

파이썬 : 변수와 함수

함수
: 파라미터 : 지역변수
: 내부변수 : 지역변수

전역변수에 접근하고 싶다면
함수 내부에서 global 사용

그러나
어떤 함수가 global을 쓴다는 것은
그 global변수를 제외하면
다른 변수를 사용할 수 없다는 뜻이다

따라서 이러한 방법보다는

파라미터를 세팅하고
파라미터에 전역변수를 대입해서
함수를 실행 후
바뀐 전역변수를 사용하는게 좋은데

파이썬은 레퍼런스가 없기 때문에
바뀐 변수가 지역변수가 되어버린다

따라서 함수를 지역변수로 리턴하고
함수 자체를 전역변수에 저장하면
전역변수가 바뀐다!



c++ : 변수와 함수

함수에 대해서
: 파라미터 : 지역변수
: 내부변수 : 지역변수도 되고 전역변수도 된다

전역변수에 접근하고 싶다면
걍 접근된다

그러나
어떤 함수가 전역변수를 쓴다는 것은
그 전역변수를 제외하면
다른 변수를 사용할 수 없다는 뜻이다

따라서 이러한 방법보다는

파라미터를 세팅하고
파라미터에 전역변수를 대입해서
함수를 실행 후
바뀐 전역변수를 사용하는게 좋은데
레퍼런스를 쓰면 된다



c / c++
전역변수는 순서대로 위에서 정의해야 아래 코드에서 사용할 수 있다
 : 전역 메소드도 순서대로 위에서 정의해여 아래 코드에서 사용할 수 있다 : 프로토 타입이 필요하다

지역변수는 중괄호를 벗어나면 사용할 수 없다
 : 메인함수 내부에 정의된 변수는, 외부의 함수나 클래스를 쓸 때에는 일단 중괄호를 벗어나 외부의 함수를 실행하기 때문에 사용할 수 없다

지역변수끼리는 순서에 맞아야 사용할 수 있다

파라미터는 함수를 벗어나면 사용할 수 없다

메인함수는 클래스 정의, 함수 정의를 할 수 없다
메인함수는 외부에서 정의된 클래스, 함수를 가져다가 실행할 수 있다
메인함수는 변수 정의, 제어문 활용 등의 코드를 실행할 수 있다

swap함수를 정의하기 위해 레퍼런스 변수를 사용할 수 있다
프로토타입이 필요하다(함수를 선언하고, 순서에 맞으면 사용할 수 있으며, 정의는 나중에 한다)




자바
전역변수는 순서에 관계없이 생성만 되면 코드 어디에서든 사용할 수 있다
 : 전역 메소드도 순서에 관계없이 생성만 되면 코드 어디에서는 사용할 수 있다 : 프로토 타입이 필요없다

지역변수는 중괄호를 벗어나면 사용할 수 없다
 : 메인함수 내부에 정의된 변수는, 외부의 함수나 클래스를 쓸 때에는 일단 중괄호를 벗어나 외부의 함수를 실행하기 때문에 사용할 수 없다

지역변수끼리는 순서에 맞아야 사용할 수 있다

파라미터는 함수를 벗어나면 사용할 수 없다

메인함수는 클래스 정의, 함수 정의를 할 수 없다
메인함수는 외부에서 정의된 클래스, 함수를 가져다가 실행할 수 있다
메인함수는 변수 정의, 제어문 활용 등의 코드를 실행할 수 있다

swap함수를 정의하기 위해 레퍼런스 변수를 사용할 수 없다
프로토타입이 필요없다




프로그래밍 언어


1주차
## 기본 자료형
# c++
: short(2) %d / int(os에 따라 다르다) %d / long(4) %l / long long(8) %l
: float(4) %f / double(8) %f
: char %c
: bool %d

# 자바
: primitive type : default = 0
: byte(1) / short(2) / int(4) / long(8)
: float(4) / double(8)
: char
: bollean

: reference type : default = null
: 클래스
: 인터페이스
: 배열

# 파이썬
: 인터프리터 언어이기 때문에 자료형을 명시하지 않고 사용한다

# 자바스크립트
: 
: json


## 기본 자료구조
# c++ stl 컨테이너
: pair
: list slist
: vector
: deque
: queue
: priority queue
: stack

: set
: multiset
: map
: multimap

: hash_set
: hash_multiset
: hash_map
: hash_multimap

# c++ stl 반복자

# 자바 콜렉션
: 링크드리스트 벡터 어레이리스트
: 해쉬셋 트리셋
: 해쉬테이블 해쉬맵 트리맵

# 자바 반복자

# 파이썬
: 리스트 튜플 셋 
: 딕셔너리

# 파이썬 반복자


## 제어 : if for while iterator
c++ Iterator
: 

# 함수
call by value
call by pointer
call by reference

c++ : call by value / call by pointer / call by reference / 동기
자바 : call by value(레퍼런스 변수도 복사되어 넘어감) / 동기
파이썬 : call by value / call by reference / 동기
자바스크립트: call by value(레퍼런스 변수도 복사되어 넘어감) / 동기 + 비동기(비동기 api가 존재) / 함수가 객체라서 변수에 할당해서 다른 함수의 파라미터로 사용되며, 다른 함수의 파라미터로 사용되는 함수 변수를 콜백함수라고 부름

자바스크립트의 콜백함수 + 비동기 이해





















# 메모리
컴파일 언어
: 컴파일 타임에 변수와 값이 메모리에 static으로 할당된다
: 런 타임에 값이 메모리에 dynamic으로 할당된다

인터프리터 언어
: line by line으로 런 타임에 변수와 값이 메모리에 dynamic으로 할당된다

c++ 자바 : 컴파일 언어
파이썬 : 인터프리터 언어
자바스크립트 : ?

# 메모리에 static으로 할당된다?
: 컴파일 타임에 변수와 값이 메모리에 static으로 할당된다
: 할당된 장소는 메모리의 stack영역이다
: 할당된 결과는 메모리의 stack영역의 주소를 리턴한다
: 할당된 메모리는 자동으로 해제된다
: 함수, 클래스의 메소드는 메모리의 stack영역에 static으로 할당되고 함수 포인터를 리턴한다
: 함수 포인터는 메모리에 static으로 할당된 함수의 주소를 함수가 할당된 stack의 메모리 주소를 가지는 포인터 변수는 정적으로 결정되고, 이것을 정적 바인딩이라고 한다

# 동적 할당이란?
: 컴파일 단계에서는 주소값을 받을 포인터 변수를 선언한다
: 클래스의 주소값을 받는 포인터 변수의 경우에는, 이미 정적으로 클래스 내부의 메소드가 모두 stack 메모리에 정보가 할당되어 있기 때문에, 동적 할당을 해주어도  이미 사용되는 클래스의 메소드 정해져 있다
: 런타임 단계에서 동적으로 heap 메모리에 정보가 할당되고 heap 메모리의 주소가 리턴된다
: heap 메모리의 주소가 컴파일 단계에서 선언된 포인터 변수에 할당된다
: c++은 메모리를 수동으로 해제해야 하고 자바는 가바지 콜렉터가 메모리를 자동으로 해제된다


# c++에서 포인터 변수는 언제 선언하고 사용할까?
: 변수에 이미 정적으로 정의된 값을 [함수를 이용해서] 런타임에 동적으로 바꾸어야 하는 경우(ex : swap)
: 포인터로 값에 접근하거나 리턴을 쓴다
: 변수에 값을 정적으로 할당하지 않고 [함수를 이용해서] 오직 런타임에 동적으로 할당하고 싶은 경우(ex : new 생성자)
: new를 써서 포인터를 받음ㅁ

# 자바에서 포인터 변수는 없는데?
: 변수에 이미 정적으로 정의된 값을 [함수를 이용해서] 런타임에 동적으로 바꾸어야 하는 경우(ex : swap) 
: 포인터로 값에 접근할 수 없으므로 [함수에 return을 사용]한다
: 변수에 값을 정적으로 할당하지 않고 오직 런타임에 동적으로 할당하고 싶은 경우(ex : new 생성자)
: 자바는 new를 사용하면 되는데, 자바의 new가 리턴하는 것은 주소가 아니라 레퍼런스 변수다
: 따라서 자바의 new를 써서 만드는 자료형의 타입은 레퍼런스 변수로 생각하면 된다

: 자바는 기본 자료형을 담는 프리미티프 변수가 있다
: 자바의 배열이나 객체등의 자료형을 담는 레퍼런스타입 변수형가 있다
: 자바는 프리미티브 타입은 콜바이 벨류지만 / 레퍼런스 타입은 콜바이 벨류지만 콜바이 레퍼런스처럼 작동한다


# 파이썬은 포인터 변수가 없는데?
: 변수에 이미 정적으로 정의된 값을 [함수를 이용해서] 런타임에 동적으로 바꾸어야 하는 경우(ex : swap) 
: 파이썬은 정적으로 정의된 값이라는게 없다
: 변수에 값을 정적으로 할당하지 않고 오직 런타임에 동적으로 할당하고 싶은 경우(ex : new 생성자)
: 파이썬은 정적으로 정의된 값이라는게 없다

# c++에서 배열의 이름은 무엇인가?
: 배열의 이름 = 배열의 첫 번째 요소의 주소를 저장한 포인터 변수
: 배열의 이름을 함수의 파라미터로 넘긴다 = call by pointer

# c++에서 배열의 이름을 함수의 파라미터로 넘기는 경우 call by poiner로 작동한다
: 만약 배열의 이름은 복사되지만, 복사된 포인터변수 역시 같은 배열을 가르키므로, 배열이 조작된다
: 만약 특별한 경우, 즉 함수 내부에서 복사된 포인터변수를 다른 포인터에 복사하고, 복사된 포인터를 delete하는 경우, 기존의 전역변수 배열 역시 delete된다
: 이를 막기 위해서 배열의 포인터, 즉 이중포인터를 함수의 인자로 넘길 수 있다
: 예를 보는것이 빠르겠다








# 객체지향
클래스 + 접근 제어자 + static final + 생성자 소멸자 + 복사 생성자 + 메소드 오버로딩 + 메소드 오버라이딩 + 연산자 오버로딩

# 자료구조
템플릿
: 제네릭한 자료구조를 만들기 위해 사용한다

# 데이터
상속1
: 데이터간의 질서를 설계하는데 사용한다
: c++의 다중 상속은 다이아몬드 상속의 문제를 반드시 피한다
: 자바의 다중 상속 대신 다중 인터페이스로 구현한다
: 파이썬의 다중 상속은 다이아몬드 상속의 문제를 반드시 피한다

상속2 : 폴리모피즘 + 가상함수 + 순수 가상함수 + 추상 클래스 + 가상 소멸자
: 부모 포인터로 자식 객체를 동적할당하면 부모 포인터 하나로 다 해결볼 수 있다
: 부모 포인터를 선언하는 순간 정적 바인딩으로 부모 포인터는 부모 클래스의 메소드를 호출할 수 있게 된다
: 따라서 동적 할당으로 자식 객체를 만들어도 부모 포인터는 부모의 메소드만 호출할 수 있다
: 이런 상황에서 자식 객체의 메소드를 호출하는 방법은 다음의 2가지가 존재한다
>> 방법 1 : 다이나믹 캐스팅을 사용해서 부모 객체의 포인터 타입을 자식 객체의 포인터 타입으로 바꾼 후에 자식 객체의 메소드를 호출
>> 방법 2 : 부모 포인터로 메소드를 호출해도 자식 객체의 메소드를 사용하고 싶다면 부모 객체의 함수를 가상함수로 선언해서 동적으로 함수를 할당한다

: 부모 클래스에서 메소드를 가상함수로 선언했다면 자식 클래스에서 그 메소드는 오버라이딩 해도 되고 안해도 된다
: 부모 클래스에서 메소드를 순수가상함수로 선언했다면 자식 클래스에서 그 메소드는 반드시 오버라이딩한다
: 순수가상함수가 존재하는 부모클래스는 객체를 생성할 수 없고, 이러한 부모 클래스를 특별히 추상 클래스고 부른다
: 추상 클래스를 상속받은 자식 클래스는 순수가상함수를 반드시 오버라이딩해야 객체를 생성할 수 있다

: 가상함수만 존재하는 클래스를 자바는 특별히 인터페이스라고 부른다


: 폴리모피즘으로 객체를 생성하고 부모 포인터의 소멸자를 호출하면 정적으로 바인딩된 부모 클래스의 소멸자만 호출되기 때문에, 자식 객체의 메모리가 해제되지 않고 남아있게 된다
: 그래서 부모의 소멸자를 가상함수로 선언하고, 소멸자를 호출해서 자식의 소멸자가 동적으로 바인딩되서 호출된 후에, 부모의 소멸자까지 호출될 수 있도록 한다

: 자바는 다중상속이 불가능하다

c++의 일반 클래스(멤버변수 존재 + 메소드 존재 + 메소드 오버라이딩이 어쩌면 필요한 함수를 가상함수로 선언(딱히 뭐가 없어도 되지만 기왕이면 가상함수로 선언하자)) : 인스턴스 생성 가능
c++의 추상 클래스(멤버변수 존재 + 메소드 존재 + 메소드 오버라이딩이 반드시 필요한 함수를 순수 가상함수로 선언) : 인스턴스 생성 불가

자바의 일반 클래스(멤버변수 존재 + 메소드 존재 + 메소드 오버라이딩은 딱히 뭔가 없어도 알아서 된다(가상함수 선언하면 안됨)
자바의 추상 클래스(멤버변수 존재 + 메소드 존재 + 메소드 오버라이딩이 반드시 필요한 함수를 가상함수로 선언(자바의 가상함수는 c++의 순수 가상함수와 같다)) : 인스턴스 생성 불가
자바의 인터페이스(메소드를 모두 가상함수로 선언) : 인스턴스 생성 불가



c++의 상속형태
부모 클래스 : 프라이빗 나만 씀 자식 예외 없음 / 프로텍티드 나랑 자식만 씀 / 퍼블릭 걍 다 써라
>>
public 상속 : 부모의 프라이빗은 못씀 / 부모의 프로텍티드는 씀 / 부모의 퍼블릭은 씀
프라이빗 상속 : 부모의 프라이빗은 못씀 / 부모의 프로텍티드는 씀 / 부모의 퍼블릭을 쓰는데 본인은 프로텍티드로 사용함
프라이빗 상속 : 부모의 프라이빗은 못씀 / 부모의 프로텍티드는 쓰는데 본인은 프라이빗으로 씀 / 부모의 퍼블릭을 쓰는데 본인은 프라이빗으로 씀

자바의 접근제이자
public
어떤 클래스든 접근 가능
protected
자기자신, 같은패키지, 서로다른 패키지라 하더라도 상속받은 자식클래스에선 접근가능
private
자기 자신만 접근가능
default(접근제어자를 따로 적지않으면 default)
자기자신과 같은 패키지에서만 접근할 수 있음

자바의 상속형태
?



















자바는 객체를 동적으로만 생성할 수있다
힙 메모리는 자동으로 해제됨
연산자 오버로딩 안됨
메소드 오버로딩 됨(그러니까 같은 함수인데 들어가는 파라미터에 따라 다르게 실행되는거임)




























자바는 객체a의 자식이 객체b인 경우
a[]의 자식이 b[]지만
어레이<a>의 자식관계로 어레이<b>가 되지 않는다
즉 배열은 자식관계에 영향을 받지만, 제네릭은 아무런 관계가 없는 두 객체가 만들어진다
따라서 a[]배열을 선언하고 b객체를 담는것은 가능하지만(업캐스팅 원리)
어레이<a>를 선언하고 b객체를 담는건 당연히 불가능하다(애초에 캐스팅이 아니다. 전혀 무관하기 때문)
따라서 List<Object> myList = new ArrayList<Sting>();
이런건 캐스팅과 무관한거라서 컴파일부터 안된다. 타입이 일치하지 않기때문









2주차
콘솔 입력 출력

자바 콘솔 입력
자바의 System.in 을 이용하면 콘솔 입력을 얻을 수 있다. 다음의 예제를 작성해 보자.

import java.io.InputStream;

public class StreamTest {
    public static void main(String[] args) throws Exception {
        InputStream in = System.in;

        int a;
        a = in.read();

        System.out.println(a);
    }
}
위 코드에서 사용한 InputStream은 자바의 내장 클래스이다. 자바의 내장 클래스중에 java.lang 패키지에 속해 있지 않은 클래스는 위 코드처럼 필요할 때 항상 import 해서 사용해야 한다. 우리가 그동안 사용해 왔던 System이나 String등의 클래스는 java.lang 패키지에 속해 있는 클래스이므로 별도의 import 과정이 필요없었다. (자바 패키지에 대한 설명은 나중에 자세하게 알아볼 것이다.)

다음 문장에서 알 수 있듯이 System.in은 InputStream의 객체임을 알 수 있다.

InputStream in = System.in;
InputStream의 read메소드는 다음처럼 1 byte의 사용자의 입력을 받아들인다.

int a;
a = in.read();
하지만 read메소드로 읽은 1 byte의 데이터는 byte 자료형으로 저장되는 것이 아니라 int 자료형으로 저장된다. 저장되는 int 값은 0-255 사이의 정수값으로 아스키 코드값이다.

※ 0이라는 숫자에 해당되는 아스키코드값은 48, a라는 문자에 해당되는 아스키코드값은 97이다.

이제 프로그램을 실행시키보면 프로그램은 종료되지 않고 사용자의 입력을 대기하고 있을 것이다. 왜냐하면 InputStream의 read()메소드가 호출되면 사용자의 입력을 받을 때까지 프로그램이 대기하기 때문이다.

이제 콘솔 창에 'a' 키를 입력해 보자. 아무런 반응이 없을 것이다. 이번에는 다시 "엔터"키를 입력해 보자. (※ 엔터키를 입력해야 사용자의 입력이 프로그램에 전달된다.)

아마도 다음과 같이 출력이 되고 프로그램은 종료될 것이다.

97
97은 사용자가 입력한 a에 해당되는 아스키 코드값이다.

다시 프로그램을 실행시키고 이번엔 "abc"를 연속해서 입력한 후 "엔터"키를 다시 입력해 보자.

이번에도 97이 출력될 것이다.

97
"abc" 를 입력했지만 출력은 "a"에 해당되는 아스키 코드값만 출력되었다. 그 이유는 InputStream의 read 메소드는 1 byte만 읽기 때문이다. 즉, 사용자는 "abc"라는 총 3 byte의 데이터를 전달했지만 프로그램에서 1 byte만 읽은 경우라고 할 수 있다.

이렇게 사용자가 전달한 1 byte의 데이터 또는 3 byte의 데이터를 어려운 말로 입력 스트림이라고 한다. 스트림은 이어져 있는 데이터(byte)의 형태라고 이해하면 된다.

스트림(Stream)이란?

스트림을 가장 쉽게 이해하려면 수도꼭지를 생각하면 된다. 수도꼭지를 틀면 물이 나오고 수도꼭지를 잠그면 물이 나오지 않는다. A라는 곳에서부터 B라는 곳까지 수도관이 연결되어 있고 A에서 계속 물을 보낸다면 B에서 수도꼭지를 틀때마다 물이 나오게 될 것이다. 여기서 스트림은 A수도관에서 B수도관으로 이동하는 물의 흐름이라고 할 수 있다.

프로그래밍에서는 다음과 같은 것들을 스트림이라고 할 수 있다.

파일 데이터 (파일은 그 시작과 끝이 있는 데이터의 스트림이다.)
HTTP 응답 데이터 (브라우저가 요청하고 서버가 응답하는 HTTP 응답 데이터도 스트림이다.)
키보드 입력 (사용자가 키보드로 입력하는 문자열은 스트림이다.)
그렇다면 사용자가 3 byte를 입력했을 때 3 byte를 전부 읽고 싶다면 어떻게 해야 할까?

다음의 예제를 작성해 보자.

import java.io.InputStream;

public class StreamTest {
    public static void main(String[] args) throws Exception {
        InputStream in = System.in;

        int a;
        int b;
        int c;

        a = in.read();
        b = in.read();
        c = in.read();

        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
위 예처럼 read() 메소드를 3번 실행하도록 수정하고 프로그램을 다시 실행해 보면 "abc" 입력시 총 3 byte를 읽어들이는 것을 확인할 수 있을 것이다.

abc (입력)
97 (출력)
98 (출력)
99 (출력)
또는 다음과 같이 좀 더 개선된 방법을 사용할 수 있다.

import java.io.InputStream;

public class StreamTest {
    public static void main(String[] args) throws Exception {
        InputStream in = System.in;

        byte[] a = new byte[3];
        in.read(a);

        System.out.println(a[0]);
        System.out.println(a[1]);
        System.out.println(a[2]);
    }
}
길이 3 짜리 byte배열을 만든 후 read메소드 호출시 입력값으로 전달하면 콘솔 입력이 해당 배열에 저장이 된다. 프로그램을 실행해 보면 이전과 동일한 결과가 출력되는것을 확인 할 수 있다.

abc (입력)
97 (출력)
98 (출력)
99 (출력)
하지만 읽어들인 값을 항상 아스키코드 값으로 해석해야 하는 이 방식은 여전히 불편하다. 우리가 입력한 문자값을 그대로 출력해 볼 수는 없을까?

바이트 대신 문자로 입력 스트림을 읽으려면 InputStreamReader를 사용하면 된다.

위 예제를 다음과 같이 변경해 보자.

import java.io.InputStream;
import java.io.InputStreamReader;

public class StreamTest {
    public static void main(String[] args) throws Exception {
        InputStream in = System.in;
        InputStreamReader reader = new InputStreamReader(in);
        char[] a = new char[3];
        reader.read(a);

        System.out.println(a);
    }
}
InputStreamReader를 사용하기 위해 import 문이 하나 더 추가되었다. InputStreamReader 객체를 생성할 때는 다음과 같이 생성자의 입력으로 InputStream의 객체가 필요하다.

InputStreamReader reader = new InputStreamReader(in);
이전에는 읽어들일 값을 byte배열로 선언했는데 InputStreamReader를 이용하면 다음처럼 byte대신 char배열을 사용할 수 있게된다.

char[] a = new char[3];
프로그램을 실행하고 "abc" 입력 후 엔터키로 사용자 입력을 전달하면 다음과 같이 "abc"라는 문자열이 한꺼번에 출력되는 것을 확인할 수 있다.

abc (입력)
abc (출력)
프로그램이 많이 개선되었지만 여전히 불편한점은 남아있다. 불편한 점은 고정된 길이로만 스트림을 읽어야 한다는 점이다. 위 예제는 항상 3 byte만 읽도록 고정되어 있다.

사용자가 엔터키를 입력할 때까지 사용자의 입력을 전부 받아들일 수는 없을까?

BufferedReader를 이용하면 가능하다!

다음과 같이 예제를 수정해 보자.

import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;

public class StreamTest {
    public static void main(String[] args) throws Exception {
        InputStream in = System.in;
        InputStreamReader reader = new InputStreamReader(in);
        BufferedReader br = new BufferedReader(reader);

        String a = br.readLine();
        System.out.println(a);
    }
}
역시 BufferedReader를 이용하기 위해 import 문이 추가되었다. BufferedReader는 객체 생성시 생성자의 입력값으로 InputStreamReader의 객체가 필요하다.

이제 BufferedReader의 readLine메소드를 이용하면 사용자가 엔터키를 입력할 때까지 입력했던 문자열 전부를 읽을 수 있게 된다.

프로그램을 실행하고 "Hello World"라고 입력한 후 엔터키를 입력하면 "Hello World"라는 문자열이 그대로 Echo되어 출력되는 것을 확인할 수 있을 것이다.

HelloWorld (입력)
HelloWorld (출력)
초보 프로그래머, 능숙한 프로그래머 할 것 없이 이 스트림 부분만 들어오면 헷갈리게 마련이다. 감싸고 감싸고 또 감싸니 도대체 내부적으로 어떻게 돌아가는지 헷갈릴 수 밖에 없다.

다음과 같이 기억하면 좋을 것 같다.

InputStream - byte
InputStreamReader - character
BufferedReader - String
※ 위 예제에 main 메소드를 보면 throws Exception 을 사용한 부분이 있다. InputStream으로 부터 값을 읽어들일 때는 IOException이 발생할 수 있기 때문에 예외처리를 해야 하는데 throws로 그 예외처리를 뒤로 미루게 한 것이다. 예외처리는 다음 챕터에서 자세히 다룰 예정이니 지금은 그냥 넘어가도록 하자.

Scanner
J2SE 5.0 부터 Scanner 라는 java.util.Scanner 클래스가 새로 추가되었다. Scanner 클래스를 이용하면 콘솔입력을 보다 쉽게 처리 할 수 있다.

다음의 예제를 보자.

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(sc.next());
    }
}
Scanner 를 사용하기 위해서는 먼저 java.util.Scanner 클래스를 import 해야 한다.

import java.util.Scanner;
Scanner 클래스는 생성자의 입력으로 System.in, 즉 콘솔입력인 InputStream 을 필요로 한다.

Scanner 객체의 next() 메소드는 단어 하나(Token)를 읽어들인다.

Scanner클래스에는 단어 뿐만 아니라 숫자, 문자열등 다양하게 읽어 들일 수 있는 여러 메소드들이 준비되어 있는데 몇가지만 알아보면 다음과 같은 것들이 있다.

next - 단어
nextLine - 라인
nextInt - 정수
콘솔 출력
이번에는 콘솔 출력에 대해서 알아보자.

우리는 예제들에서 System.out.println 이라는 것을 계속해서 사용해 왔다.

System.out은 PrintStream 클래스의 객체이다. PrintStream은 콘솔에 값을 출력할 때 사용되는 클래스이다. 보통 System.out.println은 콘솔에 문자열을 출력할 경우나 디버깅 시 많이 사용된다.

System.err라는 것도 있는데 System.out과 동일한 역할을 한다. 다만 System.err는 오류메시지를 출력할 경우에 사용하게 되어 있다.

※ unix의 경우 콘솔 프로그램 실행 시 출력옵션을 지정하면 System.out으로 출력한 내용과 System.err로 출력한 내용을 별도의 파일로 저장할 수도 있다.















자바 파일 쓰기
다음의 예제를 작성해 보자.

FileWrite.java

import java.io.FileOutputStream;
import java.io.IOException;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        FileOutputStream output = new FileOutputStream("c:/out.txt");
        output.close();
    }
}
위 예제를 실행해 보면 c:/ 디렉토리 바로 밑에 새로운 파일(out.txt)이 하나 생성되는 것을 확인할 수 있다.

파일을 생성하기 위해서 우리는 FileOutputStream 클래스를 사용했다. FileOutputStream 객체를 생성하기 위해서는 생성자의 입력으로 파일명을 넘겨주어야 한다. 위 예제에서는 경로를 포함하여 c:/out.txt라는 파일명을 생성자의 입력으로 전달하였다.

위의 예에서보면 output.close()라는 문장이 있는데 이것은 사용한 파일 객체를 닫아주는 것이다. 사실 이 문장은 생략해도 된다. 왜냐하면 자바 프로그램이 종료할 때 사용한 파일 객체를 자동으로 닫아주기 때문이다. 하지만 직접 사용한 파일을 닫아주는 것이 좋다. 사용했던 파일을 닫지 않고 다시 사용하려고 할 경우에는 에러가 발생할 수 있기 때문이다.

파일에 내용쓰기
이번에는 파일에 내용을 적어 보도록 하자.

import java.io.FileOutputStream;
import java.io.IOException;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        FileOutputStream output = new FileOutputStream("c:/out.txt");
        for(int i=1; i<11; i++) {
            String data = i+" 번째 줄입니다.\r\n";
            output.write(data.getBytes());
        }
        output.close();
    }
}
InputStream과 마찬가지로 OutputStream 역시 바이트 단위로 데이터를 처리하는 클래스이다. FileOutputStream은 OutputStream클래스를 상속받아 만든 클래스인데 역시 바이트 단위로 데이터를 처리하게끔 되어 있다.

FileOutputStream에 값을 쓸 때는 byte배열로 써야 하므로 위와같이 String을 byte배열로 바꾸어 주는 getBytes() 메써드를 이용해야만 했다. \r\n은 줄바꿈 문자이다. (※ 유닉스인 경우는 \n 만 있으면 된다. 윈도우즈의 경우 \r\n 처럼 \r 문자를 추가해야 노트패드 같은 에디터에서 줄바꿈이 제대로 표시되어 보인다.)

문자열을 파일에 쓸 때에는 FileOutputStream이 좀 불편하다. String을 byte배열로 변환해야 하기 때문이다.

좀 더 편리한 방법은 없을까?

다음의 예제를 보도록 하자.

import java.io.FileWriter;
import java.io.IOException;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("c:/out.txt");
        for(int i=1; i<11; i++) {
            String data = i+" 번째 줄입니다.\r\n";
            fw.write(data);
        }
        fw.close();
    }
}
위 예제와 같이 FileOutputStream 대신에 FileWriter 를 이용하면 byte 배열 대신 문자열을 직접 파일에 쓸 수가 있다.

하지만 \r\n을 문자열 뒤에 덧 붙여야 하는 불편함은 여전히 남아있다.

이런 불편함을 해소하려면 FileWriter대신 PrintWriter를 사용하면 된다. PrintWriter를 이용하면 \r\n을 덧붙이는 대신 println이라는 메써드를 사용할 수 있게 된다.

다음은 PrintWriter를 이용하여 파일을 작성하는 예제이다.

import java.io.IOException;
import java.io.PrintWriter;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter("c:/out.txt");
        for(int i=1; i<11; i++) {
            String data = i+" 번째 줄입니다.";
            pw.println(data);
        }
        pw.close();
    }
}
위의 프로그램을 다음의 프로그램과 비교해 보자.

for(int i=1; i<11; i++) {
    String data = i+" 번째 줄입니다.";
    System.out.println(data);
}
두 프로그램의 서로 다른 점은 data를 출력시키는 방법이다. 두 번째 방법은 우리가 지금껏 계속 사용해 왔던 콘솔 출력 방법이고 첫 번째 방법은 콘솔대신에 파일로 출력하는 방법이다. 차이점이 금방 눈에 들어 올 것이다. System.out대신에 PrintWriter를 이용했을 뿐이다.

첫 번째 예제를 작성해서 실행시키면 c:/out.txt 파일이 생성된다.

파일에 어떤 내용이 저장되었는지 확인 해 보자.

out.txt의 내용

1 번째 줄입니다.
2 번째 줄입니다.
3 번째 줄입니다.
4 번째 줄입니다.
5 번째 줄입니다.
6 번째 줄입니다.
7 번째 줄입니다.
8 번째 줄입니다.
9 번째 줄입니다.
10 번째 줄입니다.
두 번째 방법을 사용했을 때 콘솔에 출력될 내용이 파일에 고스란히 들어가 있는 것을 알 수 있다.

파일에 내용 추가하기
프로그램을 만들다 보면 파일에 내용을 쓰고 난 후에 또 새로운 내용을 추가하고 싶을 때가 생긴다. 이럴 경우에는 이미 작성된 파일을 다시 추가모드로 열어야 한다.

다음의 예제를 보자.

import java.io.FileWriter;
import java.io.IOException;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("c:/out.txt");
        for(int i=1; i<11; i++) {
            String data = i+" 번째 줄입니다.\r\n";
            fw.write(data);
        }
        fw.close();

        FileWriter fw2 = new FileWriter("c:/out.txt", true);
        for(int i=11; i<21; i++) {
            String data = i+" 번째 줄입니다.\r\n";
            fw2.write(data);
        }
        fw2.close();
    }
}
fw2라는 객체는 FileWriter("c:/out.txt", true) 와 같이 두번째 입력값이 추가로 입력되어 생성되었다. 두번째 boolean 입력 파라미터는 파일을 추가모드(append)로 열것인지에 대한 구분값이다. 파일을 추가모드로 열면 기존파일의 내용이후부터 파일이 쓰여지게 된다.

new FileWriter(파일명, 추가모드구분)
이제 위 예제를 실행하면 out.txt파일에 내용이 추가되는 것을 확인할 수 있을 것이다.

만약 FileWriter대신 PrintWriter를 이용하고 싶은 경우에는 다음과 같이 변경해야 한다.

import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class FileWrite {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter("c:/out.txt");
        for(int i=1; i<11; i++) {
            String data = i+" 번째 줄입니다.";
            pw.println(data);
        }
        pw.close();


        PrintWriter pw2 = new PrintWriter(new FileWriter("c:/out.txt", true));
        for(int i=11; i<21; i++) {
            String data = i+" 번째 줄입니다.";
            pw2.println(data);
        }
        pw2.close();
    }
}
PrintWriter의 생성자의 입력으로 파일명 대신 추가모드로 열린 FileWriter의 객체를 사용하면 된다.

파일 읽기
이번에는 파일을 읽는 방법에 대해서 알아보도록 하자.

다음의 예제를 작성해 보자.

FileRead.java

import java.io.FileInputStream;
import java.io.IOException;

public class FileRead {
    public static void main(String[] args) throws IOException {
        byte[] b = new byte[1024];
        FileInputStream input = new FileInputStream("c:/out.txt");
        input.read(b);
        System.out.println(new String(b));
        input.close();
    }
}
파일을 읽기 위해서는 위 예처럼 FileInputStream 클래스를 이용하면 된다. 다만 byte 배열을 이용하여 파일을 읽어야 하기 때문에 읽어야 하는 정확한 길이를 모를 경우에는 좀 불편한 방법이다. 위 예에서는 1024 바이트를 읽도록 코딩했다.

만약 파일을 라인단위로 읽을 수 있다면 훨씬 편리할 것이다. 다음과 같이 예제를 수정해 보자.

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileRead {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("c:/out.txt"));
        while(true) {
            String line = br.readLine();
            if (line==null) break;
            System.out.println(line);
        }
        br.close();
    }
}
위 예처럼 FileInputStream 대신 FileReader와 BufferedReader의 조합을 사용하면 라인단위로 파일을 읽을 수 있다. BufferedReader의 readLine 메소드는 더이상 읽을 라인이 없을 경우 null을 리턴한다.

위 예는 파일을 라인단위로 읽어서 출력하고 더 이상 읽을 라인이 없는 경우 while문을 빠져나간다.
3주차
예외처리
쓰레드

4주차
디자인 패턴1


5주차
디자인 패턴2
정규표현식



# 자바 정리
//캐릭터 설정방법 : 퍼블릭 + 클래스 + 캐릭터이름 {캐릭터 설명}
public class Card {
//속성 설정방법 : 퍼블릭/프로텍티드/기본/프라이빗 + (파이널 - 생성시 존재하는 모든 캐릭터 절대불변/스테틱 - 생성시 존재하는 모든 캐릭터 변동적용) + (클래스/기본형) + 속성이름;
//특수스킬 생성 설정방법 : 퍼블릭 + 생성할클래스(파라미터) {스킬내용}
//일반스킬 설정방법 : 퍼블릭/프로텍티드/기본/프라이빗 + (파이널/스테틱) + 리턴할 (클래스/기본형) + 스킬이름(파라미텨) {스킬내용};

    //캐릭터 카드 - (어떤 속성들이 있는지)속성 설정(만)
    public final int suitNumber;
    public final int rankNumber;

    //캐릭터 카드 - (어떤 속성들이 있는지)스킬 설정(만)
    //특수스킬.카드생성
    public Card(int suitNumber, int rankNumber) {
        this.suitNumber = suitNumber;
        this.rankNumber = rankNumber;
    }

    //일반스킬1.수트 보여주기
    public String getSuit() {
        switch (this.suitNumber) {
            case 1:
                return "Clubs";
            case 2:
                return "Hearts";
            case 3:
                return "Diamonds";
            case 4:
                return "Spades";
            default:
                return null;
        }
    }

    //일반스킬2.랭크 보여주기
    public String getRank() {
        switch (this.rankNumber) {
            case 1:
                return "Ace";
            case 11:
                return "Jackk";
            case 12:
                return "Queen";
            case 13:
                return "King";
            default:
                return String.valueOf(rankNumber);
        }
    }

    //일반스킬3.문자로 나타내기
    public String toString(){
        return getRank() + " of " + this.getSuit();
    }
}



파이널 : 캐릭터를 계속 추가생성하면 / 생성된 캐릭터마다 새로운 메모리가 할당되지만 / 똑같은 값으로 저장되는 / 불변의 값
스태틱 : 캐릭터를 계속 추가생성해도 / 생성된 캐릭터 모두 하나의 메모리를 공유하기 때문에 / 바꾸면 모든 캐릭터가 다 바뀌는 / 공유의 값
파이널 스태틱 : 새로운 캐릭터가 생성되도 하나의 메모리에 공유된, 그리고 절대 바뀌지 않을, 불변의 공유값



상속 : 메소드를 상속받을때 메소드를 그대로 상속받아야 한다(변수랑 메소드만)
(제네릭을 쓰면 상속도 중첩할 수 있다)

인터페이스 : 빈 메소드 이름만 공유/의무상속을 약속하고 실제 메소드는 달리 할 수 있다(추상메소드만)
(숨어있는 특수인터페이스 컴페어러블이 있다)

추상클래스 : 상속 인터페이스 다 동시에 쓰고싶으면 이걸 쓰자(변수 메소드 추상메소드)
(추상클래스를 상속받는 여러 클래스를 일일히 만들지 않고 바로 main파일에서 인스턴스가 생성되도록 할 수 있다)








/*
    클래스 만들기

    public = 다른곳에서 사용 가능
    private = 다른곳에서 사용 불가능(게터, 세터함수로 값에 접근할 수 있다)

    final
    >> 클래스 정의 >> 클래스 10개 생성 >> 메모리 공간 10개 할당 >> 변수공간 10개 생성
    >> 변수공간 10개에 할당하는 값이 항상 일정

    static
    1. 임의의 클래스 x 내부에 static 변수 y를 정의하면
    >> 클래스 x 정의
    >> 메모리 공간 1개 할당
    >> 변수공간 y 1개 지정(클래스 x를 생성하지 않아도, y가 정의만 되어있다면, 변수공간이 이미 생성되어 있으며, y를 사용할 수 있다)
    >> 메인 함수에서 클래스 10개 생성
    >> 이미 생성되어 있는 변수공간 1개에, 할당되는 y값을 매번 덮어쓴다

    2. 임의의 클래스 x 내부에 static 변수 y(클래스, 메소드, 변수 모두 포함)를 정의하면
    >> 클래스 x를 생성하지 않아도, y가 정의만 되어있다면, 클래스든, 메소드든, 변수든, y를 사용할 수 있다

    3. public static void main()에 대한 의문?
    >> 임의의 클래스 x안에 정의된 static 클래스 y : x를 생성하지 않아도 y를 쓸 수 있다
    >> 임의의 클래스 x안에 정의된 static 변수 y : x를 생성하지 않아도 y를 쓸 수 있다
    >> 임의의 클래스 x안에 정의된 static 메소드 y : x를 생성하지 않아도 y를 쓸 수 있고
    + static 메소드는 static 변수만 사용할 수 있으며
    + 메인 실행 메소드인 public static void main은 static 메소드 이므로 static 변수만 쓸 수 있으니까
    + 모든 클래스는 기본적으로 스태틱이다???

    static final
    >> 객체 10개 생성 >> 메모리 공간 1개 할당 >> 변수 1개 생성 >> 생성하는 값이 일정하다

    클래스 이름
    */












/*
        compareTo 메소드 사용하기
        >> 우선 implements Comparable<정렬하고 싶은 클래스>
        >> 이제 compareTo(기준 클래스) 메소드 사용가능
        >> 기준 클래스 1개를 정수 0으로 생각하고
        >> 다른 클래스를 상대적인 정수값으로 리턴해서
        >> 음수부터 양수까지 순서대로 클래스를 정렬하고 싶을 때 쓴다
        >> 정의 후 사용법 = .sort(정렬하고 싶은 클래스가 들어있는 자료구조);

        @Override
        public int compareTo(classTime o) {
            return end - o.end;
        }
        */






        /*
        Comparator 사용하기
        >> 우선 생성자로 생성
        >> 이제 compare(클래스 2개) 메소드 사용가능
        >> 클래스 2개를 비교해서 각 상태를 정수값으로 리턴하고
        >> 음수부터 양수까지 순서대로 두 클래스의 정렬상태를 정하고 싶을 때 쓴다
        >> 생성 후 사용법 = .sort(정렬하고 싶은 클래스가 들어있는 자료구조, 생성한 Comparator);
        */




# 포인터 정리
포인터


# 뜻1 : 포인터 = 주소를 저장하는 변수
int a = 1
int *ptr1 = &a

int array[3] = {1, 2, 3}
int (*ptr2)[3] = &array


# 뜻2 : *포인터 = 포인터에 저장된 주소가 가르키는 값을 리턴
*ptr1 = 1
*ptr2 = {1, 2, 3}


# 포인터의 연산
ptr + 1 = 포인터에 저장된 주소 + 주소가 가르키는 값의 크키 = 다음 주소를 리턴
ptr + i = 포인터에 저장된 주소 + 주소가 가르키는 값의 크기 * i = 다음 주소를 리턴

*(ptr + 1) = 다음 주소가 가르키는 값을 리턴
*(ptr + i) = 다음 주소가 가르키는 값을 리턴


# 배열
array = 0번째 인덱스의 값을 가르키는 주소를 리턴(주의 : 배열이 아니다 / 주소다)
array[i] = i번째 인덱스의 값을 리턴


# 포인터와 배열1
(*ptr2)[i] = 포인터에 저장된 주소가 가르키는 배열의 i번째 인덱스의 값


# 포인터와 배열2
뜻 : *ptr3 = array = 0번째 인덱스의 값을 가르키는 주소를 리턴해서 포인터에 저장

(ptr3 + 1) = 다음 주소를 리턴 = 1번째 인덱스의 값의 주소를 리턴
(ptr3 + i) = 다음 주소를 리턴 = i번째 인덱스의 값의 주소를 리턴

*(ptr3 + 1) = 다음 주소가 가르키는 값을 리턴 = 1번째 인덱스의 값의 주소가 가르키는 값을 리턴
*(ptr3 + i) = 다음 주소가 가르키는 값을 리턴 = i번째 인덱스가 값의 주소가 가르키는 값을 리턴

(array + 1) = 다음 주소를 리턴 = 1번째 인덱스의 값의 주소를 리턴
(array + i) = 다음 주소를 리턴 = i번째 인덱스의 값의 주소를 리턴

*(array + 1) = 다음 주소가 가르키는 값을 리턴 = 1번째 인덱스의 값의 주소가 가르키는 값을 리턴
*(array + i) = 다음 주소가 가르키는 값을 리턴 = i번째 인덱스가 값의 주소가 가르키는 값을 리턴

모양 : ptr3[i] = array[i]


# 포인터와 배열3
char str[3] = "abc"
printf("%s", str) = printf("%s", &str[0])
%s : 배열의 0번째 인덱스를 가르키는 주소가 가르키는 값부터 null문자를 만나기 전까지 출력


## 네임스페이스
1. namespace를 선언한다

2. namespace 내부의 변수와 함수를 선언하고 정의한다

3. namespace 외부에서도 namespace 내부의 변수와 함수를 선언하고 정의할 수 있다

4. namespace끼리 중첩해서 쓸 수 있다

5. 특별한 namespace에 속하지 않으면 ::를 사용한다

6. 전역변수나 전역함수와 이름이 겹치는 경우에는 모호성이 발생하기 때문에, using namespace를 사용한 경우에도 namespace를 표시해야 한다


# 아스키코드
숫자를 char로 바꾸면 char로 작동한다
char을 숫자처럼 연산하면 아스키코드로 작동한다