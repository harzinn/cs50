from cs50 import get_int

scores = []

count = get_int(f"Number of scores: ")
for _ in range(count):
    score = get_int(f"Score {_ + 1}: ")
    scores.append(score)

average = sum(scores) / len(scores)
print(f'The average is: {average}')