n = int(input())
a = list(map(int, input().split()))

def count(x):
    count = 0
    while x % 2 == 0:
        x //= 2
        count += 1
    return count

min_operations = min(count(num) for num in a)
print(min_operations)
