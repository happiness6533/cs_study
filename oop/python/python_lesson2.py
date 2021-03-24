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
