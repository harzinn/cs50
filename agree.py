s = input('Do you agree? ').lower()

if s in ['y', 'yes']:
    print('Agreed')
elif s in ['n', 'no']:
    print('Disagree')
elif s in ['x']:
    print('What?!')
