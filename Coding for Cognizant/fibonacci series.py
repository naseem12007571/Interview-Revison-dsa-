num = int(input("Enter the number of Fibonacci num "))

last=0; previous=1
print(last)
print(previous)

for i in range(2, num):
    current = last + previous
    last = previous
    previous = current
    
    print(current)

    
