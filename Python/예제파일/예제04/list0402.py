# 양의 정수를 0까지 카운트다운

print('카운트다운하겠습니다.')
n = int(input('양의 정수를 입력해주세요.：'))

while n >= 0:
    print(n, end=' ')
    n -= 1           # n에서 1을 뺀다
print()
