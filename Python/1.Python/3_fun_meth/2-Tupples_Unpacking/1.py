# stock_price=[('Appl',200),('goog',400),('MSFT',100)]
# for i,j in stock_price:
#     print(f"The name is :-{i} and price {j}")



#doing by ()s

work_hours=[('abby',100),('Billy',400),('Cassie',800)]

def a(work_hours):
    current=0
    empolyee_of_month=''

    for e,h in work_hours:
        if h>current:
            current=h
            empolyee_of_month=e

        else:
            pass

    return (empolyee_of_month,current)

# b=a(work_hours)
print(a(work_hours))
