"""
решение: https://tasks.olimpiada.ru/upload/files/tasks/73/2022/sol-info-9;11-gr2-sch-sirius-22-23.pdf
"""

n = int (input ( ) )
k = int (input ( ) )
for r in range ( 1 , n + 1 ) :
    if ( r * k - 1 ) // n == ( r * ( k + 1 ) ) // n :
        continue
    else :
        print ( r )
        break
