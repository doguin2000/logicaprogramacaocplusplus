rs=float(input('Me fale quantas R$ você tem: '))
dol=(rs/4.97)
eur=(rs/6.14)
print('Com {}R$ você consegue comprar {:.2f}U$ e {:.2f}EUR'.format(rs, dol, eur))
