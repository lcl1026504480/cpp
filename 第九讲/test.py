class a(object):
    """docstring for ClassName"""
    n = 2


a1 = a()
a1.n = 3
a2 = a1
print(a1.n, a2.n)
print(id(a1), id(a1))
