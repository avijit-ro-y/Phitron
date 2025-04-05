def split_strings(S):
    balance = 0
    count = 0
    result = []
    start = 0

    for i in range(len(S)):
        if S[i] == 'L':
            balance += 1
        else:
            balance -= 1

        if balance == 0:
            count += 1
            result.append(S[start:i+1])
            start = i + 1

    print(count)
    for part in result:
        print(part)


S = input()
split_strings(S)
