from cs50 import get_int

scores = []
for _ in range(3):
    score = get_int(f"Score {_ + 1}: ")
    scores.append(score)

average = sum(scores) / len(scores)
print(f'The average is: {average}')