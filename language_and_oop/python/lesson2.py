# 데이터가 복잡하면 관리하기 어렵다
# 복잡한 데이터 관리 잘하는 방법 = 객체지향 프로그래밍

# 객체지향 클래스(틀) 객체(찍어낸다)
class User:
    # 속성
    # 생성자: 속성을 세팅한다
    # 매직메소드: 자동으로 실행된다
    def __init__(self, name, email):
        self.__name = name
        self.__email = email
        self.__money = 10000

    # 행동
    # 이름 보기
    def get_money(self):
        return self.__money

    def use_money(self, used):
        if self.__money < used:
            print("돈이 없음ㄷㄷ")
        else:
            self.__money = self.__money - used

    # 이름 바꾸기
    def change_name(self, new_name):
        self.name = new_name

    # 이메일 바꾸기
    def change_email(self, new_email):
        self.email = new_email


user1 = User("김수연", "duddy5354@naver.com")
print(user1.get_money())
user1.use_money(100000)
print(user1.get_money())

# print(user1.__email)


# 인스턴스 변수: 객체 각각이 가지는 변수
# 인스턴스 메소드 및 규칙: 객체.메소드() => 객체가 자동으로 메소드의 첫 파라미터로 전달된다
# self
# 매직 메소드
# __init__
# __str__
# 클래스(스태틱) 변수
# 클래스(스태틱) 메소드
# 추상화: 내가 고생하면 쓰는 애들은 편하다
# 캡슐화: 프라이빗 퍼블릭 + getter setter > __를 붙이면 프라이빗 변수로 쓸 수 있다(사실은 아니다) + 캡슐로 묶어서 하나의 부품처럼 쓰자
# 상속: 바퀴를 재발병하지 말자
# 다형성: 여러 데이터를 컨트롤할 수 있어야 편하다
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
