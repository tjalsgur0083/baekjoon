def Christmas_tree():
    for i in range(1,9):
        print(' ' * (9 - i) + '*' * (2 * i - 1))

    for _ in range(2):
        print(' ' * 7 + '****')

    print("Merry Christmas\n" + ' ' * 4 + "2024")

Christmas_tree()