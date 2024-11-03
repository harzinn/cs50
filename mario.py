while True:
    try:
        n = int(input('Height/Width: '))
        if n > 0:
            break
        else:
            print("Please enter a positive integer")
    except:
        print('Invalid input.  Please enter a positive integer')
        pass

for i in range(n):
    print('#' * n)