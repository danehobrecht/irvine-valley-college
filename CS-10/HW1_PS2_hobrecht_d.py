# Dane Hobrecht
# 1103521
# This program calculates the net gain/loss based on given stock values, among other variables.

# Input
stock_name = (input('Enter Stock name: '))
number_of_shares = int(input('Enter Number of shares : '))
purchase_price = float(input('Enter Purchase price : '))
selling_price = float(input('Enter selling price : '))
commission = float(input('Enter Commission : '))

# Processing & calculations
stock_paid = (number_of_shares * purchase_price)
commission_paid = (stock_paid * commission)
stock_sold = (number_of_shares * selling_price)
commission_sold = (stock_sold * commission)
net = (stock_sold - commission_paid) - (stock_paid + commission_sold)

# Output
print('\nAmount paid for the stock:          $' + format(stock_paid, '13,.2f'))
print('Commission paid on the purchase:    $' + format(commission_paid, '13,.2f'))
print('Amount the stock sold for:          $' + format(stock_sold, '13,.2f'))
print('Commission paid on the sale:        $' + format(commission_sold, '13,.2f'))
print('Profit (or loss if negative):       $' + format(net, '13,.2f'))

##Test Run 1
##Enter Stock name: Kaplack, Inc.
##Enter Number of shares : 10000
##Enter Purchase price : 33.92
##Enter selling price : 35.92
##Enter Commission : 0.04
##
##
##Amount paid for the stock:          $   339,200.00
##Commission paid on the purchase:    $    13,568.00
##Amount the stock sold for:          $   359,200.00
##Commission paid on the sale:        $    14,368.00
##Profit (or loss if negative):       $    -7,936.00
##
##Test Run 2
##Enter Stock name: IBM
##Enter Number of shares : 15000
##Enter Purchase price : 50.25
##Enter selling price : 100.20
##Enter Commission : 0.02
##
##
##Amount paid for the stock:          $   753,750.00
##Commission paid on the purchase:    $    15,075.00
##Amount the stock sold for:          $ 1,503,000.00
##Commission paid on the sale:        $    30,060.00
##Profit (or loss if negative):       $   704,115.00
##
##Test Run 3
##Enter Stock name: Loke, Inc.
##Enter Number of shares : 50000
##Enter Purchase price : 100.93
##Enter selling price : 147.28
##Enter Commission : 0.06 
##
##
##Amount paid for the stock:          $ 5,046,500.00
##Commission paid on the purchase:    $   302,790.00
##Amount the stock sold for:          $ 7,364,000.00
##Commission paid on the sale:        $   441,840.00
##Profit (or loss if negative):       $ 1,572,870.00
##
##Test Run 4
##Enter Stock name: Meta, Inc.
##Enter Number of shares : 2
##Enter Purchase price : 310.41
##Enter selling price : 6.66
##Enter Commission : 0.03
##
##
##Amount paid for the stock:          $       620.82
##Commission paid on the purchase:    $        18.62
##Amount the stock sold for:          $        13.32
##Commission paid on the sale:        $         0.40
##Profit (or loss if negative):       $      -626.52
##
##Test Run 5
##Enter Stock name: Red Hat, Inc.
##Enter Number of shares : 23852
##Enter Purchase price : 187.71
##Enter selling price : 283.13
##Enter Commission : 0.09
##
##
##Amount paid for the stock:          $ 4,477,258.92
##Commission paid on the purchase:    $   402,953.30
##Amount the stock sold for:          $ 6,753,216.76
##Commission paid on the sale:        $   607,789.51
##Profit (or loss if negative):       $ 1,265,215.03
