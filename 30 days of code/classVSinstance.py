# Problem Link : https://www.hackerrank.com/challenges/30-class-vs-instance/problem

class Person:
    age = 0;
    def __init__(self,initialAge):
        # Add some more code to run some checks on initialAge
        if initialAge<0:
            Person.age=0
            print("Age is not valid, setting age to 0.")
        else :
            Person.age=initialAge
    def amIOld(self):
        # Do some computations in here and print out the correct statement to the console
        if Person.age<13 :
            print("You are young.")
        elif Person.age>=13 and Person.age<18 :
            print("You are a teenager.")
        else :
            print("You are old.")

    def yearPasses(self):
        # Increment the age of the person in here
        Person.age+=1
