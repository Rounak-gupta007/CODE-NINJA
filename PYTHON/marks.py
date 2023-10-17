marks = []
for i in range(6):
    mark = int(input("Enter the mark of student {}: ".format(i+1)))
    marks.append(mark)
marks.sort(reverse=True)
print("The marks of students in descending order are:", marks)25