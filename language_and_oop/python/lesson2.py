# 데이터가 복잡하면 관리하기 어렵다
# 복잡한 데이터 관리 잘하는 방법 = 객체지향 프로그래밍

# 객체지향 프로그래밍의 4대 원칙
# 1. 추상화: 개발자가 클래스를 잘 만들면 객체를 사용하는 사람들은 클래스 내부를 몰라도 된다
# 2. 캡슐화: 변수를 감추고 get set 메소드로 접근하게 한다
# 3. 상속: 바퀴를 재발명하지 말자
# 4. 다형성: 1개의 함수가 여러 형태의 데이터를 컨트롤할 수 있어야 편하다

# 추상화 + 캡슐화 + 다형성
from abc import *


# 부모님이 자식에게 이 함수만큼은 꼭 만들어 달라고 신신당부 하는 부모님일 경우 = 추상 클래스
class User(metaclass=ABCMeta):
    # 속성 = 클래스(스태틱) 변수(모든 객체가 공유 가능) + 인스턴스 변수
    count = 0

    # 메소드 = 생성자(객체를 찍어낸다) + 다른 메소드
    # 매직 메소드: 특정 상황에 자동 실행

    # 생성자: 매직 메소드이고(객체를 생성할 때 자동 실행), 변수를 세팅할 수 있다
    def __init__(self, name, email, money):
        User.count += 1
        self._name = name  # __변수이름 = 외부에서 접근할 수 없도록 막아준다
        self._email = email
        self.set_money(money)  # set 메소드를 거쳐서 속성을 세팅하면 안전하다

    # __str__: 매직 메소드이고(print(객체))
    def __str__(self):
        return f"내 이름은 {self._name}이야. 이메일은 {self._email}!"

    @abstractmethod
    def get_name(self):
        pass

    def set_name(self, name):
        self._name = name

    def get_email(self):
        return self._email

    def set_email(self, email):
        self._email = email

    def get_money(self):
        return self.__money

    def set_money(self, money):
        if money < 0:
            print("돈은 음수가 아닙니다")
        else:
            self.__money = money


# user1 = User("김수연", "duddy5354@naver.com", 1000)
# print(user1.get_name())
# print(user1.get_email())
# print(user1.get_money())
# user1.set_money(-1000)
# print(user1.get_money())
# print(user1.count)
# user2 = User("김성연", "9999@naver.com", 1000)
# print(user1.count)
# print(user2.count)
# print(user1)


# 상속: User를 상속
# 상속받아도 숨겨진 변수는 자식이 마음대로 접근할 수 없다
# 자식까지만 접근할 수 있게 protected를 설정해주자
class Influencer(User):
    def __init__(self, name, email, money, sponsor):
        # 부모님! 부모님의 생성자로 나를 생성해주세요!
        super().__init__(name, email, money)
        # 내껏도 더해야지!
        self.__sponsors = [sponsor]

    # 부모님의 메소드를 내 입맛대로 다시 정의하는 것 = 오버라이딩
    def get_name(self):
        return f"{self._name}은(는) 엄청난 영향력을 가진 인플루언서입니다! {self.__sponsors[0]}의 후원을 받고 싶습니다!"


class Sponsor(User):
    def __init__(self, name, email, money, influencer):
        # 부모님! 부모님의 생성자로 나를 생성해주세요!
        super().__init__(name, email, money)
        # 내껏도 더해야지!
        self.__influencers = [influencer]

    # 부모님의 메소드를 내 입맛대로 다시 정의하는 것 = 오버라이딩
    def get_name(self):
        return f"{self._name}은(는) 영향력 있는 인플루언서를 적극 후원하는 스폰서입니다! 현재 {self.__influencers[0]}를 후원중입니다!"


influencer1 = Influencer("김수연", "haha@naver.com", 1000, "kakao")
print(influencer1)
print(influencer1.get_name())

sponcer1 = Sponsor("카카오", "kakao@kakao.com", 10000, "김수연")
print(sponcer1)
print(sponcer1.get_name())

# 과제
print("----인스타그램 만들기-----")
loginUsers = []
while True:
    mode = int(input("회원가입 모드(0) or 로그인 모드(1) or 관리자 모드(2)중 하나를 선택하세요: "))

    if mode == 0:
        # 파일을 쓸 준비를 하세요
        user_file = open("users.txt", "a")

        # 유저 정보를 입력받고 파일에 쓰세요
        while True:
            name = input("이름을 입력하세요: ")
            email = input("이메일을 입력하세요: ")
            money = input("돈을 입력하세요: ")
            type = input("인플루언서 vs 스폰서, 원하는 타입을 골라주세요: ")
            if type == '인플루언서':
                sponsor = input("원하는 스폰서를 입력하세요: ")
                complete = input("정보가 확실한가요? yes or no: ")
                if complete == "yes":
                    user_file.write(f"{name} {email} {money} {sponsor} {type}\n")
                    break
            else:
                influencer = input("후원할 인플루언서를 입력하세요: ")
                complete = input("정보가 확실한가요? yes or no: ")
                if complete == "yes":
                    user_file.write(f"{name} {email} {money} {influencer} {type}\n")
                    break
        user_file.close()

        print()
    elif mode == 1:
        email = input("이메일을 입력하세요: ")

        # 파일을 읽을 준비를 하세요
        user_file = open("users.txt", "r")
        lines = user_file.readlines()

        # 알맞은 유저 정보를 가져옵니다
        find = False
        for i in range(len(lines)):
            line = lines[i].split(' ')
            if line[1] == email:
                if (line[4] == '인플루언서'):
                    user = Influencer(line[0], line[1], int(line[2]), line[3])
                    loginUsers.append(user)
                    find = True
                    print("환영합니다")
                    print(user)
                    break
                else:
                    user = Sponsor(line[0], line[1], int(line[2]), line[3])
                    loginUsers.append(user)
                    find = True
                    print("환영합니다")
                    print(user)
                    break
            else:
                print("유저 정보를 검색중입니다")
        if find == False:
            print("존재하지 않는 유저입니다. 다시 로그인하세요")

        print()
    else:
        print("로그인한 유저들의 목록을 출력합니다")
        for user in loginUsers:
            print(user.get_name())

        print()
