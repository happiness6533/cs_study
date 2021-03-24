def add_print_to(original):
    '''이게 docstring이구'''

    def wrap(params):
        print("파이썬도 함수형 플밍 되네ㄷㄷ")
        original(params)

    return wrap


# doctstring을 보여줘
help(add_print_to())


@add_print_to
def original_function():
    print("함수를 리턴할 수 있군 ㅁㅊ")


# 함수형 프로그래밍을 데코레이터로 대체할 수 있군
original_function()


class User:
    # 클래스 변수
    count = 0

    # 매직 메소드: 특정 상황에 자동 실행
    def __init__(self, name, age):
        # 인스턴스 변수: 객체 각각이 가지는 변수
        self.__name = name  # 아아아니 이게 진짜로 프라이빗이 된게 아니라 그냥 이름을 User__name 이렇게 바꾼거라서 접근ㅇ ㅣㅇㄴ될 뿐
        # 이름 다르게 접근하면 접근이 된다 = 캡슐화 사실 개구라 응 미친
        self.set_age(age)
        User.count += 1

    def __str__(self):
        return "객체를 프린트하면 이게 자동으로 호출될거야"

    # 스태틱 변수: 공통 변수

    # 인스턴스 메소드
    # 파이썬은 동적언어지만 정적 언어처럼 타입을 표시할 수 이싸
    def print_add_age(self, add: int) -> int:
        print(self.age + add)
        return self.age + add

    def __private_func(self) -> int:
        return 1

    def set_age(self, age):
        if age > 0:
            self.__age = age
        else:
            self.__age = 0

    # 클래스 메소드
    # 스태틱 메소드
    pass


user1 = User("김성주", 20)
user1.print_add_age(14)  # user1이 자동으로 첫 파라미터로 전달된다 = self
User.count = 10  # 설정
print(User.count)  # 읽기
print(user1.count)  # 읽기

# add_print_to(user1.print_add_age)(14)


# 4대 원칙: 추상화 캡슐화 상속 다형성
# 추상화: 사용자는 내부를 하나도 몰라도 쉽게 쓰도록 해주자
# 캡슐화: 프라이빗 퍼블릭 적용하자 + 프라이빗 속성은 외부에서 필요하다면? getter setter 메소드를 통과해서만 쓸 수 있게 하자
