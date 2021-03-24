# 1. 파이썬 파이참 컴파일에러 런타임에러 가상환경 코멘트
#
# # 2. 자료형(문자 숫자 불린) 변수 콘솔 gui 프린트 포멧팅
# name = "김수연"
# birth = 1999

# now = 2021
# print(f"내 이름은 {name}입니다")

# name = "임지혁"
# birth = 1996
# now = 2021
# print(f"{name}나이는{now - birth + 1}입니다.")


# # 3. 함수 리턴
# def get_age(now, birth):
#     return now - birth + 1


# print(f"나이는 {get_age(now, birth)}살 입니다")
#
# # 4. 사전 배열
# info_of_suyeon_dict = {name: "김수연",
#                        birth: 1999,
# info_of_jihyeon_dict = {name: "이지현",
#                         birth: 2000,
#                         isSheBeautiful: False}
# info_of_sungyeon_dict = {name: "김성연",
#                          birth: 1998,
#                          isSheBeautiful: True}
# user_arr = [info_of_suyeon_dict, info_of_jihyeon_dict, info_of_sungyeon_dict]


# # 4. while(flag) for
# i = 0
# while i < len(user_arr):  # 배열의 크기까지 반복한다
#     print(f"나는 {user_arr[i][name]}이고 {get_age(now, user_arr[i][birth])}살입니다")
#     i = i + 1
# print("드디어 끝났다 ㄷㄷ")
#
# for i in range(len(user_arr)):
#     print(f"나는 {user_arr[i][name]}이고 {get_age(now, user_arr[i][birth])}살입니다")
# print("드디어 끝났다 ㄷㄷ")
#
# #구구단???

# i = 1
# while i < 10:
#     print(f"1 * {i} = {1 * i}")
#     i = i + 1
# for a in range(1, 10):
#     for i in range(1, 10):
#         print(f"{a} * {i} = {a * i}")

# 사전 만들기

# num = 3
# sort = "coffee"
# print (f"나는 {%d}잔의 {%s}를 먹었다.", num, sort)

# 과제 보충 설명
#
# 1. 코드를 돌리면
# 입력 모드 / 시험 모드
# 2개가 콘솔창에 나오고
# 사용자가 입력을 통해 선택 가능
# (예를 들어
# 1을 누르면 입력 모드
# 2를 누르면 시험 모드)
#
# 2. 입력 모드의 경우
# 영단어를 입력하세요:
# 라는 인풋이 콘솔에 뜨고
# 입력하면
# 한글 뜻도 입력하세요:
# 라고 역시 인풋이 콘솔에 뜨고
#
# 이게 반복되다가
# 영단어를 입력하는 부분에서 exit를 누르면
# 프로그램이 종료된다
#
# 이 때, 종료된 후 voca.txt라는 텍스트 파일이 생성되며, 생성된 파일 내에는
#
# apple 사과
# school 학교
#
# 이런 형태로 적혀 있어야 한다
#
# 3. 시험 모드의 경우
# voca.txt의 파일을 읽어서
# 랜덤하게
# apple의 뜻을 쓰세요:
# 라고 콘솔에 나와야 하며
# 한글 뜻을 사용자가 입력한 경우
#
# 만약 맞앗다면 맞았습니다!라고 출력하고 다른 단어를 질문
#
# 만약 틀렸다면 틀렸습니다!라고 출력하고 다른 단어를 질문
#
# 입력하는 부분에 바이바이 라고 입력하면 프로그래밍 종료되면 되어야 한다
#
#
# 과제는 여기까지!!!!
import random

print("----단어장 만들기-----")
mode = int(input("입력모드(0) 또는 시험모드(1)을 선택하세요: "))

if mode == 0:
    # 파일을 쓸 준비를 하세요
    voca_file = open("voca.txt", "a")

    # 단어를 입력받고 파일에 쓰세요
    while True:
        english_voca = input("영단어를 입력하세요: ")
        if english_voca == 'exit':
            break
        korean_voca = input("뜻을 입력하세요 : ")
        voca_file.write(f"{english_voca} {korean_voca}\n")
    voca_file.close()

if mode == 1:
    # 파일을 읽을 준비를 하세요
    voca_file = open("voca.txt", "r")
    lines = voca_file.readlines()

    # 시험을 봅니다
    while True:
        randomIndex = random.randint(0, 2)
        korean_voca = input(f"{lines[randomIndex].split(' ')[0]}의 뜻을 쓰세요: ")
        if korean_voca == "바이바이":
            break
        elif korean_voca + '\n' == lines[randomIndex].split(' ')[1]:
            print("정답")
        else:
            print("오답")
    voca_file.close()
    print("끝")

#
# print("BYEBYE!")
# # b = input("영단어를 입력하세요: ")
# # print()
# #
# # list["apple" : "사과" ,"banana" : "바나나","kiwi":"키위"]
# #
# # file = 'words.txt'
# # open(file,)
# #
# # for i in range(100):
