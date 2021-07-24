import random

def dis_board(a):
    print(a[7]+'|'+a[8]+'|'+a[9])
    print(a[4]+'|'+a[5]+'|'+a[6])
    print(a[1]+'|'+a[2]+'|'+a[3])


# def dis_board(board):
#     # clear_output()  # Remember, this only works in jupyter!
#
#     print('   |   |')
#     print(' ' + board[7] + ' | ' + board[8] + ' | ' + board[9])
#     print('   |   |')
#     print('-----------')
#     print('   |   |')
#     print(' ' + board[4] + ' | ' + board[5] + ' | ' + board[6])
#     print('   |   |')
#     print('-----------')
#     print('   |   |')
#     print(' ' + board[1] + ' | ' + board[2] + ' | ' + board[3])
#     print('   |   |')
#
#



def player_ip():
    marker=''

    while marker != 'X' and marker !='O':   #### or   while not (marker == 'X' or marker =='O'):
        marker=input("Player 1: Choose X or O: ").upper()

    if marker =='X':
        return ('x','O')
    else:
        return ('O','X')



def placker_maker(board,marker,position):
    board[position]=marker

# placker_maker(board,'$',8)
# dis_board(board)

def win_check(board,mark):


    return ((board[7] == mark and board[8] == mark and board[9] == mark) or # across the top
    (board[4] == mark and board[5] == mark and board[6] == mark) or # across the middle
    (board[1] == mark and board[2] == mark and board[3] == mark) or # across the bottom
    (board[7] == mark and board[4] == mark and board[1] == mark) or # down the middle
    (board[8] == mark and board[5] == mark and board[2] == mark) or # down the middle
    (board[9] == mark and board[6] == mark and board[3] == mark) or # down the right side
    (board[7] == mark and board[5] == mark and board[3] == mark) or # diagonal
    (board[9] == mark and board[5] == mark and board[1] == mark)) # diagonal


# print(win_check(board,'X'))


def Choose():
    flip=random.randint(0,1)

    if flip ==0:
        return 'Player 1'

    else:
        return 'Player 2'




def space_check(board,position):
    return board[position]==' '



def full_board_check(board):
    for i in range(1,10):
        if space_check(board,i):
            return False
    return True




def player_choice(board):

    position =0
    while position not in [1,2,3,4,5,6,7,8,9 ] or not space_check(board,position):
        position=int(input("Enter a position (1-9):"))
    return position



def replay():
    choice=input("Enter a Yes or No:")

    return choice=='Yes'









print('Welcome to tic tac toe')

while True:

    the_board=[' ']*10
    player1_maker,player2_maker =player_ip()

    turn = Choose()
    print(turn + ' will go first')

    play_game =input('Ready to play ?y or n?')

    if play_game =='y':
        game_on=True
    else:
        game_on=False




    while game_on:
        if turn =='Player 1':

            dis_board(the_board)

            # choose position
            position=player_choice(the_board)
            # dis_board(the_board)
            #place the position
            placker_maker(the_board,player1_maker,position)

            #check if they won
            if win_check(the_board,player1_maker):
                dis_board(the_board)
                print('Player 1 Has WON !!!!')

                game_on=False

            else:
                if full_board_check(the_board):
                    dis_board(the_board)
                    print("Tie Game")
                    game_on= False
                    break
                else:
                    turn='Player 2'

        else:
            dis_board(the_board)

            # choose position
            position=player_choice(the_board)
            #place the position
            placker_maker(the_board,player2_maker,position)

            #check if they won
            if win_check(the_board,player2_maker):
                dis_board(the_board)
                print('Player 2 Has WON !!!!')
                game_on=False

            else:
                if full_board_check(the_board):
                    dis_board(the_board)
                    print("Tie Game")
                    break
                else:
                    turn='Player 1'



    if not replay():
        break
