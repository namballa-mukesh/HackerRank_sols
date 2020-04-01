// Problerm Link : https://www.hackerrank.com/challenges/30-scope/problem


    Difference(int elements[])  {
        this.elements=elements;
    }
    void computeDifference() {
        int max=0, min=100, num1, num2;
        for(int i=0; i<elements.length; i++)    {
            for(int j=0; j<elements.length; j++)    {
            num1= (elements[i]>elements[j]) ? elements[i]:elements[j];
            max= (num1>max) ? num1:max;
            num2= (elements[i]<elements[j]) ? elements[i]:elements[j];
            min= (num2<min) ? num2:min;
            }
        }
        maximumDifference = max-min;
    }
